#include <stdio.h>
 
int main() {
    double num, soma = 0;
    int total = 0, positivos = 0, negativos = 0;
 
    printf("=== Estatisticas de Numeros ===\n");
    printf("Digite numeros (0 para encerrar):\n\n");
 
    do {
        printf("Digite um numero: ");
        scanf("%lf", &num);
 
        if (num == 0) break;
 
        total++;
        soma += num;
 
        if (num > 0)
            positivos++;
        else
            negativos++;
 
    } while (1);
 
    printf("\n=== Resultados ===\n");
    printf("Quantidade digitada: %d\n", total);
    printf("Positivos:           %d\n", positivos);
    printf("Negativos:           %d\n", negativos);
    printf("Soma total:          %.2f\n", soma);
 
    return 0;
}
