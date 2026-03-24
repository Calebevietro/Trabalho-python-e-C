#include <stdio.h>
 
int main() {
    double preco, total = 0.0, preco_medio;
    int quantidade, total_itens = 0, num_produtos = 0;
 
    printf("=== Sistema de Compras ===\n");
    printf("Digite 0 no preco para finalizar.\n\n");
 
    while (1) {
        printf("Preco do produto (0 para sair): R$ ");
        scanf("%lf", &preco);
 
        if (preco == 0)
            break;
 
        printf("Quantidade: ");
        scanf("%d", &quantidade);
 
        double subtotal = preco * quantidade;
        total += subtotal;
        total_itens += quantidade;
        num_produtos++;
 
        printf("  Subtotal: R$ %.2f\n\n", subtotal);
    }
 
    printf("\n--- Resumo da Compra ---\n");
    if (num_produtos > 0) {
        preco_medio = total / num_produtos;
        printf("Valor total da compra    : R$ %.2f\n", total);
        printf("Quantidade total de itens: %d\n", total_itens);
        printf("Preco medio dos produtos : R$ %.2f\n", preco_medio);
    } else {
        printf("Nenhum produto registrado.\n");
    }
 
    return 0;
}
