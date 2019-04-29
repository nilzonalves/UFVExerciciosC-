#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "Pessoa.h"

#ifndef PARTICIPANTE_H
#define PARTICIPANTE_H

using namespace std;

class Participante : Pessoa
{

public:
	Participante();
	~Participante();


	Participante(Participante&);
	Participante(string, const int, const double);

	Participante& operator=(Participante&);

	void setPremio(double);
	double getPremio();

	virtual void imprime();
	virtual double dinheiroRecebido();
	
private:
	double premio;

};

#endif



