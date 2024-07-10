/*beecrowd | 2714
Minha Senha Provisória

Por , Silva A. M. BR Brazil
Timelimit: 1

Uma instituição de ensino lisboeta tem como prática para atribuição de senha de acesso ao portal acadêmico utilizar o RA (registro acadêmico) do aluno. Nesta instituição os RA's são strings de 20 caracteres iniciados sempre pelos caracteres "RA" e seguidos por 18 dígitos numéricos. por exemplo: RA000000000000012340. Estes identificadores são gerados automaticamente pelo sistema de matrículas e são formados por três partes principais: (a) iniciados pelos caracteres "RA", (b) seguidos por Z digitos zeros formatadores de posição (onde, 0 <= Z <= 17), e por fim, (c) o número identificador do aluno propriamente dito, considerando os X números mais a direita do RA não iniciados por zero (onde, 1 <= X <= 18).   
 
Entrada

A primeira linha de entrada é um valor inteiro N (onde, 1 <= N <= 1000) que representa a quantidade de RA's que deve ser considerada pelo programa. As N seguintes linhas representam, cada uma, strings, de no máximo 100 caracteres, que representam os RA's enviados pelo sistema de matrícula.
 
Saída

As saídas válidas para o programa são: a apresentação da senha provisória ou a indicação de "INVALID DATA". A senha provisória é formada pelos X caracteres númericos não iniciados em 0 mais a direita da string, por exemplo: para o identificador "RA000000000000012340" a senha provisória deve ser "12340". Caso a string recebida não esteja de acordo com as regras de formação, o programa deve indicar "INVALID DATA".*/
 
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
 
int main() {
 
    int n;
	char reg[21], i = 0, senha[18];
	
	scanf("%d%*c",&n);
	
	while(n > 0)
	{
		scanf("%s",reg);
		
		if(strlen(reg) < 20)
			printf("INVALID DATA\n");
		
		else if(isupper(reg[0]) == 0 || isupper(reg[1]) == 0)
			printf("INVALID DATA\n");
		
		else
		{
			int j = 0;
			bool flag = false;
			
			while(reg[i] != '\0')
			{
				if(isdigit(reg[i]) > 0 && (reg[i] != '0'|| flag ))
				{
					flag = true;
					senha[j++] = reg[i];
				}
				i++;
			}
			i = 0;
			senha[j] = '\0';
			printf("%s\n", senha);
		}
		n--;
	}
    return 0;
}
