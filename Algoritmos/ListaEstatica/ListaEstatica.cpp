#include <iostream>

using namespace std;
int const maxtam = 6;
int tras, frente = 0, lista[maxtam];

void inicializador(){
	tras = -1;
}

bool lista_vazia(){
	if(tras == -1)
		return true;
	else
		return false;
}	

bool lista_cheia(){
	if(tras == maxtam - 1)
		return true;
	else
		return false;
}

bool inserir_inicio(int valor){
	if(lista_cheia())
		return false;
	else{
		for(int i = tras + 1; i > frente; i--){
			lista[i] = lista[i - 1];
		}
		lista[frente] = valor;
		tras++;
		return true;
	}
}

bool inserir_meio(int valor, int posi){
	if(lista_cheia())
		return false;
	else{
		if(posi > frente && posi < tras){
			for(int i = tras + 1; i > posi; i--){
				lista[i] = lista [i - 1];
			}
			lista[posi] = valor;
			tras ++;
			return true;
		} else {
			return false;
		}
	}
}

bool inserir_fim(int valor){
	if(lista_cheia())
		return false;
	else{
		tras++;
		lista[tras] = valor;
		return true;
	}
}

bool remover_inicio(int &valor){
	if(lista_vazia())
		return false;
	else{
		valor = lista[frente];
		for(int i = 0; i < tras; i++){
			lista[i] = lista[i + 1];
		}
		tras--;
		return true;
	}
}

bool remover_meio(int &valor, int posi){
	if(lista_vazia())
		return false;
	else{
		if(posi > frente && posi < tras){
			valor = lista[posi];
			for(int i = posi; i < tras; i++){
				lista[i] = lista [i + 1];
			}
			tras--;
			return true;
		}else {
			return false;
		}
	} 
}

bool remover_fim(int &valor){
	if(lista_vazia())
		return false;
	else{
		valor = lista[tras];
		tras--;
		return true;
	}
}

bool ordenar(){
	if(tras < 1)
		return false;
	else{
		int menor, aux, posi;
		for (int i = 0; i < tras; i++){
			menor = lista[i + 1];
			posi = i + 1;
			
			for (int j = i + 1; j <= tras; j++){
				if (lista[j] < menor){
					menor = lista[j];
					posi = j;
				}
			}
			
			if (menor < lista[i]){
				aux = lista[posi];
				lista[posi] = lista[i];
				lista[i] = aux;
			}
		}
	}
}

bool buscar(){
	if(lista_vazia())
		return false;
	else{
		int posi, achou = 0, i = 0, num;
		cout << endl << "Informe um numero para ser buscado no vetor: ";
		cin >> num;
		
		while(i <= tras && achou == 0){
			if(lista[i] == num){
				achou = 1;
				posi = i;
			}else{
				i++;
			}
		}
		
		if(achou == 0){
			cout << endl << "O numero nao foi encontrado!" << endl;
		}else{
			cout << endl << "O numero " << num << " foi encontrado na posicao " << posi << " do vetor!" << endl << endl;
		}
	}
}


main() {
	int valor;
	
	inicializador();
	inserir_inicio(1);
	inserir_inicio(2);
	inserir_inicio(3);
	inserir_fim(4);
	inserir_fim(5);
	inserir_meio(6, 3);
	buscar();
	ordenar();
	remover_meio(valor, 3); cout << valor;
	remover_inicio(valor); cout << valor;
	remover_inicio(valor); cout << valor;
	remover_fim(valor); cout << valor;
	remover_inicio(valor); cout << valor;
	remover_fim(valor); cout << valor;
}
