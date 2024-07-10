/*beecrowd | 2397
Triângulos

Por OBI - Olimpíada Brasileira de Informática 2011 BR Brazil
Timelimit: 1

Caio estava brincando de construir triângulos com palitos de diferentes tamanhos. Ele fazia isso juntando as pontas de três palitos sobre uma mesa. Ele notou que podia agrupar os triângulos formados em três grupos:

    Triângulos acutângulos, que são aqueles em que todos os ângulos internos medem menos de 90°;
    Triângulos retângulos, que são aqueles que possuem um ângulo interno que mede exatamente 90°;
    Triângulos obtusângulos, que são aqueles que possuem um ângulo interno que mede mais de 90°.

Ele também percebeu que nem sempre é possível formar um triângulo com três palitos.

Sua tarefa é, dados os comprimentos A, B e C de três palitos, dizer se é possível formar um triângulo com esses palitos e, em caso afirmativo, dizer a qual grupo o triângulo formado pertence.
Entrada

A entrada consiste de uma única linha, contendo três inteiros A, B e C (1 ≤ A, B, C ≤ 104) separados por espaço.
Saída

Imprima uma linha contendo apenas uma letra minúscula:

    'n' se não for possível formar um triângulo;
    'a' se o triângulo formado for acutângulo;
    'r' se o triângulo formado for retângulo;
    'o' se o triângulo formado for obtusângulo.
*/

#include <stdio.h>
 
struct triangulo {int a,b,c;};

int main()
{
	struct triangulo teste;
	
	scanf("%d %d %d", &teste.a,&teste.b,&teste.c);
	
	int maior, meio, menor;
	
	if(teste.a >= teste.b && teste.a >= teste.c && teste.b >= teste.c)
	{
		maior = teste.a;
		meio = teste.b;
		menor = teste.c;
	}
	if(teste.b >= teste.a && teste.b >= teste.c && teste.a >= teste.c)
	{
		maior = teste.b;
		meio = teste.a;
		menor = teste.c;
	}
	if(teste.c >= teste.a && teste.c >= teste.b && teste.a >= teste.b)
	{
		maior = teste.c;
		meio = teste.a;
		menor = teste.b;
	}
	if(teste.a >= teste.b && teste.a >= teste.c && teste.c >= teste.b)
	{
		maior = teste.a;
		meio = teste.c;
		menor = teste.b;
	}
	if(teste.b >= teste.a && teste.b >= teste.c && teste.a <= teste.c)
	{
		maior = teste.b;
		meio = teste.c;
		menor = teste.a;
	}
	if(teste.c >= teste.a && teste.c >= teste.b && teste.b >= teste.a)
	{
		maior = teste.c;
		meio = teste.b;
		menor = teste.a;
	}
	//printf("%.1f %.1f %.1f\n", maior, meio, menor);
	if(maior >= meio + menor)
		printf("n\n");
	else
	{
		if(maior*maior == meio*meio + menor*menor)
			printf("r\n");
		else
			if(maior*maior > meio*meio + menor*menor)
				printf("o\n");
			else
				if(maior*maior < meio*meio + menor*menor)
					printf("a\n");
	}
		
    return 0;
}
