all: String.o Main.o
	g++ String.o Main.o -o String.exe
	
String.o: String.h String.cpp
	g++ -c String.cpp
	
Main.o: String.h Main.cpp
	g++ -c Main.cpp
	
clean:
	rm *.o
	rm String.exe
