#include <iostream>      
#include <exception>     
#include <string>
#include <stdio.h>

using namespace std;

class CartaoWeb
{
public:
	CartaoWeb();
	
	virtual string getMensagem(string remetente) = 0;

	void setDestinatario(string dest);
	string getDestinatario();

private:
	string destinatario;
	
};

CartaoWeb::CartaoWeb(){

}

void CartaoWeb::setDestinatario(string dest){
	this->destinatario = dest;
}

string CartaoWeb::getDestinatario(){
	return this->destinatario;
}


class Aniversario : public CartaoWeb
{
public:
	Aniversario(string destinatario);
	virtual string getMensagem(string remetente);


};

Aniversario::Aniversario(string dest){
	setDestinatario(dest);
}

string Aniversario::getMensagem(string remetente){
	return getDestinatario() + " Oi felizidades! " + remetente;
}

class Natal : public CartaoWeb
{
public:
	Natal(string);
	virtual string getMensagem(string remetente);


};

Natal::Natal(string dest){
	setDestinatario(dest);
}

string Natal::getMensagem(string remetente){
	return getDestinatario() + " Feliz Natal! " + remetente;
}


int main(){

	Natal n1("Natalino");
	Aniversario a1("Cristiano");

	CartaoWeb* Cartao[2];

	Cartao[0] = &n1;
	Cartao[1] = &a1;

	for(int i = 0; i<2; i++){
		cout << Cartao[i]->getMensagem("\nLucas Alves");
		cout << endl;
	}


	return 0;
	
}



