#include <stdio.h>
#define Tam 255

main (){
	
	char res[Tam];
	char nome[Tam];
	int nota1 = 0; int nota2 = 0; int nota3 = 0; int c = 0;
	 
	printf("Deseja imprimir a media das notas? ");
	fgets(res, Tam, stdin);
	
	
	if (res[0] == 's' || res[0] == 'S') {
		printf("Qual o nome do aluno");
		fgets(nome, Tam, stdin);
	}
	 
	while (res[0] == 'S' || res[0] == 's') {
		c += 1;
	 	printf("Digite a %i nota: ", c);
	 	scanf("%i", &nota1);
	 	nota2 += nota1;
	 	printf("Diseja imprimir outra nota? ");
	 	scanf("%s", &res[0]);
	 	
	}
	nota3 = nota2 / c;
	printf("A media do aluno %s é %i", nome, nota3);
}