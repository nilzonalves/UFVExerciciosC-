#include <stdio.h>
#include <iostream>
#include <string>
#include <math.h>
#include "Ponto.h"

using namespace std;

Ponto::Ponto(){
	this->x = 0;
	this->y = 0;
}
Ponto::~Ponto(){
	
}

int Ponto::getX(){
	return this->x;
}

void Ponto::setX(int x){
	this->x = x;
}

int Ponto::getY(){
	return this->y;
}

void Ponto::setY(int y){
	this->y = y;
}

ostream& operator<<(ostream& saida, const Ponto& obj){
	saida << obj.x << endl;
	saida << obj.y << endl;

	return saida;
}

istream& operator>>(istream& entrada, Ponto& obj){
	entrada >> obj.x;
	entrada >> obj.y;

	return entrada;

}

Ponto& Ponto::operator=(Ponto& obj){
	this->x = obj.x;
	this->y = obj.y;

	return *this;
}

void Ponto::imprime(){
	cout << this->x << " " << this->y << endl;
}

/*float Ponto::distancia(Ponto& p1, Ponto& p2){
float result;

result = pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2);

return sqrt(result);
}

float Ponto::distancia3(Ponto& p1){
float result;

result = pow(p1.x - this->x, 2) + pow(p1.y - this->y, 2);

return sqrt(result);
}*/



