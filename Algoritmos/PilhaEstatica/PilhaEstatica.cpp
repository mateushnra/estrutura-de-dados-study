#include <iostream>

using namespace std;
int const maxtam = 6;
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

main() {
	int valor;
	
	inicializador();
	push(6);
	push(3);
	push(2);
	pop(valor);	cout << valor;
	push(7);
	pop(valor); cout << valor;
	pop(valor); cout << valor;
	
}
