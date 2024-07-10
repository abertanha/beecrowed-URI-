/* beecrowd | 1049
Animal

Por Neilor Tonin, URI Brasil
Timelimit: 1

Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível segundo o esquema abaixo, da esquerda para a direita.  Em seguida conclua qual dos animais seguintes foi escolhido, através das três palavras fornecidas.

Entrada

A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, com todas as letras minúsculas.
Saída

Imprima o nome do animal correspondente à entrada fornecida.*/

#include <stdio.h>
#include <string.h>

int main ()
{
	char vert[13],filo[9],aliment[11];
	
	scanf("%s",vert);
	scanf("%s",filo);
	scanf("%s",aliment);
	
	if(vert[0] == 'i')
		if(filo[0] == 'i')
			if(aliment[2] == 'm')
				printf("pulga\n");
			else
				printf("lagarta\n");
		else
			if(aliment[0] == 'h')
				printf("sanguessuga\n");
			else
				printf("minhoca\n");
	else
		if(filo[0] == 'a')
			if(aliment[0] == 'c')
				printf("aguia\n");
			else
				printf("pomba\n");
		else
			if(aliment[0] == 'o')
				printf("homem\n");
			else
				printf("vaca\n");
	
	return 0;
}
