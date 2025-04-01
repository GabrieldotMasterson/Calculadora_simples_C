#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "pt_BR.utf8");

    printf("================================\n");
    printf("        Calculadora Simples     \n");
    printf("================================\n");

    int opr;
    float n1, n2;
    char cont;
    while (1) {
        printf("\n================================\n");
        printf("Selecione uma operação:\n");
        printf("1. Adição\n");
        printf("2. Subtração\n");
        printf("3. Multiplicação\n");
        printf("4. Divisão\n");
        printf("5. Sair\n");
        printf("================================\n");
        printf("Opção: ");

        if (scanf("%d", &opr) != 1) {
            printf("\nErro: Digite apenas números inteiros!\n");
            while (getchar() != '\n'); // Limpa buffer do teclado
            continue;
        }

        if (opr == 5) {
            printf("\nObrigado por usar a calculadora! Até a próxima.\n");
            break;
        }

        if (opr < 1 || opr > 4) {
            printf("\nErro: Digite uma opção válida!\n");
            continue;
        }

        
        printf("Digite o primeiro número: ");
        if (scanf("%f", &n1) != 1) {
            printf("\nErro: Apenas números são permitidos!\n");
            while (getchar() != '\n');
            continue;
        }

        printf("Digite o segundo número: ");
        if (scanf("%f", &n2) != 1) {
            printf("\nErro: Apenas números são permitidos!\n");
            while (getchar() != '\n');
            continue;
        }

        if (opr == 4 && n2 == 0) {
            printf("\nErro: Divisão por zero não é permitida!\n");
            continue;
        }

        printf("\n================================\n");
        switch (opr) {
            case 1:
                printf("Resultado: %.2f + %.2f = %.2f\n", n1, n2, n1 + n2);
                break;
            case 2:
                printf("Resultado: %.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
                break;
            case 3:
                printf("Resultado: %.2f * %.2f = %.2f\n", n1, n2, n1 * n2);
                break;
            case 4:
                printf("Resultado: %.2f / %.2f = %.2f\n", n1, n2, n1 / n2);
                break;
        }
        printf("================================\n");

        while ((cont != 's') && (cont != 'n') ){
            printf("\nDeseja realizar outra operação? (s/n): ");
            scanf(" %c", &cont);
            
            if (cont == 'n') {
                printf("\nObrigado por usar a calculadora! Até a próxima.\n");
                break;
                
            } else if (cont != 's') {
                printf("\nErro: Digite apenas 's' para continuar ou 'n' para sair!\n");
                
            }
        }
        cont = 'a';
    }

    return 0;
}
