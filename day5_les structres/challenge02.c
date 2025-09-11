#include <stdio.h>


struct etudiant{
    char nom[20];
    char prenom[20];
    int note[5];
}etudiant_information;

void info_input ();

int main(){
    
    info_input();
}

void info_input (){
    printf("entrez votre nom : \n");
    scanf("%s" , etudiant_information.nom);
    printf("entrez votre prenom :\n");
    scanf("%s" , etudiant_information.prenom);
    for(int i = 0 ; i < 5 ; i++){
        printf("la note %d\n" , i+1);
        scanf("%d" , &etudiant_information.note[i]);
    }
    printf("................\n");
    printf("votre nom : %s\n", etudiant_information.nom);
    printf("votre prenom : %s\n", etudiant_information.prenom);
    for(int i = 0 ; i < 5 ; i++){
        printf("la note %d : %d\n" , i+1 , etudiant_information.note[i]);
    }
    
}