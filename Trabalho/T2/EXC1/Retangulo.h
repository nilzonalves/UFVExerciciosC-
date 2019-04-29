#include <iostream>
#include <string>
#include "formaBasica.h"

#ifndef RETANGULO_H
#define RETANGULO_H

using namespace std;

class Retangulo : public formaBasica{

private:
	double altura;
	double largura;

public:

	Retangulo();
	Retangulo(const double, const double, const int, const int, const int, const double, const double);
	Retangulo(Retangulo&);
	~Retangulo();

	double getAltura();
	void setAltura(double);

	double getLargura();
	void setLargura(double);

	virtual double area();
	void imprime();

	Retangulo& operator=(Retangulo&);

	friend ostream& operator<<(ostream&, Retangulo&);
	friend istream& operator>>(istream&, Retangulo&);


};

#endif