#include <string>
#include <stdio.h>
#include <iostream>
//#include <cctype>
#include <string.h>
#include <iomanip>
#include <cstdlib>

using namespace std;

class Retangulo{

private:
	float x;
	float y;
	int cor;
	int espessuraContorno;
	int tipoContorno;
	float largura;
	float altura;

public:
	Retangulo();
	~Retangulo();
	// ????? Retangulo(const Circulo&) 
	Retangulo(const Retangulo&);
	Retangulo(const float, const float, const int, const int, const int, const float, const float);

	void setX(float);
	float getX();

	void setY(float);
	float getY();

	void setCor(int);
	int getCor();

	void setEspessura(int);
	int getEspessura();

	void setContorno(int);
	int getContorno();

	void setLargura(float);
	float getLargura();

	void setAltura(float);
	float getAltura();

	void imprime();
	float area();

	Retangulo& operator=(Retangulo&);

	friend ostream& operator<<(ostream&, Retangulo&);
	friend istream& operator>>(istream&, Retangulo&);

};

Retangulo::Retangulo(){

}

Retangulo::~Retangulo(){

}

Retangulo::Retangulo(const Retangulo& obj){
this->x = obj.x;
this->y = obj.y;
this->cor = obj.cor;
this->espessuraContorno = obj.espessuraContorno;
this->tipoContorno = obj.tipoContorno;
this->altura = obj.altura;
this->largura = obj.largura;
}

Retangulo::Retangulo(const float x, const float y, const int cor, const int espessura, const int contorno, const float altura, const float largura){
this->x = x;
this->y = y;
this->cor = cor;
this->espessuraContorno = espessura;
this->tipoContorno = contorno;
this->largura = largura;
this->altura = altura;
}

void Retangulo::imprime(){
	printf("%f %f %i %i %i %f %f\n", 
		this->x, this->y, this->cor, this->espessuraContorno, this->tipoContorno, this->largura, this->altura);
}

void Retangulo::setX(float x){
	this->x = x;
}

float Retangulo::getX(){
	return this->x;
}

void Retangulo::setY(float y){
	this->y = y;
}

float Retangulo::getY(){
	return this->y;
}

void Retangulo::setCor(int x){
	this->cor = x;
}

int Retangulo::getCor(){
	return this->cor;
}

void Retangulo::setEspessura(int x){
	this->espessuraContorno = x;
}

int Retangulo::getEspessura(){
	return this->espessuraContorno;
}

void Retangulo::setContorno(int x){
	this->tipoContorno = x;
}

int Retangulo::getContorno(){
	return this->tipoContorno;
}

float Retangulo::getLargura(){
	return this->largura;
}

void Retangulo::setLargura(float x){
	this->largura = x;
}

float Retangulo::getAltura(){
	return this->altura;
}

void Retangulo::setAltura(float x){
	this->altura = x;
}

istream& operator>>(istream& entrada, Retangulo& obj){
	entrada >> obj.x;
	entrada >> obj.y;
	entrada >> obj.cor;
	entrada >> obj.espessuraContorno;
	entrada >> obj.tipoContorno;
	entrada >> obj.largura;
	entrada >> obj.altura;

	return entrada;

}

ostream& operator<<(ostream& saida, Retangulo& obj){
	saida << obj.x << " ";
	saida << obj.y << " ";
	saida << obj.cor << " ";
	saida << obj.espessuraContorno << " ";
	saida << obj.tipoContorno << " ";
	saida << obj.largura << " ";
	saida << obj.altura << " " << endl;
	

	return saida;
}

Retangulo& Retangulo::operator=(Retangulo& obj){
	this->x = obj.x;
	this->y = obj.y;
	this->cor = obj.cor;
	this->espessuraContorno = obj.espessuraContorno;
	this->tipoContorno = obj.tipoContorno;
	this->largura = obj.largura;
	this->altura = obj.altura;

	return *this;
}

