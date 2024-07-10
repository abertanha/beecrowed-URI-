/* beecrowd | 2763
Entrada e Saída CPF

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor gostaria de fazer um programa com as seguintes características:

    Leia os dados de um CPF no formato XXX.YYY.ZZZ-DD;
    Imprima os quatro números, sendo um valor por linha.

Entrada

A entrada consiste vários arquivos de teste. Em cada arquivo de teste tem uma linha. A linha tem o seguinte formato XXX.YYY.ZZZ-DD, onde XXX, YYY, ZZZ, DD são números inteiros. Conforme mostrado no exemplo de entrada a seguir.
Saída

Para cada arquivo da entrada, terá um arquivo de saída. O arquivo de saída tem quatro linhas com um número inteiro em cada uma delas, conforme foi entrado. Conforme mostra o exemplo de saída a seguir.
*/

#include <stdio.h>
 
int main() {
 
    int x,y,z,d;
	
	scanf("%3d.%3d.%3d-%2d",&x,&y,&z,&d);
	
	printf("%03d\n",x);
	printf("%03d\n",y);
	printf("%03d\n",z);
	printf("%02d\n",d);
	
    return 0;
}
