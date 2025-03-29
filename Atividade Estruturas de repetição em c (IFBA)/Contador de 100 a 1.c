/*Escreva um programa que imprima todos os números inteiros de 100 a 1 (em ordem 
decrescente)*/

#include <stdio.h>

int main(){
	
	int iCont = 0;
	
	for(iCont = 100; iCont >= 1; iCont--) {
		printf("%d\n", iCont);
	}
}