#include <stdio.h>
int main(){
    int number , somme ;
    printf("entrez un number:\n");
    scanf("%d", &number);
    printf("........\n");
    for(int i = 1 ; i < 11 ; i++){
        somme = number * i;
        printf("%d x %d = %d\n", number , i , somme);
    }
}