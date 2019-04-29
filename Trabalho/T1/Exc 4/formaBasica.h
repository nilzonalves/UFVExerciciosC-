#include <iostream>

#ifndef FORMA_BASICA_H
#define FORMA_BASICA_H

using namespace std;

class formaBasica{

private:
	double x;
	double y;
	int cor;
	int espessuraContorno;
	int tipoContorno;

public:
	formaBasica();
	formaBasica(const double, const double, const int, const int, const int);
	formaBasica(const formaBasica&);
	~formaBasica();

	void setX(float);
	float getX();

	void setY(float);
	float getY();

	void setCor(int);
	int getCor();

	void setEspessura(int);
	int getEspessura();

	void setContorno(int);
	int getContorno();

	void imprime();

	formaBasica& operator=(formaBasica&);

	friend istream& operator>>(istream&, formaBasica&);
	friend ostream& operator<<(ostream&, formaBasica&);

};

#endif