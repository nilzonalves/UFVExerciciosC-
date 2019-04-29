#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "Participante.h"

using namespace std;

Participante::Participante(){
	this->premio = 0;
}

Participante::~Participante(){

}

Participante::Participante(Participante& obj) : Pessoa(obj){
	this->premio = obj.premio;
}

Participante::Participante(string n, const int m, const double p) : Pessoa(n,m){
	this->premio = p;
}

Participante& Participante::operator=(Participante& obj){
	Pessoa::operator=(obj);
	this->premio = obj.premio;

	return *this;
}

void Participante::setPremio(double premio){
	this->premio = premio;
}

double Participante::getPremio(){
	return this->premio;
}

void Participante::imprime(){
	Pessoa::imprime();
	cout << "Premio: " << getPremio() << endl;
}

double Participante::dinheiroRecebido(){
	
}
