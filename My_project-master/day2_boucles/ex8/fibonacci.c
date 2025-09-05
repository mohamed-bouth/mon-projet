#include <stdio.h>

int main() {
    int n, i;
    int a = 0, b = 1, c;

    printf("Combien de termes de Fibonacci voulez-vous ? ");
    scanf("%d", &n);

    printf("Suite de Fibonacci :\n");

    if (n >= 1) printf("%d ", a);
    if (n >= 2) printf("%d ", b);

    for (i = 2; i < n; i++) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }

    printf("\n");
    return 0;
}