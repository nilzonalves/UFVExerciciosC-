#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

using namespace std;


struct Pessoa{

char nome[100];
int idade;
float peso;
float altura;
};

float imc(Pessoa a){

float imc = a.peso/(a.altura*a.altura);

return imc;

}

void maisVelha(Pessoa a, Pessoa b){


if(a.idade == b.idade){
printf("\nIdades iguais!\n");
exit(0);
}

if(a.idade > b.idade){
	printf("Dados da mais velha:\n");
	printf("Nome: %s\n", a.nome);
	printf("Idade: %d\n", a.idade);
	printf("Peso: %f\n", a.peso);
	printf("Altura: %f\n", a.altura);
}

else {
	printf("Dados da mais velha:\n");
	printf("Nome: %s\n", b.nome);
	printf("Idade: %d\n", b.idade);
	printf("Peso: %f\n", b.peso);
	printf("Altura: %f\n", b.altura);

} 

}

void imprimir(Pessoa p){

int i;

printf("Nome: %s\n", p.nome);
printf("Idade: %d\n", p.idade);
printf("Peso: %f\n", p.peso);
printf("Altura: %f\n", p.altura);

}


int main(){

setlocale(LC_ALL, " ");

Pessoa a[2];

int i;

for(i = 0;i<2;i++){
printf("Digite o nome da pessoa %d: ", i+1);
cin >> a[i].nome;

printf("Digite a idade da pessoa %d: ", i+1);
cin >> a[i].idade;

printf("Digite a altura da pessoa %d: ", i+1);
cin >> a[i].altura;

printf("Digite o peso da pessoa %d: ", i+1);
cin >> a[i].peso;

printf("\n\n");

}

//imprimir(a[0]);
//imprimir(a[1]);

//maisVelha(a[0], a[1]);

printf("Imc do %s: %f", a[0].nome, imc(a[1]));

return 0;

}



