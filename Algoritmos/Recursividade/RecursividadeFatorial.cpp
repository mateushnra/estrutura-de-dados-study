#include <iostream>

using namespace std;

int Fatorial(int n){
	if(n == 1){
		return 1;
	}else{
		return Fatorial(n - 1) * n;
	}
}

main () {
	int n;	
	setlocale (LC_ALL, "Portuguese");
	
	cout << "Informe qual n�mero deseja descobrir o fatorial: ";
	cin >> n;
	
	cout << endl << "O fatorial de " << n << " �: " << Fatorial(n) << endl;
	
	system("pause");
}
