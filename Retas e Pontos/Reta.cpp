#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include "Ponto.h"
#include "Reta.h"

using namespace std;

Reta::Reta(){

}

Reta::Reta(const Ponto& pt1, const Ponto& pt2) : p1(pt1), p2(pt2){
//this->p1 = pt1;
//this->p2 = pt2;
}

Reta::~Reta(){

}


float Reta::comprimento(Ponto& p1, Ponto& p2){

float result = pow(p2.getX() - p1.getX(), 2) + pow(p2.getY() - p1.getY(), 2);

return sqrt(result);
}

/*/float Reta::comprimento(Reta& obj){

float result = pow(obj.p2.getX() - this->p1.getX(), 2) + pow(obj.p2.getY() - this->p1.getY(), 2);

return sqrt(result);
}*/

ostream& operator<<(ostream& saida, Reta& obj){
	saida << obj.p1 << " " << endl;
	saida << obj.p2 << " " << endl;

	return saida;
}

istream& operator>>(istream& entrada, Reta& obj){
	entrada >> obj.p1;
	entrada >> obj.p2;

	return entrada;
}

Reta& Reta::operator=(Reta& obj){
		this->p1 = obj.p1;
		this->p2 = obj.p2;

		return *this;
	}

void Reta::imprime(){
	cout << this->p1 << " " << this->p2 << endl;
}