/*Escreva um programa que determine se um dado número N (digitado pelo usuário) é 
primo ou não. */

#include <stdio.h>

int main(){
	
	int numero = 0; int iCont = 0; int ctr = 0;
	
	printf("Digite o número");
	scanf("%d", &numero);
	
	for (iCont = 2; iCont <= numero; iCont++){
		if(numero % iCont == 0) {
			ctr++;
		}
	}
	if (ctr <= 1) {
		printf("Numero primo");
	}else{
		printf("não é primo");
	}
}