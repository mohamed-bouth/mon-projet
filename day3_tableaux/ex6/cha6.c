#include <stdio.h>
int main(){
    int n;
    printf("choisir le nombre d'element\n");
    scanf("%d", &n);
    int tableau[n];
    int doubletableau[n];
    for(int i = 0 ; i < n ; i++){
        printf("nomber %d\n" , i+1);
        scanf("%d", &tableau[i]);
    }
    for(int i = 0 ; i < n ; i++){
        doubletableau[i] = tableau[i]*2;
    }
    printf("les resultat est\n.........\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d x 2 = %d\n" , tableau[i] , doubletableau[i]);
    }

}