/*Escreva um programa que imprima todos os números de 1  até 100, inclusive, e a soma de todos eles.*/

#include <stdio.h>

int main(){
	
	int n1 = 0; int n2 = 0;
	
	for (n2 = 1; n2 <= 100; n2++){
		n1 += n2;
	}
	printf("a soma dos números de 1 a 100 é %d", n1);
}