/*----------------- File: .cpp ----------------------+
|DESCRICAO DO ARQUIVO
|
|
|
|
|
| Implementado por “Lucas Alves” em 06/04/2018
|
+-----------------------------------------------------+ */
#include <iostream>
using namespace std;


#ifndef STRING_H
#define STRING_H

class String{

private:
	char* str;

public:

	String();
	~String();
	String(const char*);
	String(const String &);
	void digitaString();
	char *imprimeString();
	int comprimento();
	char* getString();
	void setString (const char*);
	friend ostream& operator<<(ostream&, const String&);
	friend istream& operator>>(istream&, String&);

	//Operadores
	String& operator=(const String&); //Atribuição
	bool operator==(const String&); //Igualdade
	bool operator!=(const String&); //Desigualdade
	bool operator>(const String&); //Maior



};
#endif

