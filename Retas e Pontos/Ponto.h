#include <iostream>

using namespace std;

#ifndef PONTO_H
#define PONTO_H

class Ponto{

private:
	int x;
	int y;

public:
	Ponto();
	~Ponto();

	int getX();
	void setX(int);

	int getY();
	void setY(int);

	void imprime();

	//float distancia(Ponto&, Ponto& );

	friend ostream& operator<<(ostream& , const Ponto&);
	friend istream& operator>>(istream& , Ponto&);

	Ponto& operator=(Ponto&);

};

#endif