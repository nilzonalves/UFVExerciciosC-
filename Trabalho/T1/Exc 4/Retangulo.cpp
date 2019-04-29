#include <string>
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <iomanip>
#include <cstdlib>
#include "formaBasica.h"
#include "Retangulo.h"
#include <math.h>

using namespace std;

	Retangulo::Retangulo(){

	}

	Retangulo::~Retangulo(){

	}

	Retangulo::Retangulo(Retangulo& obj): formaBasica(obj){
		this->altura = obj.altura;
		this->largura = obj.largura;

	}

	Retangulo::Retangulo(const double x, const double y, const int cor, const int esp, const int tipo, 
		const double altura, const double largura) : formaBasica(x, y, cor, esp, tipo){

		this->altura = altura;
		this->largura = largura;
	}


	double Retangulo::getAltura(){
		return this->altura;
	}

	void Retangulo::setAltura(double x){
		this->altura = x;
	}

	double Retangulo::getLargura(){
		return this->largura;
	}

	void Retangulo::setLargura(double x){
		this->largura = x;
	}

	void Retangulo::imprime(){

		formaBasica::imprime();
		cout << this->altura << endl;
		cout << this->largura << endl;

	}

	double Retangulo::area(){
		return this->largura * this->altura;
	}


	Retangulo&  Retangulo::operator=(Retangulo& obj){

		formaBasica::operator=(obj);
		this->altura = obj.altura;
		this->largura = obj.largura;

		return *this;
	}

	ostream& operator<<(ostream& saida, Retangulo& obj){
		//formaBasica::obj.imprime(); // ??
		saida << obj.getX() << " ";
		saida << obj.getY() << " ";
		saida << obj.getCor() << " ";
		saida << obj.getEspessura() << " ";
		saida << obj.getContorno() << " ";
		saida << obj.altura << " ";
		saida << obj.largura << endl;

	}

	istream& operator>>(istream& entrada, Retangulo& obj){

	}


