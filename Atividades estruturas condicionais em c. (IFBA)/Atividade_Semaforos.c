/*Em uma cidade se deseja sincronizar os semáforos. Com isto, quando um semáforo abre 
(fica verde), os veículos que nele estavam parados tendem a encontrar os próximos 
semáforos também abertos. Para que isto seja feito, os próximos semáforos precisam 
abrir um pouco depois, dependendo da velocidade permitida na via e da distância entre 
eles. Assim, ao abrir o semáforo, um veículo começa a acelerar até atingir a velocidade 
permitida, que mantém até chegar ao próximo semáforo, levando um certo tempo para 
percorrer essa distância. Para que encontre o próximo semáforo aberto, este deve abrir 
um pouco antes da chegada do veículo (por ex: 3 segundos antes). Faça assim um 
algoritmo que informe quanto tempo depois um semáforo deve abrir, dada as seguintes 
informações:  
a. a distância desde o semáforo anterior 
b. a velocidade permitida da via 
c. a aceleração típica dos carros  */


#include <stdio.h>

int main(){
	
	float velocidadeKm; float velocidadeMs; float tempoAbertura; float Distancia;
	
	printf("Digite a velocidade da via em km");
	scanf("%f", &velocidadeKm);
	velocidadeMs = velocidadeKm / 3.6;
	printf("%f", velocidadeMs);
	
	printf("Digite a distancia entre os sinais");
	scanf("%f", &Distancia);
	
	tempoAbertura = Distancia / velocidadeMs - 3;
	
	printf("O tempo para Abertura é %.2f", tempoAbertura);

}