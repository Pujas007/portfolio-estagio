#include <stdio.h>

int main()
{

    int operacao, tipo;
    long num = 0;
    float num2 = 0.0;

    printf("Digite 1 para calculos em inteireos.\n ");
    printf("Digite 2 para calculos em flutuantes.\n ");
    scanf("%d", &tipo);

    printf("Digite um número correspondente a operação:\n");
    printf("1-Soma\n");
    printf("2-Subtracao\n");
    printf("3-Multiplicacao\n");
    printf("4-Divisao\n");
    scanf("%d", &operacao);

    switch (tipo)
    {
     case 1:
     {

        long resultado;

        printf("Digite o primeiro numero inteiro:\n");
        scanf("%ld", &num);

        while (1)
        {

            printf("Digite os outros numeoros(digite 0 para ecerrar):\n");
            scanf("%ld", &resultado);
            if (resultado == 0)
                break;

            switch (operacao)
            {
            case 1:
                num += resultado;
                break;
            case 2:
                num -= resultado;
                break;
            case 3:
                num *= resultado;
                break;
            case 4:
                if (resultado != 0)
                    num /= resultado;
                else
                    printf("Divisao por zero invalida.\n");
                break;

            default:
                printf("Valor invalido.\n");
            }
        }
        printf("Resultado final: %ld\n", num);
        break;
     }
     case 2:
     {

        float resultado2;

        printf("Digite o primeiro numero flutuante:\n");
        scanf("%f", &num2);

        while (1)
        {

            printf("Digite os outros numeros(digite 0 para encerrar):\n");
            scanf("%f", &resultado2);
            if (resultado2 == 0)
                break;
            switch (operacao)
            {
            case 1:
                num2 += resultado2;
                break;
            case 2:
                num2 -= resultado2;
                break;
            case 3:
                num2 *= resultado2;
                break;
            case 4:
                if (resultado2 != 0)
                    num2 /= resultado2;
                else
                    printf("Divisao por zero invalida.\n");
                break;

            default:
                printf("Valor invalido.\n");
            }
        }
        printf("Resultado final: %f\n", num2);
        break;
     }
     default:
        printf("Tipo invalido.\n");
        break;
    }

    return 0;
}