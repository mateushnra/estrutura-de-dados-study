#include <iostream>

using namespace std;

int Pot(int b, int p){
	if(p == 0){
		return 1;
	}else{
		return (b * pot(b, p - 1));
	}
}

main () {
	int b, p;	
	setlocale (LC_ALL, "Portuguese");
	
	cout << "Informe a base da pot�ncia: ";
	cin >> b;
	cout << "Informe a quanto ser� elevado esse n�mero: ";
	cin >> p;
	
	cout << endl << "O resultado da pot�ncia �: " << Pot(b,p) << endl;
	
	system("pause");
}
