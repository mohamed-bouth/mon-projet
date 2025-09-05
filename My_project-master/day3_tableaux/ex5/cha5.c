#include <stdio.h>
int main(){
    int petitNomber , n;
    printf("choisir le nombre d'element\n");
    scanf("%d", &n);
    int tableau[n];
    for(int i = 0 ; i < n ; i++){
        printf("nomber %d\n" , i+1);
        scanf("%d", &tableau[i]);
    }
    petitNomber = tableau[0];
    for(int i = 1 ; i <5 ; i++){
        if(tableau[i] < petitNomber){
            petitNomber =tableau[i];
        }
    }
    printf("le plus petit nomber dans tableau est %d", petitNomber);
}