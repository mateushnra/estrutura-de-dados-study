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

main (){	
	int vet[6], eleito, i, j, achou, posi;

	setlocale (LC_ALL, "Portuguese");

	inputVet(vet);

	for(i = 1; i < 6; i++){
		eleito = vet[i];
		j = 0; achou = 0;
		while(j < i && achou == 0){
			if(vet[j] > eleito){
				posi = j;
				achou = 1;
			}
			j++;		
		}
		if(achou == 1){
		for( j = i; j > posi; j--){	
			vet[j]= vet[j - 1];
		}
			vet[posi] = eleito;	
		}	
	}	

	outputVet(vet);	
}
