#include <stdio.h>

int main() {
	
    char sexo, olhos, cabelos;
    int idade;
    float salario, porcentagem = 0, totalhabitantes = 0, mulherescastanhas = 0;

    while (idade != -1) {
        printf("Informe o sexo (m ou f): ");
        scanf(" %c", &sexo);
        printf("Informe a cor dos olhos (a, v, c ou p): ");
        scanf(" %c", &olhos);
        printf("Informe a cor dos cabelos (l, c, p ou r): ");
        scanf(" %c", &cabelos);
        printf("Informe a idade (entre 10 e 100 anos): ");
        scanf("%d", &idade);
        printf("Informe o salario: ");
        scanf("%f", &salario);

        if (idade == -1) 
		break; 

        if ((sexo == 'm' || sexo == 'f') &&
            (olhos == 'a' || olhos == 'v' || olhos == 'c' || olhos == 'p') &&
            (cabelos == 'l' || cabelos == 'c' || cabelos == 'p' || cabelos == 'r') &&
            (idade >= 10 && idade <= 100) &&
            salario >= 0) {

            totalhabitantes++; 

            
            if (sexo == 'f' && olhos == 'c' && cabelos == 'c' && idade >= 18 && idade <= 35) {
                mulherescastanhas++;
            }
        }
    }

    if (totalhabitantes > 0) { 
        porcentagem = (mulherescastanhas / totalhabitantes) * 100;
    }

    printf("Porcentagem de mulheres castanhas entre 18 e 35 anos: %.2f%%\n", porcentagem);

    return 0;
}
