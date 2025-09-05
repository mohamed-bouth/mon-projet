#include <stdio.h>
int main(){
    char choix;
    printf("choisir le nombre d'element\n");
    scanf("%c", &choix);
    int tableau[choix];
    for(int i = 0 ; i < choix ;i++){
        printf("nomber %d : \n", i+1 );
        scanf("%d", &tableau[i]);
    }
}