/*O EBCDIC (Extended Binary Coded Decimal Interchange Code) é um esquema de codificação de caracteres de 8 bits desenvolvido pela IBM nos anos 60. O EBCDIC tem origem nos esquemas de codificação dos cartões perfurados, e era utilizado nos mainframes da empresa. Apesar de utilizar um intervalo maior de codificação, o esquema é menos amigável ao programador do que o esquema ASCII de 7 bits, uma vez que as letras do alfabeto não ficam em posições contíguas.

A tabela a seguir apresenta a codificação EBCDIC. Células em branco representam valores que não estão associados a um caractere em particular, e dois ou mais caracteres maiúsculos indicam caracteres não imprimíveis. O caractere BLANK é o espaço em branco.

Escreva um programa que receba um texto em codificação EBCDIC e o traduza para a codificação ASCII.
Entrada

A entrada consiste em vários casos de teste. Cada caso de teste é representado por uma única linha, que contém os valores de cada caractere EBCDIC, em números octais de três dígitos, separados por um espaço em branco.

Pode-se considerar os códigos que aparecem nas mensagens correspondem apenas à caracteres alfanuméricos e espaços em branco.
Saida

Para cada linha da entrada a saída deve ser a mensagem decodificada para o padrão ASCII, seguida de uma quebra de linha.*/

#include <stdio.h>

static const short int e2a[256] = {
          0,  1,  2,  3,156,  9,134,127,151,141,142, 11, 12, 13, 14, 15,
         16, 17, 18, 19,157,133,  8,135, 24, 25,146,143, 28, 29, 30, 31,
        128,129,130,131,132, 10, 23, 27,136,137,138,139,140,  5,  6,  7,
        144,145, 22,147,148,149,150,  4,152,153,154,155, 20, 21,158, 26,
         32,160,161,162,163,164,165,166,167,168, 91, 46, 60, 40, 43, 33,
         38,169,170,171,172,173,174,175,176,177, 93, 36, 42, 41, 59, 94,
         45, 47,178,179,180,181,182,183,184,185,124, 44, 37, 95, 62, 63,
        186,187,188,189,190,191,192,193,194, 96, 58, 35, 64, 39, 61, 34,
        195, 97, 98, 99,100,101,102,103,104,105,196,197,198,199,200,201,
        202,106,107,108,109,110,111,112,113,114,203,204,205,206,207,208,
        209,126,115,116,117,118,119,120,121,122,210,211,212,213,214,215,
        216,217,218,219,220,221,222,223,224,225,226,227,228,229,230,231,
        123, 65, 66, 67, 68, 69, 70, 71, 72, 73,232,233,234,235,236,237,
        125, 74, 75, 76, 77, 78, 79, 80, 81, 82,238,239,240,241,242,243,
         92,159, 83, 84, 85, 86, 87, 88, 89, 90,244,245,246,247,248,249,
         48, 49, 50, 51, 52, 53, 54, 55, 56, 57,250,251,252,253,254,255};

short int ebcdicToAscii (short int);

int main()
{
	
	short int ebcdic_value;
	int next_char;

    while (scanf("%ho", &ebcdic_value) != EOF) 
	{
        printf("%c", ebcdicToAscii(ebcdic_value));
        next_char = getchar();
        if (next_char == '\n') 
		{
            printf("\n");
        }
    }
    printf("\n");

    return 0;
}
short int ebcdicToAscii (short int pointer)
{
    pointer = e2a[(pointer)];
	
	return pointer;
}
