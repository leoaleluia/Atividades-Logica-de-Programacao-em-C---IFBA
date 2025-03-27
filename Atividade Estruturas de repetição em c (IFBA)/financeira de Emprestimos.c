#include <stdio.h>

int main () {
	
	int salario = 0; int valorMaximoEmprestimo = 0; int qtdParcelas = 0; 
	int valorParcelas = 0; int emprestimo = 0; int rendaMensal = 0; int ctr = 0;
	
	
	printf("Digite o seu salario: ");
	scanf("%d", &salario);
    
	valorMaximoEmprestimo = salario * 10;
	rendaMensal = salario * 0.30;

	printf("Qual o valor do emprestimo que voce deseja: ");
	scanf("%d", &emprestimo);
	
	
	if(emprestimo <= valorMaximoEmprestimo) {
		ctr = 0;
		while (ctr == 0) {
			printf("Qual a quantidade de parcelas desejada? ");
			scanf("%d", &qtdParcelas);
			
			valorParcelas = emprestimo / qtdParcelas;
			
			if(valorParcelas <= rendaMensal){
				printf("Emprestimo aceito. Quantidade de parcelas: %d\n Valor das Parcelas: %d", valorParcelas, qtdParcelas);
				ctr = 1;
			}else {
				printf("Solicite uma quantidade maior de parcelas");
			}
		}
	}else {
		printf("Não podemos oferecer esse emprestimo, pois excede em 10 vezes o seu salário mensal");
	}
}