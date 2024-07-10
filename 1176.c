/*beecrowd | 1176
Fibonacci em Vetor

Adaptado por Neilor Tonin, URI Brasil
Timelimit: 1

Faça um programa que leia um valor e apresente o número de Fibonacci correspondente a este valor lido. Lembre que os 2 primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo termo é a soma dos 2 anteriores a ele. Todos os valores de Fibonacci calculados neste problema devem caber em um inteiro de 64 bits sem sinal.
Entrada

A primeira linha da entrada contém um inteiro T, indicando o número de casos de teste. Cada caso de teste contém um único inteiro N (0 ≤ N ≤ 60), correspondente ao N-esimo termo da série de Fibonacci.
Saída

Para cada caso de teste da entrada, imprima a mensagem "Fib(N) = X", onde X é o N-ésimo termo da série de Fibonacci.*/

#include <stdio.h>
 
long long int fib (int);

int main() 
{
	int n, i;
	
	scanf("%d",&n);
	
	while (n > 0){
		
		scanf("%d",&i);
		printf("Fib(%d) = %llu\n",i,fib(i));
		n--;
	}
    return 0;
}
long long int fib (int n) 
{
    
    if(n == 0)
        return 0;
        
    if(n == 1)
        return 1;
        
    long long int F = 0, F1 = 0, F2 = 1;
    
    for(int i = 2;i <= n; i++)
	{
        F = F1 + F2;
        F1 = F2;
        F2 = F;
    }
    return F;
}
