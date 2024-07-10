/* beecrowd | 2747
Saída 1

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor de programação gostaria de fazer uma tela com as seguintes características:

    Ter 39 traços (-) na primeira linha;
    Ter uma | embaixo do primeiro traço e do trigésimo nono traço da primeira linha, preencher no meio com espaço em branco;
    Repita o procedimento 2 mais quatro vezes;
    Repita o procedimento 1.

No final deve ficar igual a imagem a seguir:

--------------------------------------- (39 traços)
|                                     |
|                                     |
|                                     |
|                                     |
|                                     |
--------------------------------------- (39 traços)

Entrada

Não há.
Saída

A saída será impressa conforme a figura acima.
*/

#include <stdio.h>
 
int main() {
    
    for(int i = 0; i < 7; i++)
    	{
    		if(i == 0 || i == 6)
    			printf("---------------------------------------\n");
    		if(i < 5)
    			printf("|                                     |\n");
    	}
    return 0;
}
