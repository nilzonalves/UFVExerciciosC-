#include <iostream>
#include <stdio.h>
#include <string.h>
#include "String.h" //Inclui a definicao da Classe String


	using namespace std;
	
	void String::digitaString(){
	
	printf("Digite a string:\n");
		cin.getline(text, 100);
	}
	
	char* String::imprimeString(){
	return text;
	}
	
	int String::comprimento(){
	        return strlen(text);
	
	}
