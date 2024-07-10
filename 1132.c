/* beecrowd | 1132
Múltiplos de 13

Adaptado por Neilor Tonin, URI Brasil
Timelimit: 1

Escreva um algoritmo que leia 2 valores inteiros X e Y calcule a soma dos números que não são múltiplos de 13 entre X e Y, incluindo ambos.
Entrada

O arquivo de entrada contém 2 valores inteiros quaisquer, não necessariamente em ordem crescente.
Saída

Imprima a soma de todos os valores não divisíveis por 13 entre os dois valores lidos na entrada, inclusive ambos se for o caso.
*/

#include <stdio.h>
 
int main() {
    
    int x, y, maior, menor, resp = 0;
    
    scanf("%d", &x);
	scanf("%d", &y);
    
    if(x == y) printf("0");
	
    else{
        if(x > y){
			
            maior = x;
            menor = y;
			
        }else{
			
            maior = y;
            menor = x;
			
        }
    }
    while(maior >= menor)
    {
        if(menor % 13 != 0)
        {
            resp += menor;   
        }
        menor++;
    }
	printf("%d\n",resp);
	
    return 0;
}
