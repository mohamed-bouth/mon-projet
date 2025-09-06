#include <stdio.h>
int main(){
    int choix;
    printf("choisir le nomber d'element\n");
    scanf("%d", &choix);
    int tableau[choix];
    int pairtableau[choix];
    for(int i = 0 ; i<choix ; i++){
        printf("nomber %d\n", i+1);
        scanf("%d", &tableau[i]);
    }
    int j = 0 ;
    for(int i = 0 ; i < choix ; i++){
        if( tableau[i] % 2 == 0){
            pairtableau[j] = tableau[i];
            j++;
        }
    }
    if(j > 0 ){
       printf("le nomber pair par le tableau est :\n");
        for(int i = 0 ; i < j ; i++){
            printf("%d\n", pairtableau[i]);
        } 
    }else{
        printf("Le tableau ne contient pas de nombres pair");
    }
    return 0;
}