#include <iostream>

using namespace std;

int Fib(int n){
	if(n == 0){
		return 0;
	}else{
		if(n == 1){
			return 1;
		}else{
			return (Fib(n - 1) + Fib(n - 2));
		}
	}
}

main () {
	int n;	
	setlocale (LC_ALL, "Portuguese");
	
	cout << "Informe qual n�mero da sequ�ncia de Fibonacci: ";
	cin >> n;
	
	cout << endl << "O resultado " << n << " de Fibonacci �: " << Fib(n) << endl;
	
	system("pause");
}
