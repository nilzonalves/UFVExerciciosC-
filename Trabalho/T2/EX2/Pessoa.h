#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#ifndef PESSOA_H
#define PESSOA_H

class Pessoa{

private:
	string nome;
	int matricula;

public:
	Pessoa();
	~Pessoa();

	Pessoa(const Pessoa&);
	Pessoa(const string, const int);



	string getNome();
	void setNome(string n);

	int getMatricula();
	void setMatricula(int mat);

	virtual void imprime();
	virtual double dinheiroRecebido() = 0; 

	Pessoa& operator=(Pessoa&);


};

#endif
