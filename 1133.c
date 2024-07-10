/* beecrowd | 1133
Resto da Divisão

Adaptado por Neilor Tonin, URI Brasil
Timelimit: 1

Escreva um programa que leia 2 valores X e Y e que imprima todos os valores entre eles cujo resto da divisão dele por 5 for igual a 2 ou igual a 3.
Entrada

O arquivo de entrada contém 2 valores positivos inteiros quaisquer, não necessariamente em ordem crescente.
Saída

Imprima todos os valores conforme exemplo abaixo, sempre em ordem crescente.
*/

#include <stdio.h>
 
int main() {
 
	double A[100];
	
	for(int i = 0; i < 100; i++)
		scanf("%lf", &A[i]);
	
	for(int i = 0; i < 100; i++)
		if(A[i] <= 10)
			printf("A[%d] = %.1lf\n",i ,A[i]);

    return 0;
}
