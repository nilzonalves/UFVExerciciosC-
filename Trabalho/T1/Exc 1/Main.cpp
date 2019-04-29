#include <stdio.h>
#include <iostream>
#include <string.h>
#include "Fracao.h"
#include <iomanip>

using namespace std;

int main(){

	Fracao f;

	f.setNumerador(8888);
	f.setDenominador(2525);

	cout << f.simplifica() << endl;
	f.imprimeFracao();
	f.imprimeFracaoFlu();

	cin >> f; // Vai esperar a entrada de dois inteiros

	cout << f; // Vai printar esses dois inteiros

	Fracao h;
	h = f; // Atribuicao

	cout << h;

	if(h == f)
		printf("are the same!\n");

	cout << setprecision(2) << f*h << endl;

	if(h < f)
		cout << "h menor que f!" << endl;
	else
		cout << "h nao é menor que f" << endl;

	return 0;
}


