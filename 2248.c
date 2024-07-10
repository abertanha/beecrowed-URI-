 /*beecrowd | 2248
Estágio

Por OBI - Olimpíada Brasileira de Informática 2003 BR Brazil
Timelimit: 1

Você conseguiu um estágio para trabalhar como programador na secretaria da sua escola. Como primeira tarefa, Dona Vilma, a coordenadora, solicitou que você aprimore um programa que foi desenvolvido pelo estagiário anterior. Esse programa tem como entrada uma lista de nomes e de médias finais dos alunos de uma turma, e determina o aluno com a maior média na turma. Dona Vilma pretende utilizar o programa para premiar o melhor aluno de cada turma da escola. O programa desenvolvido pelo estagiário anterior encontra-se nas páginas a seguir (programa Pascal na página 5, programa C na página 6, programa C++ na página 7).

Como você pode verificar, o programa na forma atual tem uma imperfeição: no caso de haver alunos empatados com a melhor média na turma, ele imprime apenas o primeiro aluno que aparece na lista.

Dona Vilma deseja que você altere o programa para que ele produza uma lista com todos os alunos da turma que obtiveram a maior média, e não apenas um deles. Você consegue ajudá-la nesta tarefa?
Entrada

A entrada é constituída de vários conjuntos de teste, representando várias turmas. A primeira linha de um conjunto de testes contém um número inteiro N (1 ≤ N ≤ 1000) que indica o total de alunos na turma. As N linhas seguintes contêm, cada uma, um par de números inteiros C (1 ≤ C ≤ 20000) e M (0 ≤ M ≤ 100), indicando respectivamente o código e a média de um aluno. O final da entrada é indicado por uma turma com N = 0.
Saída

Para cada turma da entrada seu programa deve produzir três linhas na saída. A primeira linha deve conter um identificador do conjunto de teste, no formato “Turma n”, onde n é numerado a partir de 1. A segunda linha deve conter os códigos dos alunos que obtiveram a maior média da turma. Os códigos dos alunos devem aparecer na mesma ordem da entrada, e cada um deve ser seguido de um espaço em branco. A terceira linha deve ser deixada em branco. O formato mostrado no exemplo de saída abaixo deve ser seguido rigorosamente.
*/
#include <stdio.h>
 
struct tabela {int id;
			   int media;};

int main() {
 
	struct tabela alunos[1000];
	int numAlu, cont = 1, melhor;
	
	scanf("%d",&numAlu);
	do
	{

		for(int i = 0; i < numAlu; i++)
			scanf("%d %d",&alunos[i].id, &alunos[i].media);
			
		melhor = 0;
		for(int i = 1; i < numAlu; i++)
			if(alunos[i].media > alunos[melhor].media)
				melhor = i;
			
		printf("Turma %d\n", cont++);
		for(int i = 0; i < numAlu; i++)
			if (alunos[i].media == alunos[melhor].media)
				printf("%d ",alunos[i].id);
			
		printf("\n\n");
		scanf("%d",&numAlu);
		
	}while(numAlu != 0);
    return 0;
}
