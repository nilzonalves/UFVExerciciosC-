#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

#include "Pessoa.h"

using namespace std;


#ifndef ORGANIZADOR_H
#define ORGANIZADOR_H

class Organizador : public Pessoa
{
public:
	Organizador();
	~Organizador();

	Organizador(Organizador&);
	Organizador(string, const int , const int, const int , const double);

	Organizador& operator=(Organizador&);

	void setHora(int);
	int getHora();

	void setSalario(double);
	double getSalario();

	void setDia(int);
	int getDia();


	virtual void imprime();
	virtual double dinheiroRecebido();

private:
	int horaEntrada;
	int dia;
	double salario;


};
#endif