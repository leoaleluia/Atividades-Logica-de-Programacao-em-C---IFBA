//Escreva um programa que leia 3 valores e escreva a soma dos 2 maiores. 

#include <stdio.h>

int main(){
	int n1 = 0; int n2 = 0; int n3 = 0, int s1 = 0; int s2 = 0;  int s3 = 0;
    int s = 0;
	
	printf("Digite um número");
	scanf("%i", &n1);
	printf("Digite o segundo número");
	scanf("%i", &n2);
	printf("Digite o terceiro número");
	scanf("%i", &n3);
	
	if (n1 > n2 || n1 > n3) {
		s1 = n1;
	}
	
	if (n2 > n1 || n2 > n3) {
		s2 = n2;
	}
	
	if (n3 > n1 || n3 > n2) {
		s3 = n3;
	}
	
	if (s1 < s2 && s1 < s3){
		s = s2 + s3;
	}
	if (s2 < s1 && s2 < s3){
		s = s1 + s3;
	}
	if (s3 < s1 && s3 < s2){
		s = s1 + s2;
	}
	
	printf("o valor da soma é %i", s);	
}