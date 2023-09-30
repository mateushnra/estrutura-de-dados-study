#include <iostream>

using namespace std;
int const maxtam = 6;
int fim, fila[maxtam];

void inicializador(){
	fim = -1;
}

bool fila_vazia(){
	if(fim == -1)
		return true;
	else
		return false;
}	

bool fila_cheia(){
	if(fim == maxtam - 1)
		return true;
	else
		return false;
}

bool inserir(int valor){
	if(fila_cheia())
		return false;
	else{
		fim++;
		fila[fim] = valor;
		return true;
	}
}

bool retirar(int &valor){
	if(fila_vazia())
		return false;
	else{
		valor = fila[0];
		fim--;
		for(int i = 0; i <= fim; i++){
			fila[i] = fila [i + 1];
		}
		return true;
	}
}

bool get(int &valor){
	if(fila_vazia())
		return false;
	else{
		valor = fila[0];
		return true;
	}
}

main() {
	int valor;
	
	inicializador();
	inserir(6);
	inserir(3);
	inserir(2);
	retirar(valor);	cout << valor;
	inserir(7);
	retirar(valor); cout << valor;
	retirar(valor); cout << valor;
}
