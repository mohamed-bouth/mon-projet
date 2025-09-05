#include <stdio.h>
int main(){
    float note;
    do{
        printf("Entrez la moyenne de l'etudiant:\n");
        scanf("%f", &note);
        if(note < 10){
            printf("echec (recale)");
        }else if(note >= 10 && note < 12){
            printf("Passable");
        }else if(note >= 12 && note < 14){
            printf("Assez Bien");
        }else if(note >= 14 && note < 16){
            printf("Bien");
        }else if(note >= 16 && note <= 20){
            printf("Très Bien");
        }else{
            printf("invalid chiox");
        }
    }while(note < 0 || note > 20);
    return 0;
}