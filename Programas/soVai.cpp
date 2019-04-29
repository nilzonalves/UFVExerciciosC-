#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	using namespace std;
	
	int main(){
	
		int horaIni = 19, minIni = 50, segIni = 05;
		int horaFim, minFim, segFim;
		
		int duracao, hora, min, seg, dia = 30, mes, ano;
		
		int horaDura = 12, minDura = 51, segDura = 15;
		
		hora = horaIni + horaDura;
		min = minIni + minDura;
		seg = segIni + segDura;
		
		if(seg > 60){
			min++;
			seg = seg - 60;
		}
		
		if(min > 60){
			hora++;
			min = min - 60;
		}
		
		if(hora > 24){
			dia = dia + (hora/24);
			hora = hora%24;
		}
		
		int teste = 119%24;
		
		int vetHora[] = {24,25,26,27,28,29,30,
					   31,32,33,34,35,36,37,
					   38,39,40,41,42,43,44,
					   45,46,47,48};
				  
				  
		if(horaFim < horaIni){
		horaFim = vetHora[horaFim];
		dia++;
		}
		
		duracao = ((horaFim - horaIni)*60) + minFim-minIni;
		
		hora = duracao/60;
		min = duracao%60;
	
	
	
	printf("Dia do termino: %d\nDuração: %d horas e %d minutos\n %d\n", dia, hora, min, teste);
	
	
	
	return 0;
	
	}
