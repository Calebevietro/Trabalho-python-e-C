#include <stdio.h>
 
int main() {
    int secreto = 37;
    int chute, tentativas = 0;
 
    printf("=== Jogo de Adivinhacao ===\n");
    printf("Tente adivinhar o numero secreto!\n\n");
 
    do {
        printf("Digite seu chute: ");
        scanf("%d", &chute);
        tentativas++;
 
        if (chute > secreto)
            printf("Muito alto! Tente novamente.\n\n");
        else if (chute < secreto)
            printf("Muito baixo! Tente novamente.\n\n");
        else
            printf("\nParabens! Voce acertou em %d tentativa(s)!\n", tentativas);
 
    } while (chute != secreto);
 
    return 0;
}