#include <iostream>

using namespace std;

main () {
	int a, b; 
	int *p, *g;
	
	setlocale (LC_ALL, "Portuguese");
	
	a = 3;
	b = 1;
	
	p = &a;
	g = &b;
	
	cout << "Valor da variável que o ponteiro *p esta apontando: " << *p << endl;
	cout << "Valor do endereço que o ponteiro p esta apontando: " << p << endl;
	
	cout << "Valor da variável que o ponteiro *g esta apontando: " << *g << endl;
	cout << "Valor do endereço que o ponteiro g esta apontando: " << g << endl;
	
	cout << "Resultado do calculo '*p * 3 + *g': " << *p * 3 + *g << endl;

	system("pause");
}
