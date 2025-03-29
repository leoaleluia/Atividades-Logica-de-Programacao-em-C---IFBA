/*Escreva um programa que calcule o resto da divisão de A por B (número inteiros e 
positivos), ou seja, A % B, através de subtrações sucessivas. Esses dois valores são passados pelo usuário através do teclado. */
#include <stdio.h>

int main () {
	
	int n1 = 0; int n2 = 0;
	
	printf("Digite o dividendo: ");
	scanf("%i", &n1);
	printf("Digite o divisor");
	scanf("%i", &n2);
	
	while (n1 >= n2) {
		n1 -= n2;
	}
	
	printf("%i", n1);
}