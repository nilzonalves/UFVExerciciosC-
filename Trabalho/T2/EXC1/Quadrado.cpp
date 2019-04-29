#include <string>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include "Quadrado.h"
#include "formaBasica.h"
#include <math.h>

using namespace std;

Quadrado::Quadrado(){

}

Quadrado::~Quadrado(){

}

Quadrado::Quadrado() : formaBasica(obj){
	
}

Quadrado::Quadrado(const float x, const float y, const int cor, const int espessura, const int contorno) : formaBasica(x, y, cor, espessura, contorno){

}

double Quadrado::area(){
	return (getX() * getY());
}


void Quadrado::imprime(){
	formaBasica::imprime();
	cout << this->area() << endl;
}



/*istream& operator>>(istream& entrada, Quadrado& obj){
	entrada >> obj.setX();
	entrada >> obj.setY();
	entrada >> obj.setCor();
	entrada >> obj.setContorno();
	entrada >> obj.setEspessura();
	//formaBasica::operator>>(obj);
	entrada >> obj.raio;

	return entrada;

}*/

ostream& operator<<(ostream& saida, Quadrado& obj) {
	saida << obj.getX() << " ";
	saida << obj.getY() << " ";
	saida << obj.getCor() << " ";
	saida << obj.getEspessura() << " ";
	saida << obj.getContorno() << " ";
	//formaBasica::operator<<(obj);
	saida << obj.area() << endl;

	return saida;
}

//TEM QUE SER O OPERATOR DA BASE + O OPERATOR DO CIRCULO
Quadrado& Quadrado::operator=(Quadrado& obj){

	formaBasica::operator=(obj);


	return *this;
}

