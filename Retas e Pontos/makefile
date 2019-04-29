all: Ponto.o Reta.o Main.o
	g++ Ponto.o Reta.o Main.o -o Reta.exe

Ponto.o: Ponto.h Ponto.cpp
	g++ -c Ponto.cpp

Reta.o: Ponto.h Reta.h Reta.cpp
	g++ -c Reta.cpp

Main.o: Ponto.h Reta.h Main.cpp
	g++ -c Main.cpp

clean:
	rm *.o