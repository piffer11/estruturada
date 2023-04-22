#include <stdio.h>

main() {
    int n, i;
    int fib0 = 0, fib1 = 1, fibn;

    printf("Digite o valor de n: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("O enesimo termo da sequencia de Fibonacci e: %d\n", fib0);
    } else if (n == 1) {
        printf("O enesimo termo da sequencia de Fibonacci e: %d\n", fib1);
    } else {
        for (i = 2; i <= n; i++) {
            fibn = fib0 + fib1;
            fib0 = fib1;
            fib1 = fibn;
        }
        printf("O enesimo termo da sequencia de Fibonacci eh: %d\n", fibn);
    }
}
