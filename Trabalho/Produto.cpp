#include <iostream>
#include <vector>
#include <stdexcept>
#include <string>

using namespace std;

class Produto
{
public:
	Produto();
	
	Produto(const string, const double);

	void setNome(string);
	string getNome();

	void setPreco(double);
	double getPreco();

	void setDescricao(string);


	virtual string getDescricao();

private:
	string nome, descricao = "Produto de Informatica";
	double preco;
	
};

Produto::Produto(){

}

/*Produto& Produto::operator=(Produto& obj){
	this->descricao = obj.descricao;
	this->preco = obj.preco;
}*/

Produto::Produto(const string desc, const double p){
	this->descricao = desc;
	this->preco = p;
}

void Produto::setNome(string nome){
	this->nome = nome;
}

void Produto::setDescricao(string n){this->descricao = n;}

string Produto::getNome(){
	return this->nome;
}

double Produto::getPreco(){
	return this->preco;
}

string Produto::getDescricao(){

	return this->descricao; 
}

class Mouse : public Produto
{
public:
	Mouse();
	
	Mouse(const string);

	string getTipo();
	void setTipo(string);

	virtual string getDescricao();

private:
	string tipo;
	
};

string Mouse::getTipo(){return this->tipo;}
void Mouse::setTipo(string tipo){this->tipo = tipo;}

Mouse::Mouse(const string desc){setDescricao(desc);}

string Mouse::getDescricao(){
	return Produto::getDescricao() + this->tipo;
}


class Livro : public Produto
{
public:
	Livro();
	Livro(const string);

	string getAutor();
	void setAutor(string);

	virtual string getDescricao();

private:
	string autor;
	
};

Livro::Livro(const string desc){
	setDescricao(desc);
}

string Livro::getAutor(){return this->autor;
}

void Livro::setAutor(string a){this->autor = a;}

string Livro::getDescricao(){

	return Produto::getDescricao() + this->autor;
}



int main(){

	Mouse M("Otico, Saida USB");
	M.setTipo("Bom");

	Livro L("Livro foda");
	L.setAutor("Genio");

	Livro L2("Livro doido");
	L2.setAutor("Genio");

	Mouse M2("Raizer, LOL");
	M2.setTipo("Otimo");

	Produto* Carrinho[4];

	Carrinho[0] = &M;
	Carrinho[1] = &L;
	Carrinho[2] = &L2;
	Carrinho[3] = &M2;

	for(int i = 0; i<4; i++){
		cout << Carrinho[i]->getDescricao();
		cout << endl;
	}



return 0;
}


	
