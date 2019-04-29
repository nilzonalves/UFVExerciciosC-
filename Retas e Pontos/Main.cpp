#include <stdio.h>
#include <iostream>
#include <string>
#include "Ponto.h"
#include "Reta.h"


using namespace std;

int main(){

	Ponto p, p2, p3, p4;
	
	p.setX(8);
	p.setY(30);

	p2.setX(9);
	p2.setY(96);

	p3.setX(10);
	p3.setX(10);

	p4.setX(10);
	p4.setX(10);


	Reta r(p, p2);
	Reta r2(p3, p4);

	//Sobrecarga
	cout << r;
	cout << r2;

	//Atribuicao
	Ponto j;
	j = p;

	//Construtor de cópia
	Ponto k(j);

	k.imprime();

	//Pra esse metodo, alguem que seja reta precisa chama-lo.
	//Poderia ser o r, r2 ou qualuer um q seja reta.
	cout << r2.comprimento(p, p4) << endl;


	return 0;
}