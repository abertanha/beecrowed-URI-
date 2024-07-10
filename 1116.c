/* beecrowd | 1116
Dividindo X por Y

Adaptado por Neilor Tonin, URI Brasil
Timelimit: 2

Escreva um algoritmo que leia 2 números e imprima o resultado da divisão do primeiro pelo segundo. Caso não for possível mostre a mensagem “divisao impossivel” para os valores em questão.
Entrada

A entrada contém um número inteiro N. Este N será a quantidade de pares de valores inteiros (X e Y) que serão lidos em seguida.
Saída

Para cada caso mostre o resultado da divisão com um dígito após o ponto decimal, ou “divisao impossivel” caso não seja possível efetuar o cálculo.

Obs.: Cuide que a divisão entre dois inteiros em algumas linguagens como o C e C++ gera outro inteiro. Utilize cast :)
*/

#include <stdio.h>
 
int main() 
{
    int qntPares, a, b;
	
	scanf("%d", &qntPares);
	
	float c[qntPares];
	
	for(int i = 0; i < qntPares;i++)
	{
		scanf("%d", &a);
		scanf("%d", &b);
		if (b != 0)
			c[i] = (float) a / b;
		else 
			c[i] = (-1000);
	}
	for (int i = 0; i < qntPares; i++)
	{
		c[i] == (-1000) ? printf("divisao impossivel\n") : printf("%.1f\n",c[i]);
	}
	
    return 0;
}
