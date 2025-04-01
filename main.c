#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");

    printf("===============================");
    printf("\n   Calculadora Simples");

    int opr;
    int n1;
    int n2;
    while (1)
    {
        printf("\n===============================");
        printf("\nSelecione uma operação:\n1. Adição\n2. Subtração\n3. Multiplicação\n4. Divisão\n5. Sair\nOpcao:\n");

        
        scanf("%d", &opr);
        if (opr == 5) {
            printf("\nObrigado por usar a calculadora! Até a próxima.");
            break;
        }else{
            if ((opr < 0) || (opr > 5)){
                printf("\ndigite um valor válido");
                continue;
            }
        }

        printf("Digite o primeiro número: ");
        if (scanf("%d", &n1) != 1) { 
            printf("Erro: Apenas números inteiros são permitidos\n");
            continue;;
        }
        printf("Digite o segundo número: ");
        if (scanf("%d", &n2) != 1) { 
            printf("Erro: Apenas números inteiros são permitidos\n");
            continue;;
        }
        if ((n2 == 0 || n1 == 0) && opr == 4) {
            printf("\nErro: Divisão por zero não é permitida.");
            continue;
        }

        switch (opr) {
            case 1: 
                printf("\nResultado: %d + %d = %d",n1, n2, n1 + n2);
                break;
            case 2: 
                printf("\nResultado: %d - %d = %d",n1, n2, n1 - n2);
                break;
            case 3: 
                printf("\nResultado: %d * %d = %d",n1, n2, n1 * n2);
                break;
            case 4: 
                printf("\nResultado: %d / %d = %f",n1, n2, (float)n1 / n2);
                break;
        }

        printf("\nDeseja realizar outra operação? (s/n): ");
        char cont;
        if (scanf(" %c", &cont) != 1) { 
            printf("Erro: use apenas s/n\n");
            break;
        }
        if (cont == 'n'){
            printf("\nObrigado por usar a calculadora! Até a próxima.");
            break;
        }else{
            if (cont != 's'){
                printf("Erro: use apenas s/n\n");
                break;
            }
        }


    }
}
    