#include <iostream>
#include <stdio.h>
#include <string.h>
#include "String.h" //Inclui a definicao da Classe String
#include <string.h>


using namespace std;

void String::digitaString(){

printf("Digite a string:\n");
	cin.getline(this->str, 100);
}

char* String::imprimeString(){
return this->str;
}

int String::comprimento(){
        return strlen(this->str);
        
}

String::~String(){
	delete[] this->str;
}

void String::setString(const char* txt){
	strcpy(this->str, txt);
}

String::String(){
this->str = new char;
}


String::String(const char* txt){
	str = new char[strlen(txt)];
	strcpy(this->str, txt);
	
}


String::String(const String &obj){
	this->str = obj.str;
}

//Sobrecarga de operadores

ostream& operator<<(ostream& saida, const String& txt){ //Saida de fluxo
	saida << txt.str;
	return saida;
}

istream& operator>>(istream& entrada, String& txt){ //Entrada de fluxo
	entrada >> txt.str;
	return entrada;
}

String& String::operator=(const String& obj) { //Atribuição
	this->str = obj.str;
	return *this;
}

bool String::operator==(const String& obj){
	if(strcmp(this->str, obj.str) == 0)
		return true;
	else
		return false;

}

bool String::operator!=(const String& obj){
	if(strcmp(this->str, obj.str) != 0)
		return true;
	else
		return false;
}

bool String::operator>(const String& obj){
	if(strlen(this->str) >  strlen(obj.str))
		return true;
	else
		return false;
}