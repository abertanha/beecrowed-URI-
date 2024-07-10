/* beecrowd | 1161
Soma de Fatoriais

Adaptado por Neilor Tonin, URI Brasil
Timelimit: 1

Leia dois valores inteiros M e N indefinidamente. A cada leitura, calcule e escreva a soma dos fatoriais de cada um dos valores lidos. Utilize uma variável apropriada, pois cálculo pode resultar em um valor com mais de 15 dígitos.
Entrada

O arquivo de entrada contém vários casos de teste. Cada caso contém dois números inteiros M (0 ≤ M ≤ 20) e N (0 ≤ N ≤ 20). O fim da entrada é determinado por eof.
Saída

Para cada caso de teste de entrada, seu programa deve imprimir uma única linha, contendo um número que é a soma de ambos os fatoriais (de M e N).
*/

#include <stdio.h>

unsigned long long int fact(int);
	
int main ()
{
	int M, N;
	unsigned long long int result, factM, factN;
	
	while(scanf("%d", &M) != EOF && scanf("%d", &N) != EOF)
	{
		factM = fact(M);
		factN = fact(N);
		result = factM + factN;
		printf("%llu\n", result);
	}
	return 0;
}
unsigned long long int fact(int n){
	if(n == 0) 
		return 1;
	else
		return n * fact(n-1);
}
