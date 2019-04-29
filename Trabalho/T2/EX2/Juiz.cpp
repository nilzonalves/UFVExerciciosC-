#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

#include "Juiz.h"

using namespace std;

Juiz::Juiz(){

}

Juiz::~Juiz(){

}

Juiz::Juiz(string nome, int m, int h, int d, double s, int j): Organizador(nome, m, h, d, s){
	this->julgamamentos = j;
}

Juiz::Juiz(Juiz& obj) : Organizador(obj){
	this->julgamamentos = obj.julgamamentos;
}


void Juiz::setJulgamentos(int i){
this->julgamamentos = i;
	
}

int Juiz::getJulgamentos(){
	return this->julgamamentos;
}

Juiz& Juiz::operator=(Juiz& obj){

	Organizador::operator=(obj);
	this->julgamamentos = obj.julgamamentos;

	return *this;
}

double Juiz::dinheiroRecebido(){

	double din = (getDia() * getSalario() + (15 * this->julgamamentos));

	return din;
}


void Juiz::imprime(){
	Pessoa::imprime();
	Organizador::imprime();
	cout << "Julgamamentos: " << this->julgamamentos << endl;

}


