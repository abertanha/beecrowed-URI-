/* beecrowd | 2757
Entrada e Saída de Números Inteiros

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor gostaria que você fizesse um programa com as seguintes características:

    Crie três variáveis para armazenar números inteiros;
    Leia o primeiro número, que pode ser um valor na faixa de: -10000 ≤ A ≤ 10000;
    Leia o segundo número, que pode ser um valor na faixa de: 0 ≤ B ≤ 99;
    Leia o terceiro número, que pode ser um valor na faixa de: 0 ≤ C ≤ 999;
    Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na primeira variável, uma virgula, um espaço em branco, a letra B, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na segunda variável, uma virgula, um espaço em branco, a letra C, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na terceira variável. Não esqueça de pular linha;
    Repita o procedimento 5, colocando o número em um espaçamento de 10 dígitos e justificado a direita;
    Repita o procedimento 5, colocando o número em um espaçamento de 10 dígitos e preenchido com zeros;
    Repita o procedimento 5, colocando o número em um espaçamento de 10 dígitos e justificado a esquerda.

Entrada

A entrada consiste vários arquivos de teste. Em cada arquivo de teste tem três linhas. Na primeira linha tem um inteiro A (-10000 ≤ A ≤ 10000). Na segunda linha tem um inteiro B (0 ≤ B ≤ 99). Na terceira linha tem um inteiro C (0 ≤ C ≤ 999). Conforme mostrado no exemplo de entrada a seguir.
Saída

Para cada arquivo da entrada, terá um arquivo de saída. O arquivo de saída tem quatro linhas da forma descrita no item 5. Conforme mostra o exemplo de saída a seguir.
*/

#include <stdio.h>
 
int main() {
 
    int A;
	short int B, C;
	
	scanf("%d",&A);
	scanf("%hd",&B);
	scanf("%hd",&C);
	
	printf("A = %d, B = %hd, C = %hd\n",A,B,C);
	printf("A = %10d, B = %10hd, C = %10hd\n",A,B,C);
	printf("A = %010d, B = %010hd, C = %010hd\n",A,B,C);
	printf("A = %-10d, B = %-10hd, C = %-10hd\n",A,B,C);
	
    return 0;
}
