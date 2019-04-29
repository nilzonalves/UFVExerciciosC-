#include <stdlib.h>
#include <iostream>
#include <stdio.h>
#include "String.h"

using namespace std;

int main(){

String s;

s.digitaString();

cout << "String: " << s.imprimeString() << endl;
printf("%s possui %d caracteres.\n", s.imprimeString(), s.comprimento());

return 0;
}
