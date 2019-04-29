#include <iostream>
#include "Ponto.h"

using namespace std;

#ifndef RETA_H
#define RETA_H

class Reta{

private:
	Ponto p1;
	Ponto p2;

public:
	Reta();
	~Reta();
	Reta(const Ponto&, const Ponto&);
	
	float comprimento(Ponto&, Ponto&);
	void imprime();
	//float comprimento(Reta&);
	
	friend istream& operator>>(istream&, Reta&);
	friend ostream& operator<<(ostream&, Reta&);

	Reta& operator=(Reta&);
	
};

#endif