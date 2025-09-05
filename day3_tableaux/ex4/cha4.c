#include <stdio.h>
int main(){
    int grandNomber , n;
    printf("choisir le nombre d'element\n");
    scanf("%d", &n);
    int tableau[n];
    for(int i = 0 ; i < n ; i++){
        printf("nomber %d\n" , i+1);
        scanf("%d", &tableau[i]);
    }
    grandNomber = tableau[0];
    for(int i = 1 ; i <5 ; i++){
        if(tableau[i] > grandNomber){
            grandNomber =tableau[i];
        }
    }
    printf("le plus grand nomber dans tableau est %d", grandNomber);
}