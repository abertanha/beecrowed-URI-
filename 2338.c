/*beecrowd | 2338
Morse

Por Syed Sarfaraz Akhtar, IIITH IN India
Timelimit: 1

Todos os seus amigos estão loucos pelo filme "Interstellar". Agora eles estão postando textos no Facebook em Código Morse. Você precisa escrever um código para decodificar Morse!

Este Código Morse contém somente letras minúsculas (a-z) e espaços em branco.

Nota - Código Morse é uma forma de codificar caracteres em uma sequências de pontos e traços. Cada caracter tem uma codificação fixa. Um exemplo bem famoso é o Morse de SOS "...---..." . S é codificado como "..." (ponto ponto ponto) e O é codificado como "---" (traço traço traço).
Neste problema, um ponto é denotado por "=" e um traço por "===". Símbolos são separados por "." , letras são separadas por "..." e palavras são separadas por "......." .
Sendo assim, SOS é codificado como =.=.=...===.===.===...=.=.=
Codificações para todos os caracteres podem ser encontradas no link abaixo.

    http://morsecode.scphillips.com/morse2.html 

Entrada

A entrada consiste em múltiplos casos de teste.

A primeira linha de cada entrada contém o número de casos de teste (t)(1 <= t <= 10).

As próximas t linhas contém os Códigos Morse. O tamanho de cada código é menor que 1000 caracteres.
Saída

A saída é divida em linhas, que representam a mensagem decodificada de cada caso de teste.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

static char *morse[] = {"=.===","===.=.=.=", "===.=.===.=",
						"===.=.=","=","=.=.===.=","===.===.=",
						"=.=.=.=","=.=","=.===.===.===",
						"===.=.===","=.===.=.=","===.===",
						"===.=","===.===.===","=.===.===.=",
						"===.===.=.===","=.===.=","=.=.=","===",
						"=.=.===","=.=.=.===","=.===.===","===.=.=.===",
						"===.=.===.===","===.===.=.="};
					
void morseToAscii(char, char);

int main() {
 
   int n, flag = 0;
   char cod[1000*2],pedaco[16],resposta[16];
 
   
   scanf("%d",&n);
   
   while(n > 0)
   {
		scanf("%s", cod);
		
		for(int i = 0; i < strlen(cod);)
		{
			for(int j = 0;;j++)
			{				
				if(cod[i] == '=')
				{
					pedaco[j] = '=';
					i++;
				}
				else if(cod[i] == '.' && cod[i+1] == '.' && cod[i+2] == '.'&& cod[i+3] != '.')
				{
					i += 3;
					pedaco[j] = '\0';
					break;
				}
				else if(cod[i] == '.' && cod[i+1] == '.' && cod[i+2] == '.'&& cod[i+3] == '.')
				{
					pedaco[j] = '\0';
					i += 7;
					flag = 1;
					break;
				}
				else
				{
					pedaco[j] = '.';
					i += 1;
				}
				if(strlen(cod) <= i)
				{
					pedaco[j+1] = '\0';
					i += 1;
					break;
				}
			}
			morseToAscii(pedaco, resposta);
			printf("%s", resposta);
			if(flag == 1)
			{
				printf(" ");
				flag = 0;
			}
		}
		printf("\n");
		n--;
	}
	return 0;
}

void morseToAscii(char *s, char *resposta)
{	
	while(*s)
	{
		for(int j = 0;j < 26;j++)
		{
			if(strcmp(s, morse[j]) == 0)
			{
				*resposta = j + 97;
				s += strlen(morse[j]);
				break;
			}
			
		}
	}
}
