//Escreva um programe que indique o dia do mês de acordo com o número digitado

#include <stdio.h>

int main(){
	int n1 = 0;
	printf("Digite o número representante do mês: ");
	scanf("%i", &n1);
	
	switch(n1) {
		case 1: printf("Janeiro 31 dias");
		break;
		case 2: printf("Fevereiro 29 dias");
		break;
		case 3: printf("Março 31 dias");
		break;
		case 4: printf("Abril 30 dias");
		break;
		case 5: printf("Maio 31 dias");
		break;
		case 6: printf("Junho 30 dias");
		break;
		case 7: printf("Julhoe 31 dias");
		break;
		case 8: printf("Agosto 31 dias");
		break;
		case 9: printf("Setembro 30 dias");
		break;
		case 10: printf("Outubro 31 dias");
		break;
		case 11: printf("novembro 30 dias");
		break;
		case 12: printf("Dezembro 31 dias");
		break;
	}
}