/* beecrowd | 2754
Saída 8

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor de programação gostaria que você fizesse um programa com as seguintes características:

    Crie duas variáveis reais de dupla precisão;
    Atribua a primeira o valor 234.345 e a segunda o valor 45.698;
    Imprima as duas variáveis com seis casas decimais;
    Imprima as duas variáveis sem nenhuma casa decimal;
    Imprima as duas variáveis com uma casa decimal;
    Imprima as duas variáveis com duas casas decimais;
    Imprima as duas variáveis com três casas decimais;
    Imprima as duas variáveis com notação cientifica com 'e';
    Imprima as duas variáveis com notação cientifica com 'E';
    Imprima as duas variáveis com a representação mais curta, com 'e' ou 'E' ou sem;
    Imprima as duas variáveis com a representação mais curta, com 'e' ou 'E' ou sem;

Para imprimir, separe os valores com um espaço em branco, um traço (-) e um espaço em branco.
Entrada

Não há.
Saída

O resultado de seu programa deve ser escrito conforme o exemplo da saída.*/

#include <stdio.h>
 
int main() {
 
    double a = 234.345, b = 45.698;
	
	printf("%.6lf - %.6lf\n", a, b);
	printf("%.0lf - %.0lf\n", a, b);
	printf("%.1lf - %.1lf\n", a, b);
	printf("%.2lf - %.2lf\n", a, b);
	printf("%.3lf - %.3lf\n", a, b);
	printf("%e - %e\n", a, b);
	printf("%E - %E\n", a, b);
	printf("%.3lf - %.3lf\n", a, b);
	printf("%.3lf - %.3lf\n", a, b);
	
    return 0;
}
