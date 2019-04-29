#include <iostream>
#include <stdio.h>
#include <math.h>
#include <vector>

using namespace std;

class Conjunto{

private:
	bool numeros[100];

public:
	Conjunto();
	Conjunto(int, int*);

	void setElemento(int);
	int getElemento();
	//void imprime(Conjunto&);
	void imprime();
	Conjunto& uniao(Conjunto&);
	Conjunto& intersecao(Conjunto&);
	bool pertence(int);
	void insere(int);
	void retira(int);
	bool vazio();
	bool contem(Conjunto&);
	bool estaContido(Conjunto&);
	bool igual(Conjunto&);

	friend ostream& operator<<(ostream&, const Conjunto&);
	
	Conjunto& operator+(Conjunto&);
	Conjunto& operator=(Conjunto&);
	bool operator>(Conjunto&);

};



bool Conjunto::igual(Conjunto& obj){
	for(int i = 0; i <= 100; i++){
		if ((obj.numeros[i] == true && this->numeros[i] == false) || (obj.numeros[i] == false && this->numeros[i] == true))
			return false;
	}
	return true;
}

bool Conjunto::contem(Conjunto& obj){
	for(int i = 0; i <= 100; i++){
		if(obj.numeros[i] == true && this->numeros[i] == false)
			return false;
	}
	return true;
}

bool Conjunto::estaContido(Conjunto& obj){
	for(int i = 0; i <= 100; i++){
		if(this->numeros[i] == true && obj.numeros[i] == false)
			return false;
	}
	return true;
}


void Conjunto::insere(int x){
	this->numeros[x] = true;
}

void Conjunto::retira(int x){
	this->numeros[x] = false;
}

bool Conjunto::vazio(){
	for(int i = 0; i <= 100; i++){
		if(this->numeros[i] == true)
			return false;
	}

		return true;
}

bool Conjunto::pertence(int x){
	if(this->numeros[x] == true)
			return true;
		else
			return false;
}

Conjunto& Conjunto::uniao(Conjunto& obj){
	for(int i = 0; i <= 100; i++){
		if(obj.numeros[i] == true)
			this->numeros[i] = true;
	}
	return *this;
}

Conjunto& Conjunto::intersecao(Conjunto& obj){
	for(int i = 0; i <= 100; i++){
		if(obj.numeros[i] == true && this->numeros[i] == true)
			this->numeros[i] = true;
		else
			this->numeros[i] = false;
	}
	return *this;
}



Conjunto& Conjunto::operator=(Conjunto& obj){
	for(int i = 0; i <= 100; i++){
		if(obj.numeros[i] == true)
			this->numeros[i] = true;
		else
			this->numeros[i] = false;
	}
	return *this;
}

Conjunto& Conjunto::operator+(Conjunto& obj){
	for(int i = 0; i <= 100; i++){
		if(obj.numeros[i] == true)
			this->numeros[i] = true;
	}
	return *this;
}

bool Conjunto::operator>(Conjunto& obj){
	for(int i = 0; i <= 100; i++){
		if(obj.numeros[i] == true && this->numeros[i] == false)
			return false;
	}
	return true;
}

ostream& operator<<(ostream& saida, const Conjunto& obj){

	for(int i = 0; i<=100; i++){
		if(obj.numeros[i] == true)
			saida << i << endl;
	}
	
	return saida;
}


void Conjunto::setElemento(int ele){
	this->numeros[ele] = true;
}

Conjunto::Conjunto(){
	
	for(int i = 0; i<=100; i++)
	this->numeros[i] = {false};

}

Conjunto::Conjunto(int tam, int *vet){

	for(int i = 0; i<=100; i++)
	this->numeros[i] = {false};

	for(int j = 0; j < tam; j++) {
		for(int i = 0; i<=100; i++){
		
		if(i == vet[j])
		this->numeros[i] = true;
	}
	
		
}

}


void Conjunto::imprime(){

	for(int i = 0; i<=100; i++){
		if(this->numeros[i] == true)
			cout << i << endl;
	}

}

int main(){

	Conjunto a;
	Conjunto b;

	int x[3] = {1,2,3};
	Conjunto teste(3, x);


	a.setElemento(7);
	a.setElemento(17);
	a.setElemento(27);

	b.setElemento(7);
	b.setElemento(17);
	b.setElemento(27);
	b.setElemento(18);

	Conjunto c;

	c.setElemento(7);
	c.setElemento(17);
	c.setElemento(27);

	

	return 0;
}