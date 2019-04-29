#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

#include "Pessoa.h"

using namespace std;


Pessoa::Pessoa(){
	setNome(" ");
	setMatricula(0);
}

Pessoa::~Pessoa(){

}

Pessoa::Pessoa(const Pessoa& obj){
	this->nome = obj.nome;
	this->matricula = obj.matricula;	
}

Pessoa::Pessoa(const string nome, const int matricula){
	this->nome = nome;
	this->matricula = matricula;
}

string Pessoa::getNome(){return this->nome;}
void Pessoa::setNome(string n){this->nome = n;}

int Pessoa::getMatricula(){return this->matricula;}
void Pessoa::setMatricula(int mat){this->matricula = mat;}

void Pessoa::imprime(){
 	cout << "Nome: " << this->nome << endl;
 	cout << "Matricula: " << this->matricula << endl;
 }

 
Pessoa& Pessoa::operator=(Pessoa& obj){
	this->nome = obj.nome;
	this->matricula  = obj.matricula;

return *this;
}






