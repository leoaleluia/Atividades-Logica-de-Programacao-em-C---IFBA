#include <stdio.h>
#define Tam 255

int main(){
	
	int iCont = 0; int totChar = 0;
	int vetor[Tam];
	char caractere[Tam];
	char frase[Tam];
	

	printf("Digite a frase: ");
	fgets(frase, Tam, stdin);
	
	printf("Digite o caractere a ser procurado`: ");
	scanf("%s", caractere);
	
	for(iCont = 0; frase[iCont] != '\0'; iCont++){
		if (frase[iCont] == caractere[0]) {
			vetor[totChar] = iCont;
			totChar++;
			
		}
	}
	
	for(iCont = 0; iCont < totChar; iCont++){
		printf("os indices de encontro são: %d \n", vetor[iCont]);
	}
	
}