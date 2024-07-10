/*beecrowd | 1045
Tipos de Triângulos

Adaptado por Neilor Tonin, URI Brasil
Timelimit: 1

Leia 3 valores de ponto flutuante A, B e C e ordene-os em ordem decrescente, de modo que o lado A representa o maior dos 3 lados. A seguir, determine o tipo de triângulo que estes três lados formam, com base nos seguintes casos, sempre escrevendo uma mensagem adequada:

    se A ≥ B+C, apresente a mensagem: NAO FORMA TRIANGULO
    se A2 = B2 + C2, apresente a mensagem: TRIANGULO RETANGULO
    se A2 > B2 + C2, apresente a mensagem: TRIANGULO OBTUSANGULO
    se A2 < B2 + C2, apresente a mensagem: TRIANGULO ACUTANGULO
    se os três lados forem iguais, apresente a mensagem: TRIANGULO EQUILATERO
    se apenas dois dos lados forem iguais, apresente a mensagem: TRIANGULO ISOSCELES

Entrada

A entrada contem três valores de ponto flutuante de dupla precisão A (0 < A) , B (0 < B) e C (0 < C).
Saída

Imprima todas as classificações do triângulo especificado na entrada.*/

#include <stdio.h>
 
struct triangulo {float a,b,c;};

int main()
{
	struct triangulo teste;
	
	scanf("%f %f %f", &teste.a,&teste.b,&teste.c);
	
	float maior, meio, menor;
	
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
		printf("NAO FORMA TRIANGULO\n");
	else
	{
		if(maior*maior == meio*meio + menor*menor)
			printf("TRIANGULO RETANGULO\n");
		else
			if(maior*maior > meio*meio + menor*menor)
				printf("TRIANGULO OBTUSANGULO\n");
			else
				if(maior*maior < meio*meio + menor*menor)
					printf("TRIANGULO ACUTANGULO\n");
	}
	if(maior == menor && maior == meio)
		printf("TRIANGULO EQUILATERO\n");
	else
		if((maior == menor && maior != meio) || (maior != menor && maior == meio) || (menor == meio && menor != maior))
			printf("TRIANGULO ISOSCELES\n");
		
    return 0;
}
