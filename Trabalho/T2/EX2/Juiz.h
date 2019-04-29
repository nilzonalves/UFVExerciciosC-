#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

#include "Organizador.h"

using namespace std;

#ifndef JUIZ_H
#define JUIZ_H

class Juiz : public Organizador
{
public:
	Juiz();
	~Juiz();

	Juiz(Juiz&);
	Juiz(string ,int, int, int, double, int);

	void setJulgamentos(int);
	int getJulgamentos();
	Juiz& operator=(Juiz&);

	virtual void imprime();
	virtual double dinheiroRecebido();



private:
	int julgamamentos;
	
};

#endif