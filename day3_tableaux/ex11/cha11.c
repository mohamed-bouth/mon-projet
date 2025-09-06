#include <stdio.h>
int main(){
    int choix;
    printf("choisir le nombre d'element\n");
    scanf("%d", &choix);
    int tableau[choix];
    for(int i = 0 ; i<choix ; i++){
        printf("nomber %d\n", i+1);
        scanf("%d", &tableau[i]);
    }
    int remplaceVa , noveauVa;
    printf("entrez la valeur a remplacer\n");
    scanf("%d", &remplaceVa);
    printf("entrez la nouveau valaur\n");
    scanf("%d", &noveauVa);
    int ifin = 0;
    for(int i = 0 ; i < choix ; i++){
        if(tableau[i] == remplaceVa){
            printf("tableau[%d] = %d " , i , tableau[i]);
            tableau[i] = noveauVa;
            printf("mise à jour à tableau[%d] = %d\n", i , tableau[i]);
            ifin = 1;
        }
    }
    if(ifin == 0){
        printf("Désolé, nous n'avons trouvé aucune valeur\n de similarité pour '%d'", remplaceVa);
    }
    printf("tableau final :\n");
    for(int i = 0 ; i < choix ; i++){
        printf("nomber %d : %d\n" , i+1 , tableau[i]);
    }
    return 0;
}