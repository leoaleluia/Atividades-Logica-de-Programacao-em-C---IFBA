#include <stdio.h>

int main(){
	int n1 = 0; int n2 = 0; int n3 = 0; int media = 0;
	
	printf("Digite o primeiro número");
	scanf("%i", &n1);
	
	printf("digite o segundo número");
	scanf("%i", &n2);
	
	printf("Digite o terceiro número");
	scanf("%i", &n3);
	if (n1 > n2 && n1 > n3){
		n1 = n1 * 5;
	} else {
		n1 = n1 * 2.5;
	}
	
	if (n2 > n1 && n2 > n3){
		n2 = n2 * 5;
	}else {
		n2 = n2 * 2.5;
	}
	
	if (n3 > n1 && n3 > n2){
		n3 = n3 * 5;
	} else {
		n3 = n3 * 2.5;
	}
	
	media = (n1 + n2 + n3) / (5 + 2.5 + 2.5);
	printf("A Media é %i", media);		
}