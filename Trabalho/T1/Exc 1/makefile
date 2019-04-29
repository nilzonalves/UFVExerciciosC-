all: Fracao.o Main.o
	g++ Fracao.o Main.o -o Fracao.exe

Fracao.o: Fracao.h Fracao.cpp
	g++ -c Fracao.cpp

Main.o: Fracao.h Main.cpp
	g++ -c Main.cpp

clean:
	rm *.o
	rm Fracao.exe



