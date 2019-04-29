all: formaBasica.o Circulo.o Retangulo.o Quadrado.o Main.o
	g++ formaBasica.o Circulo.o Retangulo.o Quadrado.o Main.o -o Circulo.exe

formaBasica.o: formaBasica.h formaBasica.cpp
	g++ -c formaBasica.cpp

Circulo.o: formaBasica.h Circulo.h Circulo.cpp
	g++ -c Circulo.cpp

Retangulo.o: formaBasica.h Retangulo.cpp
	g++ -c Retangulo.cpp

Quadrado.o: formaBasica.h Quadrado.cpp
	g++ -c Quadrado.cpp

Main.o: formaBasica.h Circulo.h Retangulo.h Quadrado.cpp Main.cpp
	g++ -c Main.cpp

clean:
	rm *.o