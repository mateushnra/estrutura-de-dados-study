#include <iostream>

using namespace std;

void inputVet (int vet[6]){
	for(int x = 0; x < 6; x++){
		cout << "Informe o valor do " << x + 1 << "� n�mero: ";
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
	int vet[6], num, achou = 0, posi, inicio, fim, conta;
	
	setlocale (LC_ALL, "Portuguese");
	
	inputVet(vet);
	
	cout << "Informe o n�mero a ser encontrado: ";
	cin >> num;
	
	inicio = 0;
	fim = 9;
	conta = (inicio + fim) / 2;
	posi = int(conta);
	
	while(inicio <= fim  && achou == 0){
		if(vet[posi] == num){
			achou = 1;
		}else if(num < vet[posi]){
			fim = posi - 1;
			conta = (inicio + fim) / 2;
			posi = int(conta);
		}else{
			inicio = posi + 1;
			conta = (inicio + fim) / 2;
			posi = int(conta);
		}
	}
	
	if(achou == 0){
		cout << endl << "O n�mero n�o foi encontrado!" << endl;
	}else{
		cout << endl << "O n�mero " << num << " foi encontrado na posi��o " << posi << " do vetor!" << endl;
	}
	
	outputVet(vet);
	
	system("pause");
}
