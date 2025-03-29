/* Escreva um programa que leia um valor e imprima todas as possíveis combinações em que o lançamento de um par de dados tenha como resultado da soma dos valores dos dados o número lido*/
#include <stdio.h>

int main(){
	
	int n1 = 0; int n2 = 0; int n3 = 0;
	printf("Digite um número: ");
	scanf("%i", &n1);
	n3 = n1;
	
	while (n2 < n1) {
		n3 -= 1;
		n2 += 1;
		if(n3 != 0) {
			printf("%d - %d\n", n2, n3);
		}
	}
}