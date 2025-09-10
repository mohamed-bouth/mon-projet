#include <stdio.h>
#include <string.h>
int main(){
    char phase[30];
    char motcher[30];
    printf("entrez un phase\n");
    fgets(phase , 29 , stdin);
    printf("Quel mot cherchez-vous ?\n");
    fgets(motcher , 29 , stdin);
    char *resltat = strstr(phase , motcher);
    if(resltat != NULL){
        printf("Mot trouvé à partir de: %s\n", resltat);
    }else{
        printf("Mot non trouvé\n");
    }

}