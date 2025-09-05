#include <stdio.h>

int main() {
    int decimal;
    printf("Entrez un nombre decimal: ");
    scanf("%d", &decimal);

    printf("Hexadécimal: %x\n", decimal);

    printf("Binaire: ");
    if (decimal == 0) {
        printf("0");
    } else {
        int binary[32];
        int i = 0;
        int temp = decimal;
        while (temp > 0) {
            binary[i] = temp % 2;
            temp = temp / 2;
            i++;
        }
        
        for (int j = i - 1; j >= 0; j--) {
            printf("%d", binary[j]);
        }
    }

    printf("\n");
    return 0;
}
