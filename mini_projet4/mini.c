#include <stdio.h>
#include <stdlib.h>

struct Etudiant
{
    int id;
    char nom[30];
    char prenom[30];
    int age;
    float moyenne;
};

struct Etudiant *etudiant = NULL;
int n = 0;

struct Cours
{
    int code;
    char nom[50];
    int credit;
    int note;
};
struct Cours *cours = NULL;
int c = 0;

void ajouter_etudiant();

void ajouter_cours();

void afficher_etudiants();

void afficher_cours();

void id();

void md_note();

int main(){
    int choix;
    printf("bienvenue sur notre application!\n");
    printf("...................\n");
    do{
        printf("continue...........");
        getchar();
        getchar();
        printf("veuillez choisir l'une des options suivantes\n");
        printf("1 : ajouter des etudiants\n");
        printf("2 : ajouter des cours\n");
        printf("3 : afficher la liste des etudiants\n");
        printf("4 : afiicher la liste des cours\n");
        printf("5 : rechercher un etudiant\n");
        printf("6 : modifier la note d'un cours\n");
        printf("7 : pour sortir\n");
        printf(">>");
        scanf("%d" , &choix);
        switch (choix)
        {
        case 1:
            ajouter_etudiant();
            break;
        case 2:
            ajouter_cours();
            break;
        case 3:
            afficher_etudiants();
            break;
        case 4:
            afficher_cours();
            break;
        case 5:
            id();
            break;
        case 6:
            md_note();
            break;
        case 7:
            printf("merci d'utiliser notre application\n");
            break;
        
        default:
            printf("invalid choix\n");
        }
    }while(choix != 7);


    return 0;

}

void ajouter_etudiant(){
    int nb;
    printf("Combien d'etudiants voulez-vous ajouter: ");
    scanf("%d" , &nb);
    if (etudiant == NULL){
        n = nb;
        etudiant = malloc(nb * sizeof(struct Etudiant));
    }else{
        n = n + nb;
        etudiant = realloc(etudiant , n * sizeof(struct Etudiant));
    }
    
    for (int i = n - nb; i < n; i++) {
        printf("Entrez le nom de l'etudiant %d: ", i + 1);
        scanf("%29s", etudiant[i].nom);
        printf("Entrez le prenom: ");
        scanf("%29s", etudiant[i].prenom);
        printf("Entrez l'age: ");
        scanf("%d", &etudiant[i].age);
        printf("Entrez la moyenne: ");
        scanf("%f", &etudiant[i].moyenne);
        printf("Entrez ID: ");
        scanf("%d", &etudiant[i].id);

    }
}

void ajouter_cours(){
    int nc;
    printf("Combien de cours voulez-vous ajouter: ");
    scanf("%d" , &nc);
    if(cours == NULL){
        c = nc;
        cours = malloc(c * sizeof(struct Cours));
    }else{
        c = c + nc;
        cours = realloc(cours, c * sizeof(struct Cours));
    }
    for (int i = c - nc ; i < c ; i++){
        printf("Entrez la code de cours  %d: ", i+1);
        scanf("%d" , &cours[i].code);
        printf("Entrez la nome de cours %d : ", i+1);
        scanf("%49s" , cours[i].nom);
        printf("Entrez la credits de cours %d : ", i+1);
        scanf("%d" , &cours[i].credit);
        printf("entrez la note de cours %d : " , i+1);
        scanf("%d" , &cours[i].note);

    }
}

void afficher_etudiants(){
    printf("la list de etudiants :\n");
    printf(".........................\n");
    for(int i = 0 ; i < n ; i++){
        printf("%d : %s %s\n", i+1 , etudiant[i].nom , etudiant[i].prenom);
    }
}

void afficher_cours(){
    printf("La list de cours :\n");
    printf(".........................\n");
    for(int i = 0 ; i < c ; i++){
        printf("cours %d :........\n" , i+1);
        printf("le nom : %s\n" , cours[i].nom);
        printf("le credit : %d\n" , cours[i].credit);
        printf("le note : %d\n" , cours[i].note);


    }

}

void id(){
    int lookingid;
    printf("ecrivez ID de l'etudiant que vous recherchez:\n>");
    scanf("%d" , &lookingid);
    int flag = 0;
    int place;
    for(int i = 0 ; i < n ; i++){
        if(lookingid == etudiant[i].id){
            place = i;
            flag = 1;
        }
    }
    if (flag == 0){
        printf("desole, nous ne trouvons pas ID comme le vetre\n");
    }else{
        printf("...................\n");
        printf(">nom : %s\n" , etudiant[place].nom);
        printf(">prenom : %s\n" , etudiant[place].prenom);
        printf(">age : %d\n" , etudiant[place].age);
        printf(">moyenne : %.2f\n" , etudiant[place].moyenne);
    }

}

void md_note(){
    int lookingcs;
    printf("ecrivez code de cours que vous recherchez:\n>");
    scanf("%d" , &lookingcs);
    int flag = 0;
    int place;
    for(int i = 0 ; i < c ; i++){
        if(lookingcs == cours[i].code){
            place = i;
            flag = 1;
        }
    }
    if (flag == 0){
        printf("desole, nous ne trouvons pas code comme le vetre\n");
    }else{
        printf("ecrire la nouvelle note : ");
        scanf("%d" , &cours[place].note);
    }
}

