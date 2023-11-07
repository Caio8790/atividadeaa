#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    float nota;

    printf("digite a nota do aluno: ");
    scanf("%f", &nota);

    if (nota >= 9)
        
    {
        printf("classificaçao exelente\n");
    }

    else if (nota >= 7 && nota < 8.9)
    {
        printf("classificaçao boa\n");
    }

    else if (nota > 5 && nota < 6.9)
    {
        printf("classificaçao razoável\n");
    }
    else if ( nota < 5)
    {

        printf("nota insuficiente");
    }

    return 0;
}
