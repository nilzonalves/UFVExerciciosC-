#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <string>
#include <iostream>

using namespace std;

template <class T> T soma(T n1, T n2){
    return n1+n2;

}

int mdc(int a, int b){

	if(a%b == 0)
		return b;

	if(a < b)
		return mdc(b, a);

	else
		return mdc(b, a%b);
};


int main() {


cout << soma(10, 20) << endl;
cout << soma(18.5, 1.5) << endl;


   return 0;
}
