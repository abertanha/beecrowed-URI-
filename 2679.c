/* beecrowd | 2679
Sucessor Par

Por Emílio Wuerges, UFFS BR Brazil
Timelimit: 1

Para se preparar para os outros problemas, vamos fazer um teste. Dado um número X, retorne o menor número par maior do que X.
Entrada

Uma linha contendo um número  0 < X < 107.
Saída

Uma linha contendo a resposta do problema.
*/

#include <stdio.h>
 
int main() {
    
    int x;

    scanf("%lu", &x);

    printf("%lu\n", x - (x % 2) + 2);
    
    return 0;
}
