/*Uma loja vende seus produtos no sistema entrada mais duas prestações, sendo a entrada 
maior do que ou igual às duas prestações, as quais devem ser iguais, inteiras e as maiores 
possíveis. Por exemplo, se o valor da mercadoria for R$ 270,00, a entrada e as duas 
prestações são iguais a R$ 90,00; se o valor da mercadoria for R$ 302,75, a entrada é de 
R$ 102,75 e as duas prestações são a iguais a R$ 100,00. Escreva um programa que 
receba o valor da mercadoria e forneça o valor da entrada e das duas prestações, de 
acordo com as regras acima. Observe que uma justificativa para a adoção desta regra é 
que ela facilita a confecção e o consequente pagamento dos boletos das duas prestações. */

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