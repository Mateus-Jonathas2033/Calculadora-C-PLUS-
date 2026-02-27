#include <stdio.h>

int main() {
    int numero, x, y;
    printf("Iniciando a calculadora...\n");
    while (numero != 0){
    printf("\n 1-Soma 2-Subtracao 3-Multiplicacao 4-Divisao 0-Encerrar\n");
    printf("\nEscolha uma operacao logica: ");
    scanf("%d",&numero);

    switch(numero){
        case 1:
        {
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &x);
            printf("Agora digite o segundo numero: ");
            scanf("%d", &y);

            int Soma = x+y;
            printf("\nSoma: %d\n", Soma);
        }
        break;

        case 2:
        {
            printf("\nDigite o primeiro numero: ");
            scanf("%d", &x);
            printf("Agora digite o segundo numero: ");
            scanf("%d", &y);

            int Sub = x-y;
            printf("\nSubtracao: %d\n", Sub);
        }
        break;
        }

        switch(numero){
            case 4:
        {
            float x, y;
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &x);
            printf("Agora digite o segundo numero: ");
            scanf("%f", &y);

            float Div = x/y;
            printf("\nDivisao: %.5f\n", Div);
            }
            break;

            case 3:
        {
            float x, y;
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &x);
            printf("Agora digite o segundo numero: ");
            scanf("%f", &y);

            float Multi = x*y;
            printf("\nMultiplicacao: %.1f\n", Multi);
            break;
        }

            case 0:
        {
            printf("\nEncerrando a calculadora...");
            return(0);
        }

        break;
        }
    }
}
