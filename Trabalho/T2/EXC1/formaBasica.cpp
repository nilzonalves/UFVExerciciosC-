#include <string>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include "formaBasica.h"

using namespace std;

formaBasica::formaBasica(){

}

formaBasica::~formaBasica(){

}

formaBasica::formaBasica(const double x, const double y, const int cor, const int espessura, const int tipo){
	this->x = x;
	this->y = y;
	this->cor = cor;
	this->espessuraContorno = espessura;
	this->tipoContorno = tipo;
}

formaBasica::formaBasica(const formaBasica& obj){
	this->x = obj.x;
	this->y = obj.y;
	this->cor = obj.cor;
	this->espessuraContorno = obj.espessuraContorno;
	this->tipoContorno = obj.tipoContorno;
}


void formaBasica::imprime(){
	printf("%f %f %i %i %i ", 
		this->x, this->y, this->cor, this->espessuraContorno, this->tipoContorno);
}

void formaBasica::setX(float x){
	this->x = x;
}

float formaBasica::getX(){
	return this->x;
}

void formaBasica::setY(float y){
	this->y = y;
}

float formaBasica::getY(){
	return this->y;
}

void formaBasica::setCor(int x){
	this->cor = x;
}

int formaBasica::getCor(){
	return this->cor;
}

void formaBasica::setEspessura(int x){
	this->espessuraContorno = x;
}

int formaBasica::getEspessura(){
	return this->espessuraContorno;
}

void formaBasica::setContorno(int x){
	this->tipoContorno = x;
}

int formaBasica::getContorno(){
	return this->tipoContorno;
}

double formaBasica::area(){
	
}

istream& operator>>(istream& entrada, formaBasica& obj){
	entrada >> obj.x;
	entrada >> obj.y;
	entrada >> obj.cor;
	entrada >> obj.espessuraContorno;
	entrada >> obj.tipoContorno;

	return entrada;

}

ostream& operator<<(ostream& saida, formaBasica& obj){
	saida << obj.x << " ";
	saida << obj.y << " ";
	saida << obj.cor << " ";
	saida << obj.espessuraContorno << " ";
	saida << obj.tipoContorno << " " << endl;


	
	return saida;
}

formaBasica& formaBasica::operator=(formaBasica& obj){
	this->x = obj.x;
	this->y = obj.y;
	this->cor = obj.cor;
	this->espessuraContorno = obj.espessuraContorno;
	this->tipoContorno = obj.tipoContorno;

	return *this;
}