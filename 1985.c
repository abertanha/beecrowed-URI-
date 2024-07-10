/*beecrowd | 1985
MacPRONALTS

Por Victor Jatobá, UNIME BR Brazil
Timelimit: 1

O MacPRONALTS está com uma super promoção, exclusivo para os competidores da primeira Seletiva do MaratonaTEC. Só que teve um problema, todos os maratonistas foram tentar comprar ao mesmo tempo, com isso gerou uma fila muito grande. O pior é que a moça do caixa estava sem calculadora ou um programa para ajudá-la a calcular com maior agilidade, eis que surge você para fazer um programa para ajudar a coitada e aumentar a renda do MacPRONALTS. Segue o cardápio do dia contendo o número do produto e seu respectivo valor.

1001 | R$ 1.50

1002 | R$ 2.50

1003 | R$ 3.50

1004 | R$ 4.50

1005 | R$ 5.50
Entrada

A primeira entrada informada é a quantidade de produtos comprados (1 <= p <= 5). Para cada produto segue a quantidade (1 <= q <= 500) que o consumidor comprou.

Obs.: não poderão ser informados números de produtos repetidos.
Saída

Você deve imprimir o valor da compra com duas casas decimais.*/

#include <stdio.h>
 
struct pedido {int id;
			   int quant;};

int main ()
{
	struct pedido caixa; 
	int n, aux;
	float soma = 0;
	
	scanf("%d",&n);
	
	while(n > 0)
	{
		scanf("%d %d",&caixa.id,&caixa.quant);
		
		aux = caixa.id%10;
		
		switch(aux)
		{
			case 1:soma += (caixa.quant * 1.50);
			       break;
			case 2:soma += (caixa.quant * 2.50);
				   break;
			case 3:soma += (caixa.quant * 3.50);
				   break;
			case 4:soma += (caixa.quant * 4.50);
			       break;
			case 5:soma += (caixa.quant * 5.50);
				   break;
		}
		n--;
	}
	printf("%.2f\n",soma);
    return 0;
}
