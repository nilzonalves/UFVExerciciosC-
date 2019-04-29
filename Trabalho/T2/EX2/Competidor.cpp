#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>
#include "Competidor.h"

using namespace std;

Competidor::Competidor(){
	this->nomeEquipe = " ";
	this->colocacao = 0;
}

Competidor::~Competidor(){

}

Competidor::Competidor(Competidor& obj) : Participante(obj){
	this->nomeEquipe = obj.nomeEquipe;
	this->colocacao = obj.colocacao;
}

Competidor::Competidor(string n ,int m, double p, string e, int c) : Participante(n, m, p){
	this->nomeEquipe = e;
	this->colocacao = c;
}

void Competidor::setColocacao(int c){
	this->colocacao = c;
}

int Competidor::getColocacao(){
	return this->colocacao;
}

void Competidor::setEquipe(string s){
	this->nomeEquipe = s;
}

string Competidor::getEquipe(){
	return this->nomeEquipe;
}

Competidor& Competidor::operator=(Competidor& obj){
	Participante::operator=(obj);

	this->nomeEquipe = obj.nomeEquipe;
	this->colocacao = obj.colocacao;
}


void Competidor::imprime(){
	//Pessoa::imprime();
	Participante::imprime();
	cout << "Nome equipe: " << getEquipe() << endl;
	cout << "Colocacao: " << getColocacao() << endl;
}

double Competidor::dinheiroRecebido(){
	setPremio(100);

	double din = 0;

	if(getColocacao() == 1)
		return (getPremio() + 300/1);

	if(getColocacao() == 2)
		return (getPremio() +300/2);

	if(getColocacao() == 3)
		return (getPremio() +300/3);



}
