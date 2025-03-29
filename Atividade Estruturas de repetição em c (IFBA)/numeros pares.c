/*Escreva um programa que imprima todos os números pares do intervalo fechado de 1 a  100. */

#include <stdio.h>

int main (){
	
	int iCont = 0;
	
	for (iCont = 1; iCont <= 100; iCont++){
		if (iCont % 2 == 0){
			printf("némero par %i\n", iCont);
		}		
	}		
}