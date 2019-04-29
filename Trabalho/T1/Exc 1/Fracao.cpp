#include <stdio.h>
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include "Fracao.h"

using namespace std;

Fracao::Fracao(){
	this->numerador = 0;
	this->denominador = 0;
}

int Fracao::getNumerador(){
	return this->numerador;
}

void Fracao::setNumerador(int x){
	this->numerador = x;
}

int Fracao::getDenominador(){
	return this->numerador;
}

void Fracao::setDenominador(int x){
	this->denominador = x;
}

void Fracao::imprimeFracao(){
	cout << this->numerador << "\\" << this->denominador << endl;
}

void Fracao::imprimeFracaoFlu(){
	cout << ((float)this->numerador / (float)this->denominador) << endl;
}

int mdc(int numerador, int denominador){
	if(numerador%denominador == 0)
		return (denominador);

	if(numerador < denominador)
		return mdc(denominador, numerador);

	else
		return mdc(denominador, numerador%denominador);
}

int Fracao::simplifica(){
	return mdc(this->numerador, this->denominador);
}

ostream& operator<<(ostream& saida, const Fracao& fracao){
	saida << fracao.numerador << endl;
	saida << fracao.denominador << endl;
	return saida;
}

istream& operator>>(istream& entrada, Fracao& fracao){
	entrada >> fracao.numerador;
	entrada >> fracao.denominador;
	return entrada;
}

Fracao& Fracao::operator=(const Fracao& obj){
	this->numerador = obj.numerador;
	this->denominador = obj.denominador;

	return *this;
}

bool Fracao::operator==(const Fracao& obj){
	if(this->numerador == obj.numerador && this->denominador == obj.denominador)
		return true;
	else
		return false;
}

bool Fracao::operator!=(const Fracao& obj){
	if(this->numerador == obj.numerador && this->denominador == obj.denominador)
		return false;
	else
		return true;
}

float Fracao::operator+(const Fracao& obj){
	return (float)this->numerador / (float)this->denominador + (float)obj.numerador / (float)obj.denominador;
}

float Fracao::operator-(const Fracao& obj){
	return (float)this->numerador / (float)this->denominador - (float)obj.numerador / (float)obj.denominador;
}

float Fracao::operator*(const Fracao& obj){
	return (float)this->numerador / (float)this->denominador * (float)obj.numerador / (float)obj.denominador;
}

float Fracao::operator/(const Fracao& obj){
	return ((float)this->numerador / (float)this->denominador) / ((float)obj.numerador / (float)obj.denominador);
}


bool Fracao::operator<(const Fracao& obj){
	if (((float)this->numerador / (float)this->denominador) < ((float)obj.numerador / (float)obj.denominador))
		return true;
	else
		return false;
}

bool Fracao::operator>(const Fracao& obj){
	if (((float)this->numerador / (float)this->denominador) > ((float)obj.numerador / (float)obj.denominador))
		return true;
	else
		return false;
}




