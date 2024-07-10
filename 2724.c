/*beecrowd | 2724
Ajude Patatatitu

Por Felipe C. Ochial, URI BR Brazil
Timelimit: 1

Juvenal comportou-se muito bem este ano, já que gosta muito de química e queria muito ganhar um kit Alquimia. Entretanto, Juvenal pediu para incluir alguns elementos perigosos em seu kit. Seu Noel não podendo negar o pedido ( afinal, como dizer não para a criança mais bem comportada do planeta?) pediu para o pobre elfo Patatatitu garantir que o presente fosse seguro.

Patatatitu sabe muito sobre química, e conhece todos os compostos perigosos que podem ser feitos com os elementos disponíveis no kit de Juvenal. Assim, decidiu enviar um cd junto com o presente, contendo um programa que afira a segurança dos experimentos de Juvenal. Todos concordam que a criança mais bem-comportada do planeta nunca faria uma experiência sem antes checar sua segurança conforme as instruções. Porém Patatatitu não sabe programar e está atrás de ajuda. Você poderia ajudá-lo?

Para facilitar, Patatatitu explica que um composto perigoso é formado a partir da mistura de elementos na ordem de sua fórmula atômica e respeitando as devidas proporções. Neste kit de química é possível apenas adicionar um elemento por vez, em diferentes quantidades. Assim para formar trifluoreto de cloro (ClF3), um composto muito perigoso, deve-se adicionar um átomo cloro (Cl) e três de flúor (F3), independentemente do que for adicionado antes ou depois. ClF4 não é um composto perigoso, pois está fora de proporção. De forma similar caso Mg2F seja um composto perigoso, Mg2Fe será seguro, visto que flúor (F) é um elemento distinto de ferro (Fe).
Entrada

A entrada consiste de um inteiro N (0 < N < 10) que indica o número de casos de teste. Cada caso de teste consiste em um inteiro T (0 < T < 51) que indica o número de compostos perigosos possíveis, caso os elementos sejam incluídos na ordem e proporções mostradas. Seguem T linhas, cada uma contendo uma string de até 50 caracteres representando uma formula que gera um composto perigoso caso os elementos sejam misturados na ordem e proporções que são apresentados. Após isso, é dado um inteiro U (0 < U < 51) que indica a quantia de experiencias que Juvenal irá realizar. Seguem U linhas cada uma contendo uma string de até 50 caracteres representando os elementos que Juvenal utilizara na ordem e proporções em que serão adicionados.
Saída

A saída consiste de U linhas por caso de teste, as quais devem informar se Juvenal deve prosseguir ou abortar o  U-ésimo  experimento do caso teste. Caso deva abortar imprima "Abortar", caso seja seguro imprima "Prossiga".Deixe uma linha em branco entre cada caso de teste.
*/

include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_STRING_SIZE 51
#define NUMBER_OF_STRING 51
 
int main() {
 
   int n, subPer, qntExp, auxSub, auxExp, flag, i = 0;
   char nomSub[NUMBER_OF_STRING][MAX_STRING_SIZE], exp[NUMBER_OF_STRING][MAX_STRING_SIZE];
   
   scanf("%d",&n);
   while(n > 0)
   {
		scanf("%d",&subPer);
		auxSub = subPer;
		i = 0;
		while(auxSub > 0)
		{
			scanf("%s",nomSub[i++]);
			auxSub--;
		}

		scanf("%d", &qntExp);
		auxExp = qntExp;
		i = 0;
		while(auxExp > 0)
		{
			scanf("%s",exp[i++]);
			auxExp--;
		}
		
	    for(int k = 0; k < qntExp; k++)
		{
			flag = 0;
			for(int i = 0;i < subPer;i++)
			{
				int length = strlen(nomSub[i]);
				if(strstr(exp[k],nomSub[i]) != NULL)
				{
					char *ptr = strstr(exp[k],nomSub[i]);
				
					if(isalpha(ptr[length]) != 0 && islower(ptr[length]) == 0 || ptr[length] == '\0')
					{
						printf("Abortar\n");
						flag = 1;
						break;
					}
				}
			}
			if(flag == 0)
				printf("Prossiga\n");
		}
		if(n > 1)
			printf("\n");
	   n--;
   }
    return 0;
}
