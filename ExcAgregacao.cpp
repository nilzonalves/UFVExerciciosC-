#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

	class Data{
	
	private:
		int dia;
		int mes;
		int ano;
		
	public:
	
		Data();
		~Data();
		//Data(const Data&);
		Data(const int, const int, const int);
	
		int getDia();
		void setDia(int);
	
		int getMes();
		void setMes(int);
	
		int getAno();
		void setAno(int);
	
		void imprime();
	
		//friend istream& operator>>(istream&, Data&);
	
	};

	/*istream& operator>>(istream& entrada, Data& dt){
		entrada >> dt.dia;
		entrada >> dt.mes;
		entrada >> dt.ano;
	
		return entrada;
	}*/
	
	Data::Data(){
	
	}
	
	Data::~Data(){
	
	}
	
	void Data::imprime(){
		cout << this->ano << " ";
		cout << this->mes << " ";
		cout << this->ano << endl;
	}
	
	/*Data::Data(const Data& dt){
		this->dia = dt.dia;
		this->mes = dt.mes;
		this->ano = dt.ano;
	}*/

	Data::Data(const int dia, const int mes, const int ano){
		this->dia = dia;
		this->mes = mes;
		this->ano = ano;
	}
	
	int Data::getDia(){
		return this->dia;
	}
	
	void Data::setDia(int dia){
		this->dia = dia;
	}
	
	int Data::getMes(){
		return this->mes;
	}
	
	void Data::setMes(int mes){
		this->mes = mes;
	}
	
	int Data::getAno(){
		return this->ano;
	}
	
	void Data::setAno(int ano){
		this->ano = ano;
	}
	
	class Produto{
	
	private:
		int codigo;
		string nome;
		Data validade;
	
	public:
		Produto();
		~Produto();
		Produto(const int, const string, const Data&);
	
		int getCodigo();
		void setCodigo(int);
	
		string getNome();
		void setNome(string);
	
		Data getValidade();
		void imprime();
	
		//friend istream& operator>>(istream&, Produto&);
	
	};
	
	/*istream& operator>>(istream& entrada, Produto& pd){
		entrada >> pd.nome;
		entrada >> pd.codigo;
		entrada >> pd.setDia();
		entrada >> pd.setMes();
		entrada >> pd.setAno();
	}*/
	
	Data Produto::getValidade(){
		return this->validade;
	}
	
	
	Produto::Produto(){
	
	}
	
	Produto::~Produto(){
		
	}
	
	Produto::Produto(const int codigo, const string nome, const Data& validade) : validade(validade){
		this->codigo = codigo;
		this->nome = nome;
	
	}
	
	int Produto::getCodigo(){
		return this->codigo;
	}
	
	void Produto::setCodigo(int codigo){
	this->codigo = codigo;
	}
	
	string Produto::getNome(){
		return this->nome;
	}
	
	void Produto::setNome(string nome){
		this->nome = nome;
	}
	
	void Produto::imprime(){
		cout << this->nome;
		cout << this->codigo;
		cout << this->validade.getDia();
		cout << this->validade.getMes();
		cout << this->validade.getAno();
	}
	
	int main(){
	
		Data hoje(02,05,2018);
		
		Produto p(777, "iPhone",hoje);
	
		p.imprime();
	
		return 0;
	}
