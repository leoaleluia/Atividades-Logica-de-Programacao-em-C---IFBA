/*Tipo 1 – ervas daninhas R$ 50,00 por acre; 
Tipo 2 – gafanhotos R$ 100,00 por acre; 
Tipo 3 – broca R$ 150,00 por acre; 
Tipo 4 – todos acima R$ 250,00 por acre.  */
/*Se a área a ser pulverizada for superior a 1000 acres, o fazendeiro tem um desconto de 
5%. Em adição, qualquer fazendeiro cujo custo for maior do que R$ 750,00 tem um 
desconto de 10% sobre o valor que ultrapassar os R$ 750,00. Caso ambos os descontos se 
aplicam o da área é calculado antes. Fazer um algoritmo que leia: o tipo de pulverização 
(1 a 4) e área a ser pulverizada; e imprima o valor a ser pago. */
#include <stdio.h>

int main(){
	int opcoes = 0; int valorInicial = 0; int valorSemDesconto = 0; 
	int desconto = 0; int valorComDesconto = 0; int qtdAcre = 0;
	
		
	printf("Qual o tipo de pulverização de lavoura?");
	printf("\n1 - Ervas daninhas R$ 50.0 por acre\n"
		"2 - Gafanhatos: R$ 100.00 por acre\n"
		"3 - Broca: R$ 150 por acre\n"
		"4 - Todos acima: R$ 250 por acre\n");
	scanf("%d", &opcoes);
	
	switch (opcoes) {
		case 1:
			printf("Voce escolheu ervas daninhas");
			printf("Quantos acres deseja pulverizar?\n");
			scanf("%i", &qtdAcre);
			valorInicial = qtdAcre * 50;
			
			if(qtdAcre > 1000) {
				desconto = valorInicial * 0.05;
				valorComDesconto = valorSemDesconto - desconto;
				printf("o valor final é de: %d. Desconto de %d", valorComDesconto, desconto);
			}else {
				if(valorInicial > 750) {
					valorSemDesconto = qtdAcre * 50;
					desconto = valorSemDesconto * 0.1;
					valorComDesconto = valorSemDesconto - desconto;
					printf("O valor final é de: %d. Desconto de %d", valorComDesconto, desconto);
				} else {
					valorSemDesconto = qtdAcre * 50;
					printf("o valor final é de %d", valorSemDesconto);
				}
			}
			break;
			
		case 2:
			printf("Você escolheu gafanhotos:");
			printf("Quantos acre deseja pulverizar?\n");
			scanf("%i", &qtdAcre);
			valorInicial = qtdAcre * 100;
			
			if(qtdAcre > 1000) {
				desconto = valorInicial * 0.05;
				valorComDesconto = valorInicial - desconto;
				printf("o valor final é de: %d. Desconto de %d", valorComDesconto, desconto);
			}else{
				if(valorInicial > 750) {
					desconto = valorInicial * 0.1;
					valorComDesconto = valorInicial - desconto;
					printf("O valor final é de: %d. Desconto de %d", valorComDesconto, desconto);
				}else{
					printf("o valor Final é de %d", valorInicial);
				}
			}
			break;
		case 3:
			printf("Você escolheu broca\n");
			printf("Quantos acre deseja pulverizar?\n");
			scanf("%d", &qtdAcre);
			valorInicial = qtdAcre * 150;
			
			if(qtdAcre > 1000) {
				desconto = valorInicial * 0.05;
				valorComDesconto = valorInicial - desconto;
				printf("O Valor final é de: %d. desconto de %d", valorComDesconto, desconto);
			}else{
				if(valorInicial > 750) {
					desconto = valorInicial * 0.1;
					valorComDesconto = valorInicial - desconto;
					printf("o valor final é de: %d. Desconto de %d", valorComDesconto, desconto);
				}else {
					printf("o valor final é de: %d", valorInicial);
				}
			}
			break;
		case 4:
			printf("Você escolheu todas as opcoes.");
			printf("Quantos acres deseja pulverizar?\n ");
			scanf("%d", &qtdAcre);
			valorInicial = qtdAcre * 250;
			
			if(qtdAcre > 1000) {
				desconto = valorInicial * 0.05;
				valorComDesconto = valorInicial - desconto;
				printf("O valor Final é de: %d. Desconto de %d", valorComDesconto, desconto);
			}else {
				if(valorInicial > 750){
					desconto = valorInicial * 0.1;
					valorComDesconto = valorInicial - desconto;
					printf("O valor Final é de: %d. Desconto de %d", valorComDesconto, desconto);
				}else {
					printf("O valor Final é de: %d", valorInicial);
				}
			}
			break;
		default:
			printf("Escolha uma opção");
			break;	
	}
}