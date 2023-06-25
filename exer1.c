#include <stdio.h>

int main() {
    float math, physics, chemistry;
    printf("Digite a nota de Matematica: ");
    scanf("%f", &math);
    printf("Digite a nota de Fisica: ");
    scanf("%f", &physics);
    printf("Digite a nota de Quimica: ");
    scanf("%f", &chemistry);

    float average = (math + physics + chemistry) / 3.0;

    FILE *file = fopen("notas.txt", "w");
    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fprintf(file, "Matematica: %.2f\n", math);
    fprintf(file, "Fisica: %.2f\n", physics);
    fprintf(file, "Quimica: %.2f\n", chemistry);
    fprintf(file, "Media: %.2f\n", average);

    fclose(file);

    printf("Notas salvas\n");

    return 0;
}
