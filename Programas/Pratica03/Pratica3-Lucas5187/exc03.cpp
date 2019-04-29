#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;

class Pessoa{

	private:
	int idade;
	double peso;
	double altura;
	

	public:
	
	char nome[100];

	void setIdade(int x){
		idade = x;

	}

	void setPeso(double x){
		peso = x;

	}

	void setAltura(double x){
		altura = x;

	}

	int getIdade(){
		return idade;

	}

	int getAltura(){
		return altura;
	}


	void imprimirDados(){
		printf("Nome: %s\nIdade: %d\nAltura: %f\nPeso: %f\n",nome, idade, altura, peso);
	}

	double retorna_IMC(){
		return peso/(altura*altura);
	}


	
};

int main(){

	Pessoa p1, p2;
	char nome[100];

	printf("Digite o nome:\n");
	cin.getline(p1.nome, 100);

	p1.setIdade(127);


	//printf("Digite a idade:\n");
	//scanf("%d", &p1.idade);

	p1.setPeso(77.97);

	p1.setAltura(88.00);

	p2.setIdade(19);


	p2.setPeso(74);
	p2.setAltura(87.00);


	if(p1.getIdade() > p2.getIdade())
		p1.imprimirDados();

	else
		p2.imprimirDados();
		
	



	//printf("Digite o peso:\n");
	//scanf("%f", &p1.peso);

	//printf("Digite a altura:\n");
	//scanf("%f", &p1.altura);



return 0;
}
