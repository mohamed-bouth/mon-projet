#include <stdio.h>
#include <string.h>

struct livre{
    char titre[30];
    char auteur[50];
    int annee;
}monlivre;

void book(struct livre *monlivre);

int main(){
    book(&monlivre);
    printf("le titre est : %s\n" , monlivre.titre);
    printf("l'auteur est : %s\n" , monlivre.auteur);
    printf("l'annee est : %d\n" , monlivre.annee);


    return 0;
}

void book(struct livre *monlivre){
    printf("entrez le titre :\n");
    fgets(monlivre->titre , sizeof(monlivre->titre) , stdin);
    monlivre->titre[strcspn(monlivre->titre , "\n")] = '\0';
    printf("entrez le nom de l'aureur :\n");
    fgets(monlivre->auteur , sizeof(monlivre->auteur) , stdin);
    monlivre->auteur[strcspn(monlivre->auteur , "\n")] = '\0';
    printf("entrez le annee :\n");
    scanf("%d" , &monlivre->annee);

}