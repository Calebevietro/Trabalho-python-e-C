#include <stdio.h>
 
int main() {
    double valor_inicial, taxa, saldo;
    int anos;
 
    printf("Digite o valor inicial (R$): ");
    scanf("%lf", &valor_inicial);
 
    printf("Digite a taxa de juros anual (%%): ");
    scanf("%lf", &taxa);
 
    printf("Digite o numero de anos: ");
    scanf("%d", &anos);
 
    printf("\n--- Simulacao de Crescimento ---\n");
 
    saldo = valor_inicial;
    for (int ano = 1; ano <= anos; ano++) {
        saldo = saldo * (1 + taxa / 100.0);
        printf("Ano %d: R$ %.2f\n", ano, saldo);
    }
 
    printf("\nValor final apos %d anos: R$ %.2f\n", anos, saldo);
 
    return 0;
}