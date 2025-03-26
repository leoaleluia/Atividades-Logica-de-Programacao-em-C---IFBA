#include <stdio.h>

int main(){
	float desconto = 0; float salario = 0;
	
	printf("Digite o salário: ");
	scanf("%f", &salario);
	
	desconto = salario * 0.1;
	
	if (desconto > 334.29) {
		desconto = 334.29;
	}
	
	printf("Seu desconto é %.2f", desconto);
}