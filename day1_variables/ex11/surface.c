#include <stdio.h>
int main(){
    float surface , longueur , largeur;
    printf("entre largeur :\n");
    scanf("%f", &largeur);
    printf("entre largeur : \n");
    scanf("%f" , &longueur);
    surface = longueur * largeur;
    printf("la valuer de largeur est : %.2f", surface);
    return 0 ;
}