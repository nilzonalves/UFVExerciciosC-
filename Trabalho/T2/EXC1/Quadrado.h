#include <iostream>
#include <string>
#include "formaBasica.h"

#ifndef QUADRADO_H
#define QUADRADO_H

using namespace std;

class Quadrado : public formaBasica{ 

public:

	virtual double area();
	virtual void imprime();

	Quadrado();
	~Quadrado();

	//Quadrado(const Quadrado&);
	Quadrado(const float, const float, const int, const int, const int);

	Quadrado& operator=(Quadrado&);

private:



	


};

#endif