float Retangulo::area(){
	return (this->altura * this->largura);
}


class Circulo{

private:
	float x;
	float y;
	int cor;
	int espessuraContorno;
	int tipoContorno;
	float raio;


public:
	Circulo();
	~Circulo();
	Circulo(const float, const float, const int, const int, const int, const float);
	Circulo(const Circulo&);

	void setX(float);
	float getX();

	void setY(float);
	float getY();

	void setCor(int);
	int getCor();

	void setEspessura(int);
	int getEspessura();

	void setContorno(int);
	int getContorno();


	void setRaio(float);
	float getRaio();

	void imprime();
	float area();

	Circulo& operator=(Circulo&);

	friend ostream& operator<<(ostream&, Circulo&);
	friend istream& operator>>(istream&, Circulo&);

};

Circulo::Circulo(){

}

Circulo::~Circulo(){

}

Circulo::Circulo(const Circulo& obj){
	this->x = obj.x;
	this->y = obj.y;
	this->cor = obj.cor;
	this->espessuraContorno = obj.espessuraContorno;
	this->tipoContorno = obj.tipoContorno;
	this->raio = obj.raio;
}

Circulo::Circulo(const float x, const float y, const int cor, const int espessura, const int contorno, const float raio){
this->x = x;
this->y = y;
this->cor = cor;
this->espessuraContorno = espessura;
this->tipoContorno = contorno;
this->raio = raio;
}

float Circulo::area(){

}

void Circulo::setX(float x){
	this->x = x;
}

float Circulo::getX(){
	return this->x;
}

void Circulo::setY(float y){
	this->y = y;
}

float Circulo::getY(){
	return this->y;
}

void Circulo::setCor(int x){
	this->cor = x;
}

int Circulo::getCor(){
	return this->cor;
}

void Circulo::setEspessura(int x){
	this->espessuraContorno = x;
}

int Circulo::getEspessura(){
	return this->espessuraContorno;
}

void Circulo::setContorno(int x){
	this->tipoContorno = x;
}

int Circulo::getContorno(){
	return this->tipoContorno;
}


void Circulo::setRaio(float x){
	this->raio = x;
}

float Circulo::getRaio(){
	return this->raio;
}

void Circulo::imprime(){
	printf("%f %f %i %i %i %f\n", 
		this->x, this->y, this->cor, this->espessuraContorno, this->tipoContorno, this->raio );
}

istream& operator>>(istream& entrada, Circulo& obj){
	entrada >> obj.x;
	entrada >> obj.y;
	entrada >> obj.cor;
	entrada >> obj.espessuraContorno;
	entrada >> obj.tipoContorno;
	entrada >> obj.raio;

	return entrada;

}

ostream& operator<<(ostream& saida, Circulo& obj){
	saida << obj.x << " ";
	saida << obj.y << " ";
	saida << obj.cor << " ";
	saida << obj.espessuraContorno << " ";
	saida << obj.tipoContorno << " ";
	saida << obj.raio << " " << endl;

	return saida;


}

Circulo& Circulo::operator=(Circulo& obj){
	this->x = obj.x;
	this->y = obj.y;
	this->cor = obj.cor;
	this->espessuraContorno = obj.espessuraContorno;
	this->tipoContorno = obj.tipoContorno;
	this->raio = obj.raio;

	return *this;
}


int main(){
	
	cout << fixed << setprecision(2);
	Circulo c1(100, 120, 3, 2, 1, 30);
	c1.imprime();
	cout << "Area = " << c1.area() << endl;
	Retangulo r1(40, 50, 1, 1, 2, 80, 30);
	r1.imprime();
	cout << "Area = " << r1.area() << endl;
	Circulo c2 = c1;
	c2.setX(25);
	c2.setY(17);
	c2.setRaio(25);
	c2.setEspessura(9); //um valor invalido
	c2.imprime();
	Retangulo r2;
	r2 = r1;
	r2.imprime();

return 0;



}