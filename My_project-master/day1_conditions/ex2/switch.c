#include <stdio.h>
#include <ctype.h>
int main() {
    char choix;

    printf("Entrez un charcter : ");
    scanf("%c", &choix);
    choix = tolower(choix);
    switch(choix) {
        case 'a':
            printf("Vous avez choisi a\n");
            break;
        case 'e' :
            printf("Vous avez choisi e\n");
            break;
        case 'i':
            printf("Vous avez choisi i\n");
            break;
        case 'o':
            printf("Vous avez choisi o\n");
            break;
        case 'u':
            printf("Vous avez choisi u\n");
            break;
        default:
            printf("Choix invalide\n");
    }

    return 0;
}