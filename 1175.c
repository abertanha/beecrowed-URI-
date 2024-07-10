 /*beecrowd | 1175
Troca em Vetor I

Adaptado por Neilor Tonin, URI Brasil
Timelimit: 1

Faça um programa que leia um vetor N[20]. Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.
Entrada

A entrada contém 20 valores inteiros, positivos ou negativos.
Saída

Para cada posição do vetor N, escreva "N[i] = Y", onde i é a posição do vetor e Y é o valor armazenado naquela posição.*/

#include <stdio.h>
 
int main() {
 
	int n[20], m[20];

	for(int i = 0; i < 20; i++)
	   scanf("%d",&n[i]);

	for(int i = 0; i < 20; i++)
	   m[19 - i] = n[i];
	   
	for(int i = 0; i < 20; i++)
	   printf("N[%d] = %d\n",i,m[i]);
   
    return 0;
}
