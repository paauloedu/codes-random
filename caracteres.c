/*
5) Escreva um programa que inverta os caracteres de um string.

IMPORTANTE:

a) Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código;

b) Evite usar funções prontas, como, por exemplo, reverse;
*/
#include <stdio.h>

void inverterCaracteres(char *str)
{
    int comprimento = 0;
    while (str[comprimento] != '\0')
    {
        comprimento++;
    }

    for (int i = 0; i < comprimento / 2; i++)
    {
        char temp = str[i];
        str[i] = str[comprimento - i - 1];
        str[comprimento - i - 1] = temp;
    }
}

int main()
{
    char str[] = "Essa string pode ser informada através de qualquer entrada de sua preferência ou pode ser previamente definida no código";

    inverterCaracteres(str);

    printf("String invertida: %s\n", str);

    return 0;
}
