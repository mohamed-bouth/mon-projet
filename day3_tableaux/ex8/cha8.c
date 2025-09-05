#include <stdio.h>
int main(){
    int choix;
    printf("choisir le nombre d'element\n");
    scanf("%d", &choix);
    int tableau[choix];
    int tableau2[choix];
    for(int i = 0 ; i < choix ;i++){
        printf("nomber %d : \n", i+1 );
        scanf("%d", &tableau[i]);
    }
    for(int i = 0 ; i < choix ; i++){
        tableau2[i] = tableau[i];
    }
    printf(".......\n");
    for(int i = 0 ; i < choix ; i++){
        printf("%d\n",tableau2[i]);
    }
    return 0;
}