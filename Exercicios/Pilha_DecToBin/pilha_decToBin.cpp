#include <iostream>

using namespace std;
int const maxtam = 20;
int topo, pilha[maxtam];

void inicializador(){
	topo = -1;
}

bool pilha_vazia(){
	if(topo == -1)
		return true;
	else
		return false;
}	

bool pilha_cheia(){
	if(topo == maxtam - 1)
		return true;
	else
		return false;
}

bool push (int valor){
	if(pilha_cheia())
		return false;
	else{
		topo++;
		pilha[topo] = valor;
		return true;
	}
}

bool pop(int &valor){
	if(pilha_vazia())
		return false;
	else{
		valor = pilha[topo];
		topo--;
		return true;
	}
}

bool get(int &valor){
	if(pilha_vazia())
		return false;
	else{
		valor = pilha[topo];
		return true;
	}
}

void decToBin(int &dec, int &valor){
	int resto;
	
	while(dec != 0){
		resto = dec % 2;
		push(resto);
		dec = dec / 2;
		pop(valor);
		cout << valor;
	}
}

main() {
	int valor;
	int dec;
	
	cout << "Informe o valor decimal para ser convertido em binario: ";
	cin >> dec;

	inicializador();
	decToBin(dec, valor);
}
