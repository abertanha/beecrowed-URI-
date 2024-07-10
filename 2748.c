/* beecrowd | 2748
Saída 2

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor de programação gostaria de fazer uma tela com as seguintes características:

    Ter 39 traços (-) na primeira linha;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, embaixo do 10 traço deve começar a escrever a palavra "Roberto" e o restante preencher no meio com espaço em branco;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, preencher no meio com espaço em branco;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, embaixo do 10 traço deve começar a escrever o número "5786" e o restante preencher no meio com espaço em branco;
    Repita o procedimento 3;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, embaixo do 10 traço deve começar a escrever a palavra "UNIFEI" e o restante preencher no meio com espaço em branco;
    Repita o procedimento 1.

No final deve ficar igual a imagem a seguir:

--------------------------------------- (39 traços)
|        Roberto                      |
|                                     |
|        5786                         |
|                                     |
|        UNIFEI                       |
--------------------------------------- (39 traços)
Entrada

Não há.
Saída

A saída será impresso conforme a figura acima.
*/

#include <stdio.h>
 
int main() {
 
    for(int i = 0; i < 7; i++)
	{
		if(i == 0 || i == 6)
			printf("---------------------------------------\n");
		if(i == 2 || i == 4)
			printf("|                                     |\n");
		if(i == 1)
			printf("|        Roberto                      |\n");
		if(i == 3)
			printf("|        5786                         |\n");
		if(i == 5)
			printf("|        UNIFEI                       |\n");
	}
    return 0;
}
