#include <stdio.h>

int main(){
	
	float descLt = 0; float descFinal = 0;
	float litros = 0; float descLT2 = 0;
	char c[1];
	
	printf("alcool ou gasolina? (Digite [a] para alcool e [g] para gasolina)");
	scanf("%s", &c[0]);
	
	if (c[0] == 'a') {
		printf("Qunatos litros? A-alcool R$ 1.90 por litro");
		scanf("%f", &litros);
		if (litros <= 25.0){
			descLt = 1.90 - (1.90 * 0.02); 
			descLT2 = 19.0 * 0.02;
			descFinal = descLt * litros;
		}else {
			descLt = 1.90 - (1.90 * 0.04);
			descLT2 = 1.90 * 0.04;
			descFinal = descLt * litros;
		}
	} else{
		printf("Quantos litros? G-gasolina R$ 2.70 por litro");
		scanf("%f", &litros);
		if (litros <= 25.0) {
			descLt = 2.70 - (2.70 * 0.03);
			descLT2 = 2.70 * 0.03;
			descFinal = litros * descLt;
		} else {
			descLt = 2.70 - (2.70 * 0.05);
			descLT2 = 2.70 * 0.05;
			descFinal = litros * descLt;
		}
	}
	
	printf("Você comprou %.2f de %c com um valor final de %.2f (desconto por litro %.2f)", litros, c[0], descFinal, descLT2);
	
}