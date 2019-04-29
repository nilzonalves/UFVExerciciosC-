#include <string>
#include <stdio.h>
#include <iostream>
//#include <cctype>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include "Circulo.h"
#include "formaBasica.h"
#include <math.h>

using namespace std;

Circulo::Circulo(){

}

Circulo::~Circulo(){

}

Circulo::Circulo(const Circulo& obj) : formaBasica(obj){
	this->raio = obj.raio;
}

Circulo::Circulo(const float x, const float y, const int cor, const int espessura, const int contorno, const float raio) : formaBasica(x, y, cor, espessura, contorno){
this->raio = raio;
}

void Circulo::setRaio(float x){
	this->raio = x;
}

float Circulo::getRaio(){
	return this->raio;
}

void Circulo::imprime(){

	formaBasica::imprime();
	cout << this->raio << endl;
}

float Circulo::area(){
	return (3.14 * pow(this->raio, 2));
}

/*istream& operator>>(istream& entrada, Circulo& obj){
	entrada >> obj.setX();
	entrada >> obj.setY();
	entrada >> obj.setCor();
	entrada >> obj.setContorno();
	entrada >> obj.setEspessura();
	//formaBasica::operator>>(obj);
	entrada >> obj.raio;

	return entrada;

}*/

ostream& operator<<(ostream& saida, Circulo& obj) {
	saida << obj.getX() << " ";
	saida << obj.getY() << " ";
	saida << obj.getCor() << " ";
	saida << obj.getEspessura() << " ";
	saida << obj.getContorno() << " ";
	//formaBasica::operator<<(obj);
	saida << obj.raio << endl;

	return saida;
}

//TEM QUE SER O OPERATOR DA BASE + O OPERATOR DO CIRCULO
Circulo& Circulo::operator=(Circulo& obj){

	formaBasica::operator=(obj);
	this->raio = obj.raio;

	return *this;
}

