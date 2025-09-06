#include <stdio.h>
int main(){
    int choix ;
    printf("choisir le nombre d'element\n");
    scanf("%d", &choix);
    int tableau[choix];
    for(int i = 0 ; i<choix ; i++){
        printf("nomber %d\n", i+1);
        scanf("%d", &tableau[i]);
    }
    float somme = 0;
    float moyenne;
    for(int i = 0 ; i < choix ; i++){
        somme =  somme + tableau[i];
    }
    moyenne = somme / choix;
    printf("la moyenne note : %.2f" , moyenne);
    return 0;
}