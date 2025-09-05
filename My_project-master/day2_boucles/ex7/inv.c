#include <stdio.h>
int main(){
    int number, inverse , somme;
    printf("entrez un number:\n");
    scanf("%d", &number);
    inverse = 0;
    while (number != 0)
    {
        somme = number % 10;
        inverse = inverse * 10+ somme;
        number = number / 10;
    }
    printf(".......\n");
    printf("%d",inverse);
}