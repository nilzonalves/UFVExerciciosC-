#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "Pessoa.h"
#include "Organizador.h"
#include "Juiz.h"
#include "Ajudante.h"
#include "Participante.h"
#include "Competidor.h"


using namespace std;

int main(){

	
	Ajudante AJ1("Doido", 999, 1, 7, 7, 10);

	AJ1.imprime();
	cout << "Din recebido: " << AJ1.dinheiroRecebido() << endl << endl;

	
	Competidor C1("Jucelino", 888, 10, "Cristianetes", 1);

	C1.imprime();
	cout << "Din recebido: " << C1.dinheiroRecebido() << endl << endl;

	Juiz juiz("Lucas", 5187, 7, 27, 7.777, 9);
	
	juiz.imprime();
	cout << "Din recebido: " << juiz.dinheiroRecebido() << endl << endl;

	Ajudante AJ2(AJ1);
	Juiz J2;

	J2 = juiz;


	//TUDO TA FUCIONANDO, CONFIA!

	return 0;
}