#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

#include "Ajudante.h"

using namespace std;

Ajudante::Ajudante(){
	setAssistencias(0);
}

Ajudante::~Ajudante(){
	
}

Ajudante::Ajudante(Ajudante& obj) : Organizador(obj){
	this->assistencias = obj.assistencias;
}

Ajudante::Ajudante(string n, const int m, const int h, const int d , const double s, const int a)
 : Organizador(n,m,h,d,s){

 	this->assistencias = a;
 }

void Ajudante::imprime(){
	Pessoa::imprime();
	Organizador::imprime();
	cout << "Assistencias: " << this->assistencias << endl;
}

Ajudante& Ajudante::operator=(Ajudante& obj){
	Organizador::operator=(obj);
	this->assistencias = obj.assistencias;

	return *this;

}

void Ajudante::setAssistencias(int a){this->assistencias = a;}
int Ajudante::getAssistencias(){return this->assistencias;}

double Ajudante::dinheiroRecebido(){

	double din = (getDia() * getSalario() + (10 * this->assistencias));

	return din;
}


