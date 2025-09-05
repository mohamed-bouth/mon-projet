#include <stdio.h>
int main(){
    int nomber , somme = 0;
    printf("entrez un number\n");
    scanf("%d", &nomber);
    for(int i = 1 ; i <= nomber ; i++){
        somme = somme + i;
        printf("+ %d ", i );
    }
    printf("= %d" , somme);
}