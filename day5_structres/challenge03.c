#include <stdio.h>

struct rectangle{
    float largeur;
    float longueur;
}info;

float calcul ();

int main(){
    printf("entrez largeur : \n");
    scanf("%f" , &info.largeur);
    printf("entrez longueur : \n");
    scanf("%f" , &info.longueur);

    float aire = calcul();

    printf("%.2f x %.2f = %.2f" , info.largeur , info.longueur , aire);


    return 0;
}

float calcul (){

    float aire = info.largeur * info.longueur;

    return aire;
}