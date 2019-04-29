#include <stdio.h>
#include <iostream>
#include <string>
#include <iomanip>

#include "Participante.h"

using namespace std;

class Competidor : Participante
{
public:
	Competidor();
	~Competidor();

	Competidor(Competidor&);
	Competidor(string ,int, double, string, int);

	void setColocacao(int);
	int getColocacao();

	void setEquipe(string);
	string getEquipe();

	Competidor& operator=(Competidor&);

	virtual void imprime();
	virtual double dinheiroRecebido();

private:
	int colocacao;
	string nomeEquipe;
	
};