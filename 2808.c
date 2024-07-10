/*Mais Cavalos

Por Francisco Elio Parente Arcos Filho, UEA BR Brazil
Timelimit: 1

Dado a posição inicial de um cavalo em um tabuleiro de xadrez e a posição destino, deve se dizer se, com exatamente um único movimento, o cavalo consegue alcançar a posição destino. Se isso for possível, o movimento é classificado como válido, caso contrário, o movimento é dito inválido.

Em um tabuleiro de xadrez se utiliza números, de 1 a 8, para especificar a linha do tabuleiro e letras, de 'a' a 'h' para especificar a coluna.
Entrada

A entrada é composta por uma única linha contendo a posição inicial do cavalo e a posição destino, separadas por um espaço em branco. Uma posição no tabuleiro é especificada por um caractere, que representa a coluna, seguido de um número inteiro que representa a linha.
Saída

A saída consiste em uma linha contendo a mensagem "VALIDO" caso o movimento seja um movimento válido de um cavalo no jogo de xadrez ou "INVALIDO" caso contrário.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
 
int main() {
 
    char movimento[6], letras[] = {'a','b','c','d','e','f','g','h','\0'};
	int lenght, movInt[4], flag = 1;
	
	fgets(movimento,6,stdin);
	
	lenght = strlen(movimento);
	for(int j = 0;j < lenght;j++)
	{
		for(int i = 0;i < 8;i++)
			if(movimento[j] == letras[i])
				movInt[j]= i + 1;
	}		
	movInt[1] = (movimento[1] - '0');
	movInt[4] = (movimento[4] - '0');
	
	
	if(((abs(movInt[0] - movInt[3]) == 2) && (abs(movInt[1] - movInt[4]) == 1)) ||
	   ((abs(movInt[0] - movInt[3]) == 1) && (abs(movInt[1] - movInt[4]) == 2)))
		flag = 0;
	if(flag)
		printf("IN");
	
	printf("VALIDO\n");
	
    return 0;
}
