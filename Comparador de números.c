#include <stdio.h>

int main(){
	int n1 = 0; int n2 = 0; int n3 = 0;
	
	printf("Digite um número: ");
	scanf("%i", &n1);
	
	printf("Digite o segundo número: ");
	scanf("%i", &n2);
	
	printf("Digite o terceiro número: ");
	scanf("%i", &n3);
	
	if (n1 > n2 &&  n1 > n3) {
		printf("%d é o maior númeroo", n1);
	}
	if (n2 > n1 && n2 > n3) {
		printf("%d é o maior número", n2);
	} 
	if(n3 > n1 && n3 > n2) {
		printf("%d é o maior número", n3);
	}
}