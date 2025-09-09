#include <stdio.h>
#include <string.h>
int main(){
    int choix;
    char chaine1[100] , chaine2[100] , chaine3[200];
    printf("entrez le premier chaine : \n");
    scanf("%s" , chaine1);
    printf("entrez le deuxieme chaine : \n");
    scanf("%s" , chaine2);
    printf("Veuillez choisir entre la manuelle '1' ou aver strcat méthode '2' \n");
    scanf("%d" , &choix);
    if(choix == 1){
        int len1 = strlen(chaine1);
        int len2 = strlen(chaine2);
        int len3 = len1 + len2;
        int j = 0;
        for(int i = 0; i < len3 ; i++){
            if(i < len1){
                chaine3[i] = chaine1[i];
            }else if(j < len2){
                chaine3[i] = chaine2[j];
                j++;
            }
        }
        printf("%s", chaine3);

    }else{
        strcat(chaine1 , chaine2);
        printf("%s", chaine1);
    }
    return 0;
}