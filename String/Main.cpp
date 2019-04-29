#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "String.h"

using namespace std;

int main(){

String s;
char txt[100];

printf("Digite uma string!\n");
cin.getline(txt, 100);

s.setString(txt);

String nome("DEEEEU");



//s.digitaString();

String h = s; //Construtor de copia



cout << "String: " << s.imprimeString() << endl;
printf("%s possui %d caracteres.\n", s.imprimeString(), s.comprimento());

cout << "String H: " << h.imprimeString() << endl;
printf("%s possui %d caracteres.\n", h.imprimeString(), h.comprimento());

//delete[] txt;

h = s; //Atribuicao. Aqui o obj h, passa a ter os mesmos atributos do obj s

//Operador == sobrecarregado
if(s == h)
	printf("Iguais!\n");
else
	printf("Diferentes!\n");

//Operador != sobrecarregado
if(s != h)
	printf("Diferentes!\n");
else
	printf("Iguais!\n");

if(s > h)
	printf("%s é maior que %s !\n", s.imprimeString(), h.imprimeString());
else
	printf("%s é menor ou igual a %s !\n", s.imprimeString(), h.imprimeString());

cout << nome;



return 0;
}
