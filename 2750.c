/* beecrowd | 2750
Saída 4

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor de programação gostaria que você fizesse um programa com as seguintes características:

    Criar 16 variáveis inteiras;
    Atribuir a elas valores de 0 a 15 a cada um das variáveis anteriores;
    Ter 39 traços (-) na primeira linha;
    Ter uma | embaixo do primeiro traço, décimo terceiro, vigésimo terceiro e do trigésimo nono traço da primeira linha, embaixo do 4o traço deve começar a escrever “decimal”, embaixo do 16o traço deve começar a escrever “octal”, embaixo do 26o traço deve começar a escrever “Hexadecimal” e o restante preencher com espaço em branco;
    Repita o procedimento 1;
    Ter uma | embaixo do primeiro traço, décimo terceiro, vigésimo terceiro e do trigésimo nono traço da primeira linha, embaixo do 8o traço deve imprimir o valor da primeira variável em valor decimal, embaixo do 18o traço deve imprimir o valor da primeira variável em valor octal, embaixo do 31o traço deve imprimir o valor da primeira variável em valor hexadecimal e o restante preencher com espaço em branco;
    Repita o procedimento 6 para as outras 15 variáveis;
    Repita o procedimento 1.

No final deve ficar igual a imagem a seguir:

--------------------------------------- (39 traços)
| decimal   |  octal  |  Hexadecimal  |
---------------------------------------
|      0    |    0    |       0       |
|      1    |    1    |       1       |
|      2    |    2    |       2       |
|      3    |    3    |       3       |
|      4    |    4    |       4       |
|      5    |    5    |       5       |
|      6    |    6    |       6       |
|      7    |    7    |       7       |
|      8    |   10    |       8       |
|      9    |   11    |       9       |
|     10    |   12    |       A       |
|     11    |   13    |       B       |
|     12    |   14    |       C       |
|     13    |   15    |       D       |
|     14    |   16    |       E       |
|     15    |   17    |       F       |
--------------------------------------- (39 traços)

Entrada

Não há.
Saída

A saída será impressa conforme a figura acima.
*/

#include <stdio.h>
 
int main() {
 
  puts("---------------------------------------");
	puts("|  decimal  |  octal  |  Hexadecimal  |");
	puts("---------------------------------------");
	puts("|      0    |    0    |       0       |");
	puts("|      1    |    1    |       1       |");
	puts("|      2    |    2    |       2       |");
	puts("|      3    |    3    |       3       |");
	puts("|      4    |    4    |       4       |");
	puts("|      5    |    5    |       5       |");
	puts("|      6    |    6    |       6       |");
	puts("|      7    |    7    |       7       |");
	puts("|      8    |   10    |       8       |");
	puts("|      9    |   11    |       9       |");
	puts("|     10    |   12    |       A       |");
	puts("|     11    |   13    |       B       |");
	puts("|     12    |   14    |       C       |");
	puts("|     13    |   15    |       D       |");
	puts("|     14    |   16    |       E       |");
	puts("|     15    |   17    |       F       |");
	puts("---------------------------------------");
	
    return 0;
}
