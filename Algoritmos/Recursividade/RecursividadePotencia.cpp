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
	
	cout << "Informe a base da potência: ";
	cin >> b;
	cout << "Informe a quanto será elevado esse número: ";
	cin >> p;
	
	cout << endl << "O resultado da potência é: " << Pot(b,p) << endl;
	
	system("pause");
}
