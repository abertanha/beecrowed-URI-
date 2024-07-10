/*beecrowd | 2758
Entrada e Saída de Números Reais

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor gostaria de fazer um programa com as seguintes características:

    Crie duas variáveis para armazenar números reais de precisão simples;
    Crie duas variáveis para armazenar números reais de precisão dupla;
    Leia o primeiro número de precisão simples que sempre terá uma casa decimal;
    Leia o segundo número de precisão simples que sempre terá duas casas decimais;
    Leia o primeiro número de precisão dupla que sempre terá três casas decimais;
    Leia o segundo número de precisão dupla que sempre terá quatro casas decimais;
    Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na primeira variável lida no passo 3, uma virgula, um espaço em branco, a letra B, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na segunda variável lida no passo 4. Não esqueça de pular linha;
    Imprima a letra C, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na primeira variável lida no passo 5, uma virgula, um espaço em branco, a letra D, um espaço em branco, o sinal de igual, um espaço em branco, o número armazenado na segunda variável lida no passo 6. Não esqueça de pular linha;
    Repita o procedimento 7, imprimindo os números com uma casa decimal;
    Repita o procedimento 8, imprimindo os números com uma casa decimal;
    Repita o procedimento 7, imprimindo os números com duas casas decimais;
    Repita o procedimento 8, imprimindo os números com duas casas decimais;
    Repita o procedimento 7, imprimindo os números com três casas decimais;
    Repita o procedimento 8, imprimindo os números com três casas decimais;
    Repita o procedimento 7, imprimindo os números com três casas decimais e em forma de notação cientifica com o carácter E;
    Repita o procedimento 8, imprimindo os números com três casas decimais e em forma de notação cientifica com o carácter E;
    Repita o procedimento 7, imprimindo somente a parte inteira do número;
    Repita o procedimento 8, imprimindo somente a parte inteira do número.

Entrada

A entrada consiste em vários arquivos de teste. Em cada arquivo de teste tem duas linhas. Na primeira linha tem dois números reais A e B (-1000.0 ≤ A, B ≤ 1000.0), separados por espaço em branco. Na segunda linha tem dois números reais C e D (-1000.0 ≤ C, D ≤ 1000.0), separados por espaço em branco. Conforme mostrado no exemplo de entrada a seguir.
Saída

Para cada arquivo da entrada, terá um arquivo de saída. O arquivo de saída tem doze linhas da forma descrita no item 7 e 8. Conforme mostra o exemplo de saída a seguir.*/

#include <stdio.h>
 
int main() {
 
    float a, b;
	double c, d;
		
	scanf("%f %f",&a, &b);
	scanf("%lf %lf",&c, &d);
	

	printf("A = %f, B = %f\n",a,b);
	printf("C = %lf, D = %lf\n",c,d);
	printf("A = %.1f, B = %.1f\n",a,b);
	printf("C = %.1lf, D = %.1lf\n",c,d);
	printf("A = %.2f, B = %.2f\n",a,b);
	printf("C = %.2lf, D = %.2lf\n",c,d);
	printf("A = %.3f, B = %.3f\n",a,b);
	printf("C = %.3lf, D = %.3lf\n",c,d);
	printf("A = %.3E, B = %.3E\n",a,b);
	printf("C = %.3E, D = %.3E\n",c,d);
	printf("A = %.0f, B = %.0f\n",a,b);
	printf("C = %.0lf, D = %.0lf\n",c,d);
 
    return 0;
}
