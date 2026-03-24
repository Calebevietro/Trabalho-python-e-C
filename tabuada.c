#include <stdio.h>
 
int main() {
    int numero, i, opcao;
 
    do {
        printf("Digite um numero para ver a tabuada: ");
        scanf("%d", &numero);
 
        printf("\n=== Tabuada do %d ===\n", numero);
        for (i = 1; i <= 10; i++)
            printf("%d x %2d = %d\n", numero, i, numero * i);
 
        printf("\nDeseja ver outra tabuada? (1 = Sim / 0 = Nao): ");
        scanf("%d", &opcao);
        printf("\n");
 
    } while (opcao == 1);
 
    printf("Encerrando o programa. Ate logo!\n");
    return 0;
}