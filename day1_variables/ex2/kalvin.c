#include<stdio.h>
int main(){
    int c , k = 0;
    printf("entre degres Celsius\n");
    scanf("%d" , &c);
    k = c + 273.15;
    printf("les resultat: %d", k);
    return 0;
}