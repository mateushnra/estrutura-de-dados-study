#include <iostream>

using namespace std;

void inputVet (int vet[6]){
	for(int x = 0; x < 6; x++){
		cout << endl << "Informe o valor do " << x + 1 << "° número: ";
		cin  >> vet[x]; 
	}
}

void outputVet (int vet [6]){
	for(int y = 0; y < 6; y++){
		cout << vet[y] << " ";
	}
}

main () {
	int vet[6], menor, aux, i, j, posi;
	
	setlocale (LC_ALL, "Portuguese");
	
	inputVet(vet);
	
	for (i = 0; i < 5; i++){
		menor = vet[i + 1];
		posi = i + 1;
		
		for (j = i + 1; j < 6; j++){
			if (vet[j] < menor){
				menor = vet[j];
				posi = j;
			}
		}
		
		if (menor < vet [i]){
			aux = vet[posi];
			vet[posi] = vet[i];
			vet[i] = aux;
		}
	}
	
	outputVet(vet);
	
	system("pause");
}
