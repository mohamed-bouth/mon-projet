#include <stdio.h>
int main(){
    int n;
    printf("choisir le nombre d'element\n");
    scanf("%d", &n);
    int tableau[n];
    for(int i = 0 ; i < n ; i++){
        printf("nomber %d\n" , i+1);
        scanf("%d", &tableau[i]);
    }

    printf("les nomber est\n..........\n");
    for(int i = 0 ; i < n ; i++){
        printf(" nomber %d est %d\n",i+1 , tableau[i]);
    }
}