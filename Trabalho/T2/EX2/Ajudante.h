#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "Organizador.h"

#ifndef AJUDANTE_H
#define AJUDANTE_H

using namespace std;

class Ajudante : public Organizador{

private:
	int assistencias;

public:
	Ajudante();
	~Ajudante();

	Ajudante(Ajudante&);
	Ajudante(string, const int , const int, const int , const double, const int);

	Ajudante& operator=(Ajudante&);

	void setAssistencias(int);
	int getAssistencias();

	virtual void imprime();
	virtual double dinheiroRecebido();
};

#endif