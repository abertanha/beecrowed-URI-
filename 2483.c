/* beecrowd | 2483
Feliz Nataaal!

Por Jessica Dagostini, beecrowd BR Brazil
Timelimit: 1

Você fica tão feliz no natal que tem vontade de gritar para todo mundo: "Feliz natal!!". Pra colocar toda essa felicidade pra fora, você montou um programa que, colocado um índice I de felicidade, seu grito de natal é mais animado.
Entrada

A entrada é composta por um inteiro I (1 < I ≤ 104) que representa o índice de felicidade.
Saída

A saída é composta pela frase "Feliz natal!", sendo repetidas I vezes a última letra a da frase. Uma quebra de linha é necessária após a impressão da frase.*/

#include <stdio.h>
 
int main() {
 
    short int i, cont = 0;
	
	scanf("%hd",&i);
	
	printf("Feliz nat");
	
	while (cont < i)
	{
		printf("a");
		cont++;
	}
	
	printf("l!\n");
 
    return 0;
}
