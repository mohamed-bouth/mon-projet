#include <stdio.h>
int main(){
    int choix;
    printf("choisir le nombre d'element\n");
    scanf("%d", &choix);
    int tableau[choix];
    for(int i = 0; i < choix ; i++){
        printf("nomber %d\n" , i+1);
        scanf("%d" , &tableau[i]);
    }
    int nomber;
    printf("quel est le numéro recherché\n");
    scanf("%d", &nomber);
    int isin = 0;
    for(int i = 0 ; i < choix ; i++){
        if(tableau[i] == nomber){
            printf("Ce numéro est dans le tableau");
            isin = 1;
            break;
        }
    }
    if(isin == 0){
        printf("Ce numéro n'est pas dans le tableau\n");
    }
    

}