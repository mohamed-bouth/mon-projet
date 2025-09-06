#include <stdio.h>
int main(){
    int choix;
    printf("choisir le nombre d'element\n");
    scanf("%d", &choix);
    int tableau[choix];
    int impairtableau[choix];
    for(int i = 0 ; i<choix ; i++){
        printf("nomber %d\n", i+1);
        scanf("%d", &tableau[i]);
    }
    int j = 0 ;
    for(int i = 0 ; i < choix ; i++){
        if( tableau[i] % 2 != 0){
            impairtableau[j] = tableau[i];
            j++;
        }
    }
    if(j > 0 ){
       printf("le nomber impair par le tableau est :\n");
        for(int i = 0 ; i < j ; i++){
            printf("%d\n", impairtableau[i]);
        } 
    }else{
        printf("Le tableau ne contient pas de nombres impair");
    }
    return 0;
}