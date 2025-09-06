#include <stdio.h>
int main(){
    int choix1 , choix2;
    printf("choisir le nombre d'element pour le premier tableau\n");
    scanf("%d", &choix1);
    int tableau1[choix1];
    for(int i = 0 ; i<choix1 ; i++){
        printf("nomber %d\n", i+1);
        scanf("%d", &tableau1[i]);
    }
    printf("choisir le nombre d'element pour le deuxieme tableau\n");
    scanf("%d", &choix2);
    int tableau2[choix2];
    for(int i = 0 ; i<choix2 ; i++){
        printf("nombre %d\n", i+1);
        scanf("%d", &tableau2[i]);
    }
    int choix3 = choix1 + choix2;
    int tableau3[choix3];
    int j = 0 ;
    for(int i = 0 ; i < choix3 ; i++){
        if(i < choix1){
            tableau3[i] = tableau1[i];
        }else{
            tableau3[i] = tableau2[j];
            j++;
        }
    }
    printf("..........\n");
    for(int i = 0 ; i < choix3 ; i++){
        printf("%d\n", tableau3[i]);
    }
    return 0;
}