#include <stdio.h>
int main(){
    int number;
    int somme = 1 ;
    printf("entrez un number:\n");
    scanf("%d",&number);
    
    for(int i = 2 ; i <= number ; i++){
        somme = somme + i;
    }
    printf("%d", somme);
}