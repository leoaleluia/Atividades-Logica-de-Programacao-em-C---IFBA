/*Método conhecido por módulo 11. O cálculo do DV no módulo 11 é 
feito, é feito como se segue: para calcular o primeiro dígito verificador, cada dígito do 
número, começando da direita para a esquerda (do dígito menos significativo para o 
dígito mais significativo) é multiplicado, na ordem, por 2, depois 3, depois 4 e assim 
sucessivamente, até o primeiro dígito do número. O somatório dessas multiplicações 
dividido por 11. O resto desta divisão (módulo 11) é subtraído da base (11), o resultado é 
o dígito verificador. O Banco do Brasil utiliza o código módulo 11, substituindo por X o 
valor do dígito verificador quando este é 10. Escreva um programa que receba um 
número com os 4 primeiros dígitos de uma agência e imprima o número da agência 
completo (numero – dv).*/

#include <stdio.h>

int main () {
	
	int D1 = 0; int D2 = 0; int D3 = 0; int D4 = 0; int Ag = 0; int DV = 0;
	char DVC[1];
	
	printf("Digite o número da agência com quatro digitos: ");
	scanf("%i", &Ag);
	
	D1 = Ag / 1000;
	D2 = (Ag % 1000) / 100;
	D3 = ((Ag % 1000) % 100) / 10;
	D4 = ((Ag % 1000) % 100) % 10;
	
	DV = 11 - (((D1 * 5) + (D2 * 4 ) + (D3 * 3) + (D4 * 2)) % 11);
	
	if (DV == 10) {
		DVC[0] = 'X';
		printf("Seu digito verificador no momnento é %c", DVC[0]);
	}else{
		printf("Seu Digito Veriticador no momento é, %i", DV);
	}
}