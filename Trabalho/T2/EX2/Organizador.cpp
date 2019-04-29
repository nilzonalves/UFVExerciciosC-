#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "Organizador.h"

using namespace std;

Organizador::Organizador(){
	setHora(0);
	setSalario(0);
	setDia(0);
}
Organizador::~Organizador(){

}

Organizador::Organizador(Organizador& obj) : Pessoa(obj){
	this->salario = obj.salario;
	this->horaEntrada = obj.horaEntrada;
	this->dia = obj.dia;
	
}

Organizador::Organizador(string n, const int m, const int hora, const int dia, const double d) : Pessoa(n, m){
	this->horaEntrada = hora;
	this->dia = dia;
	this->salario = d;
}

Organizador& Organizador::operator=(Organizador& obj){

	Pessoa::operator=(obj);
	this->salario = obj.salario;
	this->horaEntrada = obj.horaEntrada;
	this->dia = obj.dia;

	return *this;
}

void Organizador::imprime(){
	cout << "Salario: " << this->salario << endl;
	cout << "Entrada: " << this->horaEntrada << endl;
	
}

void Organizador::setHora(int h){
	this->horaEntrada = h;
}
	
int Organizador::getHora(){
	return this->horaEntrada;
}

void Organizador::setSalario(double s){
	this->salario = s;
}

double Organizador::getSalario(){
	return this->salario;
}

void Organizador::setDia(int dia){
	this->dia = dia;
	
}

int Organizador::getDia(){
	return this->dia;
}


double Organizador::dinheiroRecebido(){
	
}


