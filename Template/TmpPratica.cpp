#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string>
#include <iostream>
#include <list>
#include <vector>
#include <queue>

using namespace std;

template <class T>
class Fila{

    private:
        T elementos[100];
        int fim, inicio;           

    public:
        Fila();
        ~Fila();
        Fila(const Fila<T>&);
        void enfileira(const T&);
        void desenfileira();
        T& verInicio();
        T& verFim();
        bool vazia();

};

template <class T>
Fila<T>::~Fila(){
    this->inicio = -1;
    this->fim = -1;
}

template <class T>
Fila<T>::Fila(const Fila<T>& obj){
    for(int i = 0; i <= obj.fim; i++)
        this->elementos[i] = obj.elementos[i];
    

    this->fim = obj.fim;
    this->inicio = obj.inicio;
}

template <class T>
Fila<T>::Fila(){
    this->fim = -1;
    this->inicio = -1;
}

template <class T>
bool Fila<T>::vazia(){
    if(this->inicio == -1)
        return true;
}

template <class T>
void Fila<T>::enfileira(const T& obj){

     if(this->fim == -1 && this->inicio == -1){
        this->fim = 0;
        this->inicio = 0;
        this->elementos[this->fim] = obj;

        cout << "Enfileirou o " << obj << endl;

    }
    else{

        this->fim++;
        this->elementos[this->fim] = obj;
        
        cout << "Enfileirou o " << obj << endl;
    }
        
    }

template <class T>
T& Fila<T>::verFim(){
    return this->elementos[this->fim];
}

template <class T>
T& Fila<T>::verInicio(){
    return this->elementos[this->inicio];
}


template <class T>
void Fila<T>::desenfileira(){

	cout << "Tirou: " << elementos[inicio] << endl;
	this->inicio++;

    //this->fim--;
}



int main(){

//Brincando com inteiros
Fila<int> fila;

fila.enfileira(7);
fila.enfileira(17);
fila.enfileira(77);
fila.enfileira(73);

fila.desenfileira();

fila.verInicio();

cout << fila.verFim() << endl;

fila.desenfileira();
cout << fila.verFim() << endl;

//Brincando com strings
Fila<string> charFila;

charFila.enfileira("cristiano");
charFila.enfileira("ronaldo");

cout << charFila.verInicio() << " ";
cout << charFila.verFim() << endl;

Fila<int> copiaFila(fila);
cout << copiaFila.verFim();


return 0;
}
