COMPILADOR=g++

CODES=Main.cpp Pessoa.cpp Organizador.cpp Juiz.cpp Ajudante.cpp Participante.cpp Competidor.cpp

EXE=load

all: projeto

clean:
	rm -rf *.o $(EXE)

projeto: $(CODES)
	$(COMPILADOR) $(CODES) -o $(EXE) $(INCLUDE) $(CFLAGS) $(LDFLAGS)