/* beecrowd | 2762
Entrada e Saída 6

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor gostaria de fazer um programa com as seguintes características:

    Leia um número no formato: XXXXX.YYY;
    Imprima o número na forma invertida: YYY.XXXXX.

Entrada

A entrada consiste vários arquivos de teste. Em cada arquivo de teste tem uma linha. A linha tem um número real com 3 casas decimais. Conforme mostrado no exemplo de entrada a seguir.
Saída

Para cada arquivo da entrada, terá um arquivo de saída. O arquivo de saída tem uma linha da forma descrita nos itens 2. Conforme mostra o exemplo de saída a seguir.
*/

#include <stdio.h>
 
int main() {
 
    int n1, n2;
	
	scanf("%d.%d", &n1, &n2);
	
	printf("%d.%d\n", n2, n1);
 
    return 0;
}
