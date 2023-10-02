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
	int vet[6], num, achou = 0, i = 0, posi;
	
	setlocale (LC_ALL, "Portuguese");
	
	inputVet(vet);
	
	cout << "Informe o número a ser encontrado: ";
	cin >> num;
	
	while(i < 6 && achou == 0){
		if(vet[i] == num){
			achou = 1;
			posi = i;
		}else{
			i++;
		}
	}
	
	if(achou == 0){
		cout << endl << "O número não foi encontrado!" << endl;
	}else{
		cout << endl << "O número " << num << " foi encontrado na posição " << posi << " do vetor!" << endl;
	}
	
	outputVet(vet);
	
	system("pause");
}
