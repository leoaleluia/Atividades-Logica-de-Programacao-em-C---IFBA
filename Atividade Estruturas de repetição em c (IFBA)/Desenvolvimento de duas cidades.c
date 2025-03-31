/* Dado um país A, com 5.000.000 de habitantes e uma taxa de natalidade de 3% ao ano, e um país B com 7.000.000 de habitantes e uma taxa de natalidade de 2% ao ano, escreva um programa, que imprima o tempo necessário para que a população do país A ultrapasse a população do país B. */
#include <stdio.h>

int main(){
	
	int cidadeA = 0; int cidadeB = 0; int anos = 0; int controle1 = 0; int controle2 = 0;
	
	cidadeA = 500000;
	cidadeB = 700000;
	
	while (cidadeA < cidadeB){
		controle1 = cidadeA * 0.03;
		cidadeA += controle1;
		controle2 = cidadeB * 0.02;
		cidadeB += controle2;
		anos += 1;
	}
	printf("o tempo necessário será %i anos", anos);
	
}