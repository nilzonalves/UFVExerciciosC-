#include <stdio.h>
#include <iostream>

using namespace std;

#ifndef FRACAO_H
#define FRACAO_H

class Fracao{

private:
	int numerador;
	int denominador;

public:
	Fracao();
	//~Fracao();

	int getNumerador();
	void setNumerador(int);

	int getDenominador();
	void setDenominador(int);

	void imprimeFracao();
	void imprimeFracaoFlu();
	int simplifica();

	friend int mdc(int , int );
	friend ostream& operator<<(ostream&, const Fracao&);
	friend istream& operator>>(istream&, Fracao&);
	

	Fracao& operator=(const Fracao&);
	bool operator==(const Fracao&);
	bool operator!=(const Fracao&);
	float operator+(const Fracao&);
	float operator-(const Fracao&);
	float operator*(const Fracao&);
	float operator/(const Fracao&);
	bool operator<(const Fracao&);
	bool operator>(const Fracao&);

};
#endif