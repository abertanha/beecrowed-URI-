/* beecrowd | 2633
Churras no Yuri

Por Matheus Pimenta, UNB BR Brazil
Timelimit: 1

Yuri é um bom companheiro. Sempre fazemos o churras dos “manos ;)” na casa dele! Desta vez, o motivo do churrasco é que os manos estão ﬁnalmente começando a passar em bons concursos! Então, hoje teremos aquela edição especial do churras, with alcohol and futebol de sabão!

A empresa do futebol de sabão está demorando para encher o campo e Yuri, já entendiado, começou a viajar na seguinte pergunta: se assássemos as carnes por ordem da data de validade, qual seria a sequência de peças de carne resultante? Como o MacBook de Yuri está muito longe (e a preguiça está muito perto), ele pediu a sua ajuda para responder esta pergunta.
Entrada

A entrada é composta por vários casos de teste e termina com ﬁm de arquivo. A primeira linha de um caso de teste contém um inteiro N (0 ≤ N ≤ 10), que é o número de peças de carne do churrasco de hoje. Em seguida virão N linhas, cada uma com uma cadeia de no máximo 20 caracteres, com apenas caracteres de ‘a’ a ‘z’, e um inteiro Di (0 ≤ Di ≤ 50) que representa a data de validade da i-ésima peça. Yuri resolveu colaborar e calcular ao menos este número Di de dias até a data de validade, a partir de hoje, de cada peça de carne. É garantido que se i != j, então Di != Dj .
Saída

Para cada caso de teste, imprima uma única linha com a sequência de peças de carne que Yuri quer calcular. Cada peça deve estar separada por um único espaço.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main ()
{
	int validade[10], testes,i = 0,auxI;
	char carnes[21][10],aux[21];
	
	while (scanf("%d",&testes) != EOF)
	{
		for(int i = 0;i < testes;i++)
			scanf("%s %d",&carnes[i], &validade[i]);
		
		for(int j = 0;j < testes;j++)
		{
			int menor = j;
			for( i = 1 + j;i < testes;i++)
			{
				if(validade[i] < validade[menor])
					menor = i;
			}
			strcpy(aux,carnes[j]);
			strcpy(carnes[j],carnes[menor]);
			strcpy(carnes[menor],aux);
			auxI = validade[j];
			validade[j] = validade[menor];
			validade[menor] = auxI;
		}
		for(int i = 0;i < testes;i++)
			(i < testes - 1) ? printf("%s ", carnes[i]) : printf("%s", carnes[i]);
			
		printf("\n");
	}	
	
	return 0;
}
