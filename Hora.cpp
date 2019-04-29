#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

	using namespace std;
	
	int main(){
	
		int horaIni = 21, minIni = 30, segIni = 00;
		int horaFim, minFim, segFim;
		
		int duracao, hora, min, seg, dia = 24, mes, ano;
		
		int horaDura = 14, minDura =0 , segDura = 0;
		
			hora = horaIni + horaDura;
			min = minIni + minDura;
			seg = segIni + segDura;
		
		if(seg >= 60){
			min++;
			seg = seg - 60;
		}
		
		if(min >= 60){
			hora++;
			min = min - 60;
		}
		
		if(hora >= 24){
			dia = dia + (hora/24);
		
		if(hora%24 == 0)
			hora = horaIni;
		
		else
			hora = hora%24;
		}
		
			printf("Termino da festa: Dia %d, as %d horas, %d minutos e %d segundos\n", dia, hora, min, seg);
		
		return 0;
	}
