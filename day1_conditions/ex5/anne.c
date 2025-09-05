#include <stdio.h>
#include <ctype.h>
void hmida();

int main(){
    int annees , mois , jours , heures , minutes , secondes;
    char choix;
    printf("Entrez le nombre d'années :\n");
    scanf("%d", &annees);
    printf("Veuillez sélectionner l'unité vers laquelle \nvous souhaitez effectuer la conversion.");
    do{
        printf("Choisissez le une des options ci-dessous:\n");
        printf("Pour choisir les mois 'm' , jours 'j' , heures 'h' , minutes 'n' , secondes 's'\n");
        scanf("%c", &choix);
        choix = tolower(choix);
        switch (choix){
        case 'm':
            mois = annees * 12;
            printf("%d annees egale %d mois\n", annees , mois);
            break;
        case 'j':
            jours = annees * 365;
            printf("%d annees egale %d jours\n", annees , jours);
            break;
        case 'h':
            heures = annees * 365 * 24;
            printf("%d annees egale %d heures\n", annees , heures);
            break;
        case 'n':
            minutes = annees * 365 * 24 * 60;
            printf("%d annees egale %d minutes\n", annees , minutes);
            break;
        case 's':
            secondes = annees * 365 * 24 * 60 *60;
            printf("%d annees egale %d minutes\n", annees , secondes);
            break;
        
        default:
            printf("invalide choix");
            break;
        }
    }while(choix != 'm' && choix != 'j' && choix != 'h' && choix != 'n' && choix != 's');
    return 0;

}


