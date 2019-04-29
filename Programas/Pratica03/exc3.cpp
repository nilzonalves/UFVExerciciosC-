#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

class Pessoa{

	private:
	int idade;
	double peso;
	double peso;
	

	public:
	
	
	
	void digitaString(){

	printf("Digite a string:\n");
	cin.getline(text, 100);
	}

	char *imprimeString(){
	return text;
	}

	int comprimento(){
        return strlen(text);

}
};

int main(){

String s;

s.digitaString();

cout << "\nString: " << s.imprimeString() << endl;
printf("%s possui %d caracteres.\n", s.imprimeString(), s.comprimento());



return 0;
}
