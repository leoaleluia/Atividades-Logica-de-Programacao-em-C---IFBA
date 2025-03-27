/* Um programa para gerenciar os saques de um caixa eletrônico deve possuir algum 
mecanismo para decidir o número de notas de cada valor que deve ser disponibilizado 
para o cliente que realizou o saque. Um possível critério seria o da "distribuição ótima" 
no sentido de que as notas de menor valor fossem distribuídas em número mínimo 
possível. Por exemplo, se a quantia solicitada fosse R$ 87,00, o programa deveria indicar 
uma nota de R$ 50,00, três notas de R$ 10,00, uma nota de R$ 5,00 e duas notas de R$ 
1,00. Escreva um programa que receba o valor da quantia solicitada e retorne a 
distribuição das notas de acordo com o critério da distribuição ótima (considere existir 
notas de R$1,00; R$2,00; R$5,00; R$10,00; R$20,00; R$50,00 e R$100,00).*/
#include <stdio.h>

int main(){
	int sac = 0, n100 = 0, n50 = 0, n20 = 0;
	
	printf("Digite o valor do saque");
	scanf("%i", &sac);
	if (sac >= 100) {
		sac -= 100;
		n100 += 1;
	}
	if ((sac >= 50) && (sac <=99));{
		sac -= 50;
		n50 +=  1;
	}
	if ((sac >= 20) && (sac <= 49));{
		sac -= 20;
		n20 += 1;
	}
	printf(" %i notas de 100\n %i de 50\n %i de 20", n100, n50, n20);
}