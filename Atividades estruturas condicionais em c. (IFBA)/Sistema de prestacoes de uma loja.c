#include <stdio.h>

int main(){
	float prod = 0; int div = 0; int pDividido = 0; float pDivEntrd = 0; float restoDoProd = 0;
	
	
	printf("Digite o valor do produto");
	scanf("%f", &prod);
	
	printf("Em quantas deseja dividir?");
	scanf("%i", &div);
	
	
	pDividido = prod / div;
	restoDoProd = prod - (pDividido * div);
	
	if (restoDoProd > 0) {
		pDivEntrd = pDividido + restoDoProd;
	}else{
		pDivEntrd = pDividido;
	}
	
	printf("O produto custa %.2f a vista\nparcelado em %d fica com uma entrada de %.2f\ne duas parcelas de %i ", prod, div, pDivEntrd, pDividido);	
}