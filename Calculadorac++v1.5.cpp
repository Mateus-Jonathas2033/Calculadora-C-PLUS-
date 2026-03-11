#include <stdio.h>
#include <locale.h>
#include <cmath>


void introducao(){
    printf("Iniciando a calculadora...\n");
    printf("\nInstruções: Em soma, subtração, e quadrado, devem ser utilizados apenas números inteiros. \nEm divisão, potenciação, multiplicação e raiz, podem ser utilizados números reais seguidos por vírgula(Exemplo: 145,5).\n");
    printf("\n1-Soma 2-Subtração 3-Multiplicação 4-Divisão 5-Quadrado 6-Raiz 7-Potenciação 8-Limpar 9-Encerrar\n");}

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int numero, x, y;
    introducao();
    while (numero != 9)
    {
        printf("____________________________________________________________________________________________________________");
        printf("\nEscolha uma operação lógica: ");
        scanf("%d", &numero);

        switch (numero){
        case 1:
        {
            printf("\n(SOMA)Digite o primeiro número: ");
            scanf("%d", &x);
            printf("(SOMA)Digite o segundo número: ");
            scanf("%d", &y);

            int Soma = x + y;
            printf("\n(+)Resultado = %d\n", Soma);
        }
        break;

        case 2:
        {
            printf("\n(SUBTRAÇÃO)Digite o primeiro número: ");
            scanf("%d", &x);
            printf("(SUBTRAÇÃO)Digite o segundo número: ");
            scanf("%d", &y);

            int Sub = x - y;
            printf("\n(-)Resultado = %d\n", Sub);
        }
        break;

        case 5:
        {
            int x;
            printf("\n(QUADRADO)Digite o número: ");
            scanf("%d", &x);

            int Quad = (x)*x;
            printf("\n(²)Resultado = %d\n", Quad);
        }
        break;

        case 8:
        {
            system("cls");
            introducao();
        }
        break;
        }

        switch (numero){
        case 6:
        {
            float x;
            printf("\n(RAIZ)Digite o número: ");
            scanf("%f", &x);

            float Raiz = pow(x, 0.5);
            printf("\n(R)Resultado = %.2f\n", Raiz);
        }
        break;

        case 7:
        {
            float x, y;
            printf("\n(POTÊNCIA)Digite o número: ");
            scanf("%f", &x);
            printf("(POTÊNCIA)Digite qual potência deseja: ");
            scanf("%f", &y);

            float Potencia = pow(x, y);
            printf("\n(P)Resultado = %.1f\n", Potencia);
        }
        break;

        case 4:
        {
            float x, y;
            printf("\n(DIVISÃO)Digite o primeiro número: ");
            scanf("%f", &x);
            printf("(DIVISÃO)Digite o segundo número: ");
            scanf("%f", &y);

            float Div = x / y;
            printf("\n(/)Resultado = %.5f\n", Div);
        }
        break;

        case 3:
        {
            float x, y;
            printf("\n(MULTIPLICAÇÃO)Digite o primeiro número: ");
            scanf("%f", &x);
            printf("(MULTIPLICAÇÃO)Digite o segundo número: ");
            scanf("%f", &y);

            float Multi = x * y;
            printf("\n(*)Resultado = %.1f\n", Multi);
        }
        break;

        case 9:
        {
            printf("\nEncerrando a calculadora...\n");
            return 0;
        }
        }
    }
}
