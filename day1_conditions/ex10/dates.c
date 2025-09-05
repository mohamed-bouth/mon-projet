#include <stdio.h>
int main(){
    int jour , mois , annee;
    char moisnom[12][20] = {
    "Janvier", "Fevrier", "Mars",
    "Avril", "Mai", "Juin",
    "Juillet", "Aout", "Septembre",
    "Octobre", "Novembre", "Decembre"};
    do{
        printf("Entrez la date au format JJ/MM/AAAA :\n");
        scanf("%d/%d/%d", &jour, &mois, &annee);
        if (mois >= 1 && mois <= 12 && jour >= 1 && jour <= 31) {
            printf("%02d/%s/%d\n", jour, moisnom[mois - 1], annee);
        } else {
            printf("Mois  ou jour invalide !\n");
        }
    }while(mois > 12 || mois < 1  || jour > 31 || jour < 1);
    return 0;
}