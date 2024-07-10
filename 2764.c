/* beecrowd | 2764
Entrada e Saída de Data

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor gostaria de fazer um programa com as seguintes características:

    Leia uma data no formato DD/MM/AA;
    Imprima a data no formato MM/DD/AA;
    Imprima a data no formato AA/MM/DD;
    Imprima a data no formato DD-MM-AA.

Entrada

A entrada consiste vários arquivos de teste. Em cada arquivo de teste tem uma linha. A linha tem o seguinte formato DD/MM/AA onde DD, MM, AA são números inteiros. Conforme mostrado no exemplo de entrada a seguir.
Saída

Para cada arquivo da entrada, terá um arquivo de saída. O arquivo de saída tem três linhas conforme os procedimentos 2, 3 e 4. Conforme mostra o exemplo de saída a seguir.
*/

#include <stdio.h>
 
int main() {
 
    int dia, mes, ano;
	
	scanf("%d/%d/%d",&dia,&mes,&ano);
	
	printf("%02d/%02d/%02d\n",mes,dia,ano);
	printf("%02d/%02d/%02d\n",ano,mes,dia);
	printf("%02d-%02d-%02d\n",dia,mes,ano);
	
    return 0;
}
