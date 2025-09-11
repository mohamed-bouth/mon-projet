#include <stdio.h>

struct personne_information{
    char nom[20];
    char prenom[20];
    int age;
}personne;

void assingnez();

int main (){
    assingnez();
    printf(".............\n");
    printf("votre nom : %s \n", personne.nom);
    printf("votre prenom : %s \n", personne.prenom);
    printf("votre age : %d \n", personne.age);


    return 0;
}

void assingnez(){
    printf("entrez votre nom : ");
    scanf("%s" , personne.nom);
    printf("entrez votre prenom : ");
    scanf("%s" , personne.prenom);
    printf("entrez votre age : ");
    scanf("%d" , &personne.age);
}