#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

class Vetor { 
   public: 
      class ExcecaoDeTamanho {}; 
      class ExcecaoDeIndexacao {}; 

      Vetor(int); 
      int& operator[](int);  

      //int& at(int);  Isso serve tbm
 
   private: 
      int tam; 
      int *mem; 
};  

Vetor::Vetor(int n) 
{ 
   if( n<=0 ) throw ExcecaoDeTamanho(); 
   tam = n; 
   mem = new int[n]; 
} 

/*int& Vetor::at(int n){
  if( n<0 || n >=tam )
    throw ExcecaoDeIndexacao(); 

  mem[n];

}*/

int& Vetor::operator [](int n) 
{  
   if( n<0 || n >=tam ) 
	throw ExcecaoDeIndexacao(); 

  cout << "passou!";
   

return mem[n]; 

}


int main(){

try { 

  int n; 
  cout << "Qual o tamanho do vetor?"; 
  cin >> n; 
  Vetor v(n); 
  int p; 
  cout << "Qual a posicao?"; 
  cin >> p; 
  cout << "Qual o valor a ser armazenado?"; 
  cin >> v[p]; 
} 

catch(Vetor::ExcecaoDeTamanho) { 
  cout << "tamanho invalido" << endl; 
} 
catch(Vetor::ExcecaoDeIndexacao) { 
   cout << "Indice invalido" << endl; 
} 
catch(...) { 
   cout << "excecao inesperada" << endl; 
} 

cout << "Ola";




return 0;
}