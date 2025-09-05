#include <stdio.h>
#include <string.h>

struct user{
    char nom[100] , prenom[100] , sexe[10] , gmail[100];
    int age;
}user_information;
int main(){

    printf("entre votre nom\n");
    scanf("%99s", user_information.nom);
    printf("entre votre prenom\n");
    scanf("%99s", user_information.prenom);
    char choice;
    do{
        printf("entre votre sexe \n 'm' pour homme et 'f' pour femme \n");
        scanf(" %c", &choice);
        if(choice == 'm'){
            strcpy(user_information.sexe , "homme");
        }else if(choice == 'f'){
            strcpy(user_information.sexe , "femme");
        }else{
            printf("invalid input");
        }
    }while(choice != 'm' && choice != 'f');
    printf("entre votre age\n");
    scanf("%d", &user_information.age);
    printf("entre votre email\n");
    scanf("%99s", user_information.gmail);
    printf("........\n");
    printf("prenom : %s\n", user_information.prenom);
    printf("nom : %s\n", user_information.nom);
    printf("sexe : %s\n", user_information.sexe);
    printf("age : %d\n", user_information.age);
    printf("gmail : %s\n", user_information.gmail);
    return 0;
}