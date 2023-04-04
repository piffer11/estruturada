float celsiuspfahrenheit(float celsius) {
    return (9 * celsius / 5) + 32;
}

float fahrenheitpcelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}

float celsiuspkelvin(float celsius) {
    return celsius + 273.15;
}

float kelvinpcelsius(float kelvin) {
    return kelvin - 273.15;
}

float celsiuspreaumur(float celsius) {
    return celsius * 4 / 5;
}

float reaumurpcelsius(float reaumur) {
    return reaumur * 5 / 4;
}

float kelvinprankine(float kelvin) {
    return kelvin * 1.8;
}

float rankinepkelvin(float rankine) {
    return rankine / 1.8;
}

int main() {
    int opcao;
    float temperatura;

    printf("Escolha a conversao de temperatura que deseja realizar:\n");
    printf("1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\n3 - Celsius para Kelvin\n4 - Kelvin para Celsius\n5 - Celsius para Reaumur\n6 - Reaumur para Celsius\n7 - Kelvin para Rankine\n8 - Rankine para Kelvin\n" );
    scanf("%d", &opcao);

    printf("Digite a temperatura a ser convertida: ");
    scanf("%f", &temperatura);

    switch (opcao) {
        case 1:
            printf("%.2fc = %.2ff\n", temperatura, celsiuspfahrenheit(temperatura));
            break;
        case 2:
            printf("%.2ff = %.2fc\n", temperatura, fahrenheitpcelsius(temperatura));
            break;
        case 3:
            printf("%.2fc = %.2fk\n", temperatura, celsiuspkelvin(temperatura));
            break;
        case 4:
            printf("%.2fk = %.2fc\n", temperatura, kelvinpcelsius(temperatura));
            break;
        case 5:
            printf("%.2fc = %.2fre\n", temperatura, celsiuspreaumur(temperatura));
            break;
        case 6:
            printf("%.2fre = %.2fc\n", temperatura, reaumurpcelsius(temperatura));
            break;
        case 7:
            printf("%.2fk = %.2fr\n", temperatura, kelvinprankine(temperatura));
            break;
        case 8:
            printf("%.2fr= %.2fk\n", temperatura, rankinepkelvin(temperatura));
            break;
        default:
            printf("Escolha indisponivel.\n");
    }

return 0;
}
