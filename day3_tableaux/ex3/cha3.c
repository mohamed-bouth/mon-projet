#include <stdio.h>
int main(){
    int n , somme=0 ;
    printf("choisir le nombre d'element\n");
    scanf("%d", &n);
    int tableau[n];
    for(int i = 0 ; i < n ; i++){
        printf("nomber %d\n" , i+1);
        scanf("%d", &tableau[i]);
    }

    printf("les resultat est\n..........\n");
    for(int i = 0 ; i < n ; i++){
        somme = somme + tableau[i];
    }
    printf("%d", somme);
}