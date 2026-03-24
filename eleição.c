#include <stdio.h>
 
int main() {
    int n, i, voto;
    int votos[3] = {0, 0, 0};
 
    printf("Quantas pessoas vao votar? ");
    scanf("%d", &n);
 
    for (i = 0; i < n; i++) {
        do {
            printf("\nEleitor %d, vote (1, 2 ou 3): ", i + 1);
            scanf("%d", &voto);
            if (voto < 1 || voto > 3)
                printf("Voto invalido! Digite 1, 2 ou 3.\n");
        } while (voto < 1 || voto > 3);
 
        votos[voto - 1]++;
    }
 
    printf("\n===== RESULTADO DA ELEICAO =====\n");
    for (i = 0; i < 3; i++)
        printf("Candidato %d: %d voto(s)\n", i + 1, votos[i]);
 
    /* Determina vencedor */
    int maior = votos[0], empate = 0, vencedor = 1;
    for (i = 1; i < 3; i++) {
        if (votos[i] > maior) {
            maior    = votos[i];
            vencedor = i + 1;
            empate   = 0;
        } else if (votos[i] == maior) {
            empate = 1;
        }
    }
 
    if (empate)
        printf("\nHouve empate!\n");
    else
        printf("\nVencedor: Candidato %d!\n", vencedor);
 
    return 0;
}