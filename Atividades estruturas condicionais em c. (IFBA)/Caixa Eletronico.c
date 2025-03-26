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