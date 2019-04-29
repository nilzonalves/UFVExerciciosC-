#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;


/*class excecaoVetor{};

class ExcecaoTamanho : public excecaoVetor{};
class ExcecaoIndexacao : public excecaoVetor{};*/


class Vetor
{
public:
	Vetor();
	Vetor(int);
	~Vetor();
	void insere(int, int);

	int getTam();

	class ExcecaoTamanho{};
	class ExcecaoIndexacao{};
	//class ExececaoGrande{};

	int& at(int n);
	int& operator[](int);

private:
	int tam;
	int *elemento;
	
};

Vetor::Vetor(){
	this->tam = 0;
}

Vetor::~Vetor(){
	delete [] elemento;
}

Vetor::Vetor(int n){
	if(n <= 0)
		throw ExcecaoTamanho();

	this->tam = n;
	this->elemento = new int[n];
}

int Vetor::getTam(){
	return this->tam;
}


int& Vetor::at(int n){
	if(n < 0 || n >= this->tam)
		throw ExcecaoIndexacao();

	return this->elemento[n];
}

int& Vetor::operator[](int n){
	if( n<0 || n >=tam ) 
	throw ExcecaoIndexacao(); 

	return this->elemento[n];

}

void Vetor::insere(int pos, int valor){

	if(pos <= this->tam || pos < 0)
		throw ExcecaoIndexacao();

	this->elemento[pos] =  valor;
	this->tam++;
}



int main(){

	
	int pos, valor, tam;

	try{

		cout << "Digite o tamanho do vetor: ";
		cin >> tam;
		Vetor vet(tam);


		cout << "Digite a posicao e o valor pra inserir: ";
		cin >> pos >> valor;

		//vet.at(pos) = valor; ISSO AQUI TBM FUNCIONA
		
		vet[pos] = valor;
	
	}catch(Vetor::ExcecaoTamanho){
		cout << "Tamanho equivocado!" << endl;
	}
	catch(Vetor::ExcecaoIndexacao){
		cout << "Indice equivocado!" << endl;
	}
	catch(...){
		cout << "Excecao inesperada!" << endl;
	}


}


