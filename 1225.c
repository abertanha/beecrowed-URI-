/*beecrowd | 1255
Frequência de Letras

Por Sumudu Fernando Canadá
Timelimit: 1

Neste problema estamos interessados na frequência das letras em uma dada linha de texto.

Especificamente, deseja-se saber qual(is) a(s) letra(s) de maior frequência do texto, ignorando o “case sensitive”, ou seja maiúsculas ou minúsculas (sendo mais claro, “letras” referem-se precisamente às 26 letras do alfabeto).
Entrada

A entrada contém vários casos de teste. A primeira linha contém um inteiro N que indica a quantidade de casos de teste. Cada caso de teste consiste de uma única linha de texto. A linha pode conter caracteres “não letras”, mas é garantido que tenha ao menos uma letra e que tenha no máximo 200 caracteres no total.
Saída

Para cada caso de teste, imprima uma linha contendo a(s) letra(s) que mais ocorreu(ocorreram) no texto em minúsculas (se houver empate, imprima as letras em ordem alfabética).*/

#include <stdio.h>

int main () {
	int N, pos, max, cont[123];
	char a[201];

	scanf("%d%*c",&N);


    while(N > 0)
    {
        scanf("%[^\n]%*c",&a);
        int j = 97;
        while(j <= 122)
        {
            cont[j] = 0;
            j++;
        }
        int i = 0;
        max = 0;
		
        while(a[i] != '\0')
        {
            if(a[i] >= 65 && a[i] <= 90)
				a[i] += 32;
			
			if(a[i] >= 97 && a[i] <= 122)
			{
				pos = a[i];
				cont[pos]++;
				if(cont[pos] > max)
					max = cont[pos];
			}
			i++;
        }
        for(char c = 'a'; c <= 'z'; c++)
        {
            if(cont[c] == max)
                printf("%c",c);
        }

        printf("\n");
		N--;
    }
    return 0;
}
