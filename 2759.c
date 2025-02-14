/* beecrowd | 2759
Entrada e Saída de Carácter

Por Roberto A. Costa Jr, UNIFEI BR Brazil
Timelimit: 1

O seu professor gostaria de fazer um programa com as seguintes características:

    Crie 3 variáveis para armazenar um único carácter;
    Leia um valor carácter para a primeira variável;
    Leia um valor carácter para a segunda variável;
    Leia um valor carácter para a terceira variável;
    Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado na primeira variável lida no passo 2, uma virgula, um espaço em branco, a letra B, um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado na segunda variável lida no passo 3, a letra C, um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado na terceira variável lida no passo 4. Não esqueça de pular linha;
    Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado na primeira variável lida no passo 3, uma virgula, um espaço em branco, a letra B, um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado na segunda variável lida no passo 4, a letra C, um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado na terceira variável lida no passo 2. Não esqueça de pular linha;
    Imprima a letra A, um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado na primeira variável lida no passo 4, uma virgula, um espaço em branco, a letra B, um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado na segunda variável lida no passo 2, a letra C, um espaço em branco, o sinal de igual, um espaço em branco, o carácter armazenado na terceira variável lida no passo 3. Não esqueça de pular linha.

Entrada

A entrada consiste vários arquivos de teste. Em cada arquivo de teste tem três linhas. Na primeira linha tem uma variável A que armazena um valor carácter. Na segunda linha tem uma variável B que armazena um valor carácter. Na terceira linha tem uma variável C que armazena um valor carácter. Conforme mostrado no exemplo de entrada a seguir.
Saída

Para cada arquivo da entrada, terá um arquivo de saída. O arquivo de saída tem três linhas da forma descrita nos itens 5, 6 e 7. Conforme mostra o exemplo de saída a seguir.
*/

#include <stdio.h>
 
int main() {
 
    char A, B, C;
    
    scanf("%c",&A);
    scanf(" %c",&B);
    scanf("  %c",&C);
    
    printf("A = %c, B = %c, C = %c\n",A,B,C);
    printf("A = %c, B = %c, C = %c\n",B,C,A);
    printf("A = %c, B = %c, C = %c\n",C,A,B);
    
    return 0;
}
