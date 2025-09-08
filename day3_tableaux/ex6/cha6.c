#include <stdio.h>
int main(){
    int n , facteurMulti;
    printf("choisir le nombre d'element\n");
    scanf("%d", &n);
    printf("choisir le faacteur de multiplication\n");
    scanf("%d", &facteurMulti);
    int tableau[n];
    int doubletableau[n];
    for(int i = 0 ; i < n ; i++){
        printf("nomber %d\n" , i+1);
        scanf("%d", &tableau[i]);
    }
    for(int i = 0 ; i < n ; i++){
        doubletableau[i] = tableau[i]*facteurMulti;
    }
    printf("les resultat est\n.........\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d x %d = %d\n" , tableau[i] , facteurMulti , doubletableau[i]);
    }

}