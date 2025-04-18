//Faça um programa que leia dois valores e retorne um menu
#include <stdio.h>

int main(){
	
	int opcao = 0; int num1 = 0; int num2 = 0; int operacao = 0;
	
	while (opcao != 5) {
		if (opcao != 4) {
			printf("Digite o primeiro número: ");
			scanf("%d", &num1);
			printf("Digite o segundo número: ");
			scanf("%d", &num2);
		}
		printf("Escolha uma opção de operação:\n[1] somar\n[2] Multiplicar\n[3] Maior\n[4] Novos números\n[5] Encerrar programa");
		scanf("%d", &opcao);
		if (opcao == 1) {
			operacao = num1 + num2;
			printf("A soma dos números %d e %d é %d\n", num1, num2, operacao);
		}
		else if (opcao == 2) {
			operacao = num1 * num2;
			printf("A multiplicação dos números %d e %d é %d\n", num1, num2, operacao);
		}
		else if (opcao == 3) {
			if (num1 > num2) {
				printf("O número %d é maior que o núemro %d\n", num1, num2);
			}
			else if (num2 > num1) {
				printf("O número %d é maior que o número %d\n", num2, num1);
			}
			else {
				printf("Os números %d e %d são iguais\n", num1, num2);
			}
		}
		else if (opcao == 4) {
			printf("Digite o primeiro número: ");
			scanf("%d", &num1);
			printf("Digite o segundo número: ");
			scanf("%d", &num2);
		}
		
	}
}