/* beecrowd | 2753
Saída 7

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor de programação gostaria que você fizesse um programa com as seguintes características:

    Crie vinte e seis variáveis inteira;
    Atribua a primeira variável o valor 97;
    Atribua as outras demais variável o valor da primeira somado de uma unidade;
    Mostre na tela os valores numéricos da primeira variável, um espaço em braco, o carácter 'e', outro espaço em branco e o seu valor alfanumérico (caracteres);
    Repita o procedimento para todas as outras variáveis.

Entrada

Não há.
Saída

O resultado de seu programa deve ser o mesmo do exemplo de saída.
*/

#include <stdio.h>
 
int main() {
 
    int alfa[26], i = 0;

	alfa[0] = 97;
	
	while(i < 26)
	{
		alfa[i] = alfa[0] + i; 
		printf("%d e %c\n",alfa[i], alfa[i]);
		i++;
	}
 
    return 0;
}
