//faça um programa que leia vários números e some todos eles, exceto o número 999
#include <stdio.h>

int main(){
	
	int num = 0; int totNum = 0; int soma = 0;
	
	while (num != 999) {
		printf("Digite um número: ");
		scanf("%d", &num);
		
		if (num != 999) {
			soma += num;
			totNum++;
		}
	}
	printf("O total de números digitados foram %d e a soma de todos eles é %d", totNum, soma);	
}