#include <string>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include "formaBasica.h"
#include "Circulo.h"
#include "Retangulo.h"

using namespace std;

int main(){

	formaBasica a(7,77,1,2,1);

	Circulo c1(100, 120, 3, 2, 1, 30);
	c1.imprime();
	cout << "Area = " << c1.area() << endl;

	Circulo c2 = c1;
	c2.setX(25);
	c2.setY(17);
	c2.setRaio(25);

	c2.imprime();

	cout << c2;

	Retangulo r1(40, 50, 1, 1, 2, 80, 30);
	r1.imprime();
	cout << "Area = " << r1.area() << endl;

	Retangulo r2;
	r2 = r1;
	r2.imprime();

	formaBasica *vet[2];
	vet[0] = &c1;
	vet[1] = &r1;

	cout << vet[0]->area() << endl;
	cout << vet[1]->area() << endl;




	return 0;
}