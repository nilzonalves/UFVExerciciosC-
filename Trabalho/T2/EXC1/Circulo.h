#include <iostream>
#include <string>
#include "formaBasica.h"

#ifndef CIRCULO_H
#define CIRCULO_H


class Circulo : public formaBasica {

private:
	double raio;

public:
	Circulo();
	~Circulo();
	Circulo(const float, const float, const int, const int, const int, const float);
	Circulo(const Circulo&);
	
	void setRaio(float);
	float getRaio();
	void imprime();
	
	virtual double area();

	Circulo& operator=(Circulo&);

	friend ostream& operator<<(ostream&, Circulo&);
	friend istream& operator>>(istream&, Circulo&);
	
};

#endif