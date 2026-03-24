#include <stdio.h>
 
int main() {
    int n, i;
    int aprovados = 0, recuperacao = 0, reprovados = 0;
    double nota, soma = 0.0, media;
 
    printf("Quantos alunos existem na turma? ");
    scanf("%d", &n);
 
    for (i = 1; i <= n; i++) {
        do {
            printf("Nota do aluno %d: ", i);
            scanf("%lf", &nota);
            if (nota < 0 || nota > 10)
                printf("Nota invalida! Digite um valor entre 0 e 10.\n");
        } while (nota < 0 || nota > 10);
 
        soma += nota;
 
        if (nota >= 7.0)
            aprovados++;
        else if (nota >= 5.0)
            recuperacao++;
        else
            reprovados++;
    }
 
    media = soma / n;
 
    printf("\n===== Resultado da Turma =====\n");
    printf("Media da turma:        %.2f\n", media);
    printf("Aprovados  (>= 7):     %d aluno(s)\n", aprovados);
    printf("Recuperacao (5-6.9):   %d aluno(s)\n", recuperacao);
    printf("Reprovados  (< 5):     %d aluno(s)\n", reprovados);
 
    return 0;
}