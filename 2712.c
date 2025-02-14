/*beecrowd | 2712
Rodízio Veicular

Por , Silva A M BR Brazil
Timelimit: 1

O rodízio municipal de veículos de São Paulo é uma restrição à circulação de veículos automotores na cidade. Implantado desde 1996 com o propósito de melhorar as condições ambientais reduzindo a carga de poluentes na atmosfera, se consolidou como um instrumento para reduzir congestionamentos nas principais vias da cidade, nos horários de maior movimento. Nas vias delimitadoras não é permitido o tráfego de caminhões e automóveis que estejam dentro da restrição. Há uma escala que determina em quais dias da semana quais veículos não podem circular. Essa escala é regida pelo último dígito da placa do veículo, sendo:

    Segunda-feira, digito final da placa 1 e 2
    Terça-feira, digito final da placa 3 e 4
    Quarta-feira, digito final da placa 5 e 6
    Quinta-feira, digito final da placa 7 e 8
    Sexta-feira, digito final da placa 9 e 0

Os motoristas que são flagrados violando a restrição de circulação são autuados com multa e quatro pontos na carteira de habilitação.
Entrada

A primeira linha de entrada representa a quantidade de testes N (0 <= N < 1000) que deverão ser considerados. As demais entradas são cadeia de caracteres com tamanho máximo S (1 <= S <= 100) que representam cada placa que deverá ser analisada, de tal forma que, cada placa fique em uma única linha de entrada. O formato esperado para uma placa veicular válida em São Paulo é "AAA-9999", tal que A é um caracter válido em [A-Z], e 9 um dígito numérico válido em [0-9].
Saída

O conjunto de valores válidos como saída são: MONDAY, TUESDAY, WEDNESDAY, THURSDAY e FRIDAY, de acordo com a tabela de restrições predefinida, e FAILURE caso a placa não apresente o padrão definido.*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
 
int main() 
{
 
    int n, numPlaca;
	char placa[100];
	
	scanf("%d",&n);
	
	while(n > 0)
	{
		scanf("%s", placa);
		
		if((placa[3] != '-') || (strlen(placa) != 8))
			printf("FAILURE\n");
		else
		{	
			if(isupper(placa[0]) == 0 || isupper(placa[1]) == 0 || isupper(placa[2]) == 0)
				printf("FAILURE\n");
			else
				if(isdigit(placa[4]) == 0 || isdigit(placa[5]) == 0 || isdigit(placa[6]) == 0 || isdigit(placa[6]) == 0)
					printf("FAILURE\n");
				else
				{
					numPlaca = (placa[7] - '0');
					//printf("Caracter: %c\t",placa[7]);
					//printf("NumPlaca: %d\n",numPlaca);
					switch(numPlaca)
					{
						case 1:
						case 2:
							printf("MONDAY\n");
							break;
						case 3:
						case 4:
							printf("TUESDAY\n");
							break;
						case 5:
						case 6:
							printf("WEDNESDAY\n");
							break;
						case 7:
						case 8:
							printf("THURSDAY\n");
							break;
						case 9:
						case 0:
							printf("FRIDAY\n");
							break;
						default:
							printf("FAILURE\n");
							break;
					}
				}
		}
		n--;
		
	}
    return 0;
}
