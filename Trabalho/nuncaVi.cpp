#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;



template<class T>

class ArrayEspecial
{
public:
	ArrayEspecial();
	~ArrayEspecial();

	ArrayEspecial(const ArrayEspecial<T>& );
	ArrayEspecial(const int);

	//ArrayEspecial<T>& operator=(const ArrayEspecial<T>&);

	void insere(T, int);
	void remove(int);
	void imprime();

private:
	T* elementos;
	int tam, max;
	bool* ativos;
	
};

template<class T>
ArrayEspecial<T>::~ArrayEspecial(){
	delete [] elementos;
	delete [] ativos;
}

template<class T>
ArrayEspecial<T>::ArrayEspecial(){

	this->elementos = new T[10];
	this->ativos = new bool[10];
	this->tam = 0;
	this->max = 50;

	for(int i = 0; i<10; i++)
		this->ativos[i] = {false};

}

template<class T>
ArrayEspecial<T>::ArrayEspecial(const ArrayEspecial<T>& obj){

	this->tam = obj.tam;
	this->max = obj.max;

	this->ativos = new bool[obj.tam];
	this->elementos = new T[obj.tam];

	for(int i = 0; i < obj.tam; i++){
		if(obj.ativos[i] == true){
			this->ativos[i] = true;
			this->elementos[i] = obj.elementos[i];
		
	}

		}
}

template<class T>
ArrayEspecial<T>::ArrayEspecial(const int tam){
	
	this->elementos = new T[tam];
	this->ativos = new bool[tam];
	this->tam = tam; 
	this->max = 50; //O tamanho maximo que eu escolhi foi 50.

	for(int i = 0; i<tam; i++)
		this->ativos[i] = {false};
}

/*template<class T>
ArrayEspecial<T>& ArrayEspecial<T>::operator=(const ArrayEspecial<T>& obj){
	this->tam = obj.tam;
	this->max = obj.max;

	this->ativos = new bool[obj.tam];
	this->elementos = new T[obj.tam];

	for(int i = 0; i < obj.tam; i++){
		if(obj.ativos[i] == true){
			this->ativos[i] = true;
			this->elementos[i] = obj.elementos[i];
		
	}

		}

		return *this;


}*/


template<class T>
void ArrayEspecial<T>::insere(T elemento, int p){

	if(this->ativos[p] = true)
		exit(1);


	this->elementos[p] = elemento;
	this->ativos[p] = true;
	this->tam++;
	
}

template<class T>
void ArrayEspecial<T>::remove(int pos){
	if(this->ativos[pos] == true){
		this->ativos[pos] = false;
		this->tam--;
	}

}

template<class T>
void ArrayEspecial<T>::imprime(){

	for(int i = 0; i < this->tam; i++){
		if(this->ativos[i] == true)
			cout << elementos[i] << endl;
		
	}
}

int main(){

	//Construtor normal, separa 10 espaços
	ArrayEspecial<int>vet;


	for(int i = 0; i<10; i++)
		vet.insere(10,i);
	

	vet.imprime(); 
	cout << endl;

	//Construtor pra poder escolher um tamanho
	ArrayEspecial<string>vet2(15);

	vet2.insere("Lucas", 0);
	vet2.insere("Alves", 1);
	vet2.insere("Santos", 14);


	vet2.imprime(); 
	
	
	

	//Construtor de copia
	/*ArrayEspecial<string>vet3(vet2);
	vet3.imprime(); */

	cout << "VAI TOMAR NO CU";


	return 0;
}
