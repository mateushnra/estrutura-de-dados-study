#include <iostream>

using namespace std;

void inputVet (int vet[6]){
	for(int x = 0; x < 6; x++){
		cout << "Informe o valor do " << x + 1 << "° número: ";
		cin  >> vet[x]; 
		cout << endl;
	}
}

void outputVet (int vet[6]){
	cout << endl;
	for(int y = 0; y < 6; y++){
		cout << vet[y] << " ";
	}
	cout << endl;
}

main () {
	int vet[6], aux, i, contInteracao = 0; bool endTest;
	
	setlocale (LC_ALL, "Portuguese");
	
	inputVet(vet);
	
	do {
		endTest = false;
		
		for(i = 0; i < 5; i++){
			if(vet[i] > vet[i + 1]){
				endTest = true;
				aux = vet[i]; vet[i] = vet[i + 1]; vet[i + 1] = aux; 
			}
		}
		
		contInteracao ++;
	} while (endTest == true);
	
	cout << endl << "A quantidade de interações foi: " << contInteracao << "!" << endl;
	outputVet(vet);
	
	system("pause");
}
