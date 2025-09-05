#include <stdio.h>
int main(){
    int number;
    printf("entrez un number:\n");
    scanf("%d", &number);
    printf(".........\n");
    for(int i = 1 ; i <= number ; i++){
        int somme;
        somme = 2*i-1;
        printf("%d\n", somme);
    }
    return 0;
}