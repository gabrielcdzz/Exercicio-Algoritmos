#include <stdio.h>

float calcularMedia(float n1, float n2, float n3) {
    return (n1 + n2 + n3) / 3;
}

int main() {

    char nomes[5][50];
    float notas1[5], notas2[5], notas3[5], medias[5];
    int i;
    int qtd = 5;

    for (i = 0; i < qtd; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
        scanf("%s", nomes[i]);

        printf("Digite as 3 notas de %s: ", nomes[i]);
        scanf("%f %f %f", &notas1[i], &notas2[i], &notas3[i]);

        medias[i] = calcularMedia(notas1[i], notas2[i], notas3[i]);
    }

    printf("\nALUNO           N1    N2    N3    MEDIA  SITUACAO\n");

    for (i = 0; i < qtd; i++) {
        if (medias[i] >= 7) {
            printf("%-15s %.1f  %.1f  %.1f  %.1f   Aprovado\n", nomes[i], notas1[i], notas2[i], notas3[i], medias[i]);
        } else {
            printf("%-15s %.1f  %.1f  %.1f  %.1f   Reprovado\n", nomes[i], notas1[i], notas2[i], notas3[i], medias[i]);
        }
    }

    int maior = 0;
    for (i = 1; i < qtd; i++) {
        if (medias[i] > medias[maior]) {
            maior = i;
        }
    }

    printf("\nAluno com maior media: %s (%.1f)\n", nomes[maior], medias[maior]);

    return 0;
}
