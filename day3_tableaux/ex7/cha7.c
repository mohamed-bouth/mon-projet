#include <stdio.h>
int main(){
    int choix;
    printf("choisir le nombre d'element\n");
    scanf("%d", &choix);
    int tableau[choix];
    for(int i = 0 ; i < choix ;i++){
        printf("nomber %d : \n", i+1 );
        scanf("%d", &tableau[i]);
    }

    for( ; ; ){
        int swapped = 0;

        for(int i = 0 ; i < choix -1 ;i++){
        if(tableau[i] < tableau[i+1]){
            int tmp = tableau[i];
            tableau[i] = tableau[i+1];
            tableau[i+1] = tmp;
            swapped = 1;
            }
        }
        if (swapped == 0 ){
            break;
        }
    }
    for(int i = 0 ; i < choix ; i++){
        printf("%d\n",tableau[i]);
    }
}