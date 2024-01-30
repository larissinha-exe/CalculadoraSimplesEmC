#include <stdio.h>
#include <stdlib.h>

int main()
{
    char o;
    printf("Por favor, escolha a operacao desejada (+,-,*,/): ");
    scanf("%c", &o);

    if(o == '+')
    {
        float a1, a2, a3;
        printf("Numero inicial: ");
        scanf("%f", &a1);
        printf("Quantidade somada: ");
        scanf("%f", &a2);

        a3 = a1 + a2;
        printf("Resultado: %f\n", a3);
    }
    else if(o == '-')
    {
        float s1, s2, s3;
        printf("Numero inicial: ");
        scanf("%f", &s1);
        printf("Quantidade subtraida: ");
        scanf("%f", &s2);

        s3 = s1 - s2;
        printf("Resultado: %f\n", s3);
    }
    else if(o == '*')
    {
        float m1, m2, m3;
        printf("Multiplicando: ");
        scanf("%f", &m1);
        printf("Multiplicador: ");
        scanf("%f", &m2);

        m3 = m1 * m2;
        printf("Resultado: %f\n", m3);
    }
    else if(o == '/')
    {
        float d1, d2, d3;
        printf("Dividendo: ");
        scanf("%f", &d1);
        printf("Divisor: ");
        scanf("%f", &d2);

        d3 = d1 / d2;
        printf("Resultado: %f\n", d3);
    }
    else
    {
    printf("Não é uma operação!");
    }
    return 0;
}