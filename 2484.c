/*Abracadabra

Por João Marcos Salvanini Bellini de Moraes, IFSULDEMINAS BR Brazil
Timelimit: 1

No século XXII, uma doença devastadora atingiu mais da metade da população mundial. O governo está desesperado em busca de uma cura, pois há um grande risco de que a doença dizime toda a população. Os hospitais estão lotados e a aflição no olhar das pessoas é notável.

Nesta época, poucas pessoas têm acesso livre à internet, mas você é uma delas. Ao vasculhar a rede, você encontrou alguns textos dispersos sobre um amuleto de uma palavra mágica escrita em forma de um triângulo que cura doenças letais. Incrédulo mas esperançoso, você se lembrou de que a biblioteca do Sr. Severino tinha um livro um tanto inusitado, com a seguinte capa:

Então, você foi imediatamente à biblioteca. Chegando lá, ao ler somente o prefácio do livro, já confirmou tudo o que viu sobre os amuletos na rede, e em seguida, deu a si mesmo uma missão: espalhar palavras mágicas na rede em forma de um triângulo a fim de alertar as pessoas de que pode haver uma cura para a doença. Por consequência, se forem construídos amuletos em massa com palavras mágicas e estes forem entregues às pessoas, a doença pode ser aniquilada e a população, salva.

Para completar tal missão, você deverá começar pelo passo mais simples: escrever um programa que receba uma palavra e a transforme em um triângulo, tal como na capa do livro.
Entrada

A entrada contém vários casos de teste. Cada caso de teste é composto por uma palavra de 2 até 100 caracteres e sem espaços. A entrada termina com EOF (fim de arquivo).
Saída

Para cada caso de teste, imprima a palavra recebida em forma de um triângulo e lembre-se de deixar um espaço em branco entre cada letra, mas não deixe espaço em branco após a última letra de cada linha. Imprima uma linha em branco após cada caso de teste, inclusive após o último.
*/

#include <stdio.h>
#include <string.h>
 
int main() 
{
	char palavra[101], palavra2[101];
	int comp, i = 0,comp2, espaco;
	
	while(scanf("%s",palavra) != EOF)
	{
		
		comp = strlen(palavra);
		comp2 = comp;
		strcpy(palavra2,palavra);
		espaco = 0;
		do
		{
			if(espaco != 0)
				for(int j = 0;j < espaco;j++)
					printf(" ");
			while(i < comp)
			{
				if(comp2 > 1)
				{
					printf("%c ",palavra2[i++]);
				}
				else 
					if (comp2 == 0)
					printf("%c",palavra2[i++]);
				comp2--;
			}
			
			i = 0;
			comp -= 1;
			comp2 = comp;
			espaco += 1;
			printf("\n");
			
		}while(comp != 0);
		printf("\n");
	}
    return 0;
}
