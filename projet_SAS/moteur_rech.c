#include <stdio.h>
#include <string.h>
#include <ctype.h>

char text[2000];

struct Mot {
    char valeur[50];
    int occurrences;
    int longueur;
    int positions[100];
};

struct Mot mot_information[500];



int nomber_mot = 0;
int nomber_mot_total = 0;

void menu();

void cleanChar();

void cleanText();

void afficherMot();

void chercheMot();

void clear();

void chercheMotP();

void trierLesMots();

void statistique();

void analyses();

char *my_strtok (char *text);






int main(){
    int choix;
    printf("=====welcome to our app!=====\n");
    do{
        menu();
        printf(">>");
        scanf("%d" , &choix);
        getchar();
        switch (choix)
        {
        case 1 :
            clear();
            cleanText();
            break;
        case 2 :
            afficherMot();
            break;
        case 3 :
            chercheMot();
            break;
        case 4 :
            chercheMotP();
            
            break;
        case 5 :
            trierLesMots();
            break;
        case 6 :
            statistique();
            break;
        case 7 :
            analyses();
            
            break;
        case 8 :
            
            break;
        
        default:
            printf("invalid choix\n");
            break;
        }
    }while(choix != 8);
    return 0;
}

void menu(){
    printf("=============================\n");
    printf("1. Saisir un texte\n");
    printf("2. Afficher tous les mots\n");
    printf("3. Rechercher un mot exact\n");
    printf("4. Rechercher un mot partiel\n");
    printf("5. Trier les mots\n");
    printf("6. Statistiques globales\n");
    printf("7. Analyses\n");
    printf("8. Quitter le programme\n");
    printf("=============================\n");
    
}

void cleanChar(){
    char copytext[2000] ;
    int i = 0 ;
    int j = 0 ;
    while(text[i] != '\0'){
        if( (text[i] >= 97  && text[i] <= 122) || text[i] == 32 ){
            copytext[j] = text[i];
            j++;
        }
        i++;
    }
    copytext[j] = '\0' ;
    for(int i = 0 ; i < 2000 ; i++){
        text[i] = '\0';
    }
    for(int i = 0 ; i < j ; i++){
        text[i] = copytext[i];
    }
}

void cleanText(){

    printf("Veuillez saisir le texte\n");
    fgets(text , sizeof(text) , stdin);

    text[strcspn(text , "\n")] = '\0';

    int textLen = strlen(text);

    for(int i = 0 ; i < textLen  ; i++){
        text[i] = tolower(text[i]);
    }

    cleanChar();

    char *debutText = text ;
    char *mot = my_strtok(text);

    while(mot != NULL){
        nomber_mot_total++;
        if(mot_information[0].valeur[0] == '\0'){
            strcpy(mot_information[0].valeur , mot);
            mot_information[0].occurrences = 1;
            mot_information[0].longueur = strlen(mot);
            mot_information[0].positions[0] = mot - debutText;
            nomber_mot++;
        }
        else{
            int flag = 0;
            int j = 0;
            for(j ; j < nomber_mot ; j++){
                if(strcmp(mot , mot_information[j].valeur) == 0){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0){
                strcpy(mot_information[nomber_mot].valeur , mot);
                mot_information[nomber_mot].occurrences = 1;
                mot_information[nomber_mot].longueur = strlen(mot);
                mot_information[nomber_mot].positions[0] = mot - debutText;
                nomber_mot++;
            }if(flag == 1){
                
                mot_information[j].positions[mot_information[j].occurrences] = mot - debutText;
                mot_information[j].occurrences++;
            }
        }
        mot = my_strtok(NULL);
        
    }
    
}

void afficherMot(){
    if(nomber_mot_total != 0){
        printf("le number des mot total : %d\n " , nomber_mot_total);
        printf("le number des mot unique : %d\n " , nomber_mot);
        for(int z = 0 ; z < nomber_mot ; z++){
            printf("===============\n");
            printf("le mot : %s\n" , mot_information[z].valeur);
            printf("occurrences : %d\n" , mot_information[z].occurrences);
            printf("la longueur : %d\n" , mot_information[z].longueur);
            printf("les positions : ");
        for(int x = 0 ; x < mot_information[z].occurrences ; x++){
            printf("[%d] " , mot_information[z].positions[x]);
        }
        printf("\n");
    }
    }else{
        printf("non data !\n");
    }
    printf("=============================\n");
    printf("Pour continuer, appuyez sur Entree : ");
    getchar();
    
}

void chercheMot(){
    char mot[50];
    printf("Quel mot cherchez-vous ?\n");
    scanf("%s" , mot);
    int flage = 0;
    int i = 0;
    for(i ; i < nomber_mot ; i++){
        if(strcmp(mot_information[i].valeur , mot) == 0){
            flage  = 1;
            break;
        }
    }
    if(flage == 1){
        printf("===============\n");
        printf("le mot : %s\n" , mot_information[i].valeur);
        printf("occurrences : %d\n" , mot_information[i].occurrences);
        printf("la longueur : %d\n" , mot_information[i].longueur);
        printf("les positions : ");
        for(int x = 0 ; x < mot_information[i].occurrences ; x++){
            printf("[%d] " , mot_information[i].positions[x]);
        }
        printf("\n");
    }else{
        printf("Le mot que vous cherchez n'existe pas \n");
    }
    printf("=============================\n");
    printf("Pour continuer, appuyez sur Entree : \n");
    getchar();
    getchar();
}

void clear(){
    for(int i = 0 ; i < 2000 ; i++){
        text[i] = '\0';
    }
    
    for(int j = 0 ; j < nomber_mot ; j++){
        strcpy(mot_information[j].valeur , "");
        mot_information[j].longueur = 0;
        for(int z = 0; z < mot_information[j].occurrences ; z++){
            mot_information[j].positions[z] = 0;
        }
        mot_information[j].occurrences = 0;
    }
    nomber_mot = 0;
    nomber_mot_total = 0;
}

void chercheMotP(){
    char mot[50];
    printf("Quel mot cherchez-vous ?\n");
    scanf("%s" , mot);
    getchar();
    int flage1 = 0;
    for(int i = 0 ; i < nomber_mot ; i++){
        if(mot[0] == mot_information[i].valeur[0]){
            int flage2 = 1 ;
            for(int j = 0 ; mot[j] != '\0' ; j++){
                if(mot[j] != mot_information[i].valeur[j]){
                    flage2 = 0 ;
                    break;
                }
            }
            if(flage2 == 1){
                printf("-> %s\n" , mot_information[i].valeur);
                flage1++;

            }
        }
    }
    if(flage1 == 0){
        printf("Le mot que vous cherchez n'existe pas \n");
    }
    printf("=============================\n");
    printf("Pour continuer, appuyez sur Entree : \n");
    getchar();
}

void trierLesMots(){
    struct Mot copy[500];
    
    int choix;
    int itmp;
    char ctmp[50];
    int i2tmp[2];

    for (int i = 0 ; i < nomber_mot ; i++){
        copy[i] = mot_information[i];
    }

    printf("1 : Par ordre alphabétique\n");
    printf("2 : Par fréquence\n");
    printf("3 : Par longueur\n");
    printf("4. sortie\n");
    printf(">>");
    scanf("%d" , &choix);
    switch (choix)
    {
    case 1 :
        for(int i = 0 ; i < nomber_mot - 1 ; i++){

            for(int j = i + 1 ; j < nomber_mot ; j++){

                if(strcmp(copy[i].valeur , copy[j].valeur) > 0){
                    struct Mot tmp = copy[i];
                    copy[i] = copy[j];
                    copy[j] = tmp;
                }
            }
        }
        for(int i = 0 ; i < nomber_mot ; i++){
            printf("=============================\n");
            printf("-> %s\n" , copy[i].valeur);
        }
        printf("=============================\n");
        printf("Pour continuer, appuyez sur Entree : \n");
        getchar();
        getchar();
        break;
    case 2 :
        for(int i = 0 ; i < nomber_mot -1 ; i++){

            for(int j = i + 1 ; j < nomber_mot ; j++){
                if(copy[i].occurrences < copy[j].occurrences){
                    struct Mot tmp = copy[i];
                    copy[i] = copy[j];
                    copy[j] = tmp;

                }
            }
        }
        for(int i = 0 ; i < nomber_mot ; i++){
            printf("=============================\n");
            printf("-> %s\n" , copy[i].valeur);
            printf("->occurrences : %d\n" , copy[i].occurrences);
        }
        printf("=============================\n");
        printf("Pour continuer, appuyez sur Entree : \n");
        getchar();
        getchar();
        break;
    case 3 :
        for(int i = 0 ; i < nomber_mot ; i++){

            for(int j = i + 1 ; j < nomber_mot ;j++){
                if(copy[i].longueur > copy[j].longueur){
                    struct Mot tmp = copy[i];
                    copy[i] = copy[j];
                    copy[j] = tmp;
                }
            }
        }
        for(int i = 0 ; i < nomber_mot ; i++){
            printf("=============================\n");
            printf("-> %s\n" , copy[i].valeur);
            printf("->longuer : %d\n" , copy[i].longueur);
        }
        printf("=============================\n");
        printf("Pour continuer, appuyez sur Entree : \n");
        getchar();
        getchar();
        break;
    case 4:
        break;
    default:
        printf("invalide choix\n");
        break;
    }
}

void statistique(){


    int lenTotal = 0;
    for(int i = 0 ; i < nomber_mot ; i++){
        lenTotal = lenTotal + (mot_information[i].longueur * mot_information[i].occurrences);
    }
    float longMoyenne = (float)lenTotal / nomber_mot_total;


    float div = ((float)nomber_mot / nomber_mot_total) * 100;

    int flage = 0 ;
    int longMot = mot_information[0].longueur;
    for(int i = 1 ; i < nomber_mot ; i++){
        if(longMot < mot_information[i].longueur){
            longMot = mot_information[i].longueur;
            flage = i;
        }
    }
    int flage2 = 0 ;
    int courtMot = mot_information[0].longueur;
    for(int i = 1 ; i < nomber_mot ; i++){
        if(courtMot > mot_information[i].longueur){
            courtMot = mot_information[i].longueur;
            flage2 = i;
        }
    }
    int flage3 = 0 ;
    int freq = mot_information[0].occurrences;
    for(int i = 1 ; i < nomber_mot ; i++){
        if(freq < mot_information[i].occurrences){
            freq = mot_information[i].occurrences;
            flage3 = i;
        }
    }

    printf("=============================\n");
    printf("le numbre total de mots : %d\n" , nomber_mot_total);
    printf("=============================\n");
    printf("le numbre de mots uniques : %d\n" , nomber_mot);
    printf("=============================\n");
    printf("le diversite lexicale : %.2f\n" , div);
    printf("=============================\n");
    printf("la longueur moyenne : %.2f\n" , longMoyenne);
    printf("=============================\n");
    printf("mot le plus long : %s\n" , mot_information[flage].valeur);
    printf("la longueur : %d\n" , mot_information[flage].longueur);
    printf("=============================\n");
    printf("mot le plus court : %s\n" , mot_information[flage2].valeur);
    printf("la longueur : %d\n" , mot_information[flage2].longueur);
    printf("=============================\n");
    printf("mot le plus frequent : %s\n" , mot_information[flage3].valeur);
    printf("occurrences : %d\n" , mot_information[flage3].occurrences);
    printf("la longueur : %d\n" , mot_information[flage3].longueur);
    printf("=============================\n");
    printf("Pour continuer, appuyez sur Entree : \n");
    getchar();

}

void analyses(){
    int choix;
    printf("1. Palindromes\n");
    printf("2. Anagrammes\n");
    printf("3. Nuage de mots\n");
    printf("4. sortie\n");
    printf(">>");
    scanf("%d" , &choix);
    switch (choix)
    {
    case 1 :
        int flage = 0;
        for(int i = 0 ; i < nomber_mot ; i++){

            char inverse[50];
            int len =  mot_information[i].longueur - 1 ;
            int z = 0;
            flage = 0 ;

            for(int j = len ; j >= 0 ; j--){
                inverse[z++] = mot_information[i].valeur[j];
            }
            inverse[z] = '\0';
            if(strcmp(inverse , mot_information[i].valeur) == 0){
                flage = 1 ; 
            }

            if(flage == 1){
                printf("=============================\n");
                printf("%s -> %s\n" , inverse , mot_information[i].valeur);
            }
        }
        if(flage == 0){
            printf("=============================\n");
            printf("nous ne trouvons aucun mot palindrome\n");
        }
        printf("=============================\n");
        printf("Pour continuer, appuyez sur Entree : \n");
        getchar();
        getchar();
        break;
    case 2 :

            char copy1[50];
            char copy2[50];

            int flage2 = 0 ;
            int conn = 0;
        printf("=============================\n");
        for(int i = 0 ; i < nomber_mot ; i++){

            for(int j = i + 1 ; j < nomber_mot ; j++){

                int len = strlen(mot_information[i].valeur);
                int len2 = strlen(mot_information[j].valeur);
                strcpy(copy1 , mot_information[i].valeur);
                strcpy(copy2 , mot_information[j].valeur);
                flage2 = 0 ;
                if(len == len2){
                    for(int z = 0 ; z < len  ; z++){
                        for(int w = z + 1 ; w < len ; w++){
                            char temp;
                            if(copy1[z] > copy1[w]){
                                temp = copy1[z];
                                copy1[z] = copy1[w];
                                copy1[w] = temp;
                            }
                        }
                    }
                    for(int z = 0 ; z < len  ; z++){

                        for(int w = z + 1 ; w < len ; w++){

                            char temp;
                            if(copy2[z] > copy2[w]){
                                temp = copy2[z];
                                copy2[z] = copy2[w];
                                copy2[w] = temp;
                            }
                        }
                    }
                    if(strcmp(copy1 , copy2) == 0){
                        conn++;
                        flage2 = 1;
                    }
                        
                    if(flage2 == 1){
                        printf("%s >> %s\n" , mot_information[i].valeur , mot_information[j].valeur);
                    }
                }
            }
        }
        if(conn == 0){
            printf("nous ne trouvons aucun mot anagrammes\n");
        }
        printf("=============================\n");
        printf("Pour continuer, appuyez sur Entree : \n");
        getchar();
        getchar();
        
        break;
    case 3 :
        struct Mot copy[500];
        struct Mot temp;
        for(int i = 0 ; i < nomber_mot ; i++){

            copy[i] = mot_information[i];
        }
        for(int i = 0 ; i < nomber_mot -1 ; i++){

            for(int j = i + 1 ; j < nomber_mot ; j++){

                if(copy[i].occurrences < copy[j].occurrences){
                    temp = copy[i];
                    copy[i] = copy[j];
                    copy[j] = temp;
                }
            }
        }
        char point[50];
        printf("=============================\n");
        for(int i = 0 ; i < nomber_mot ; i++){

            int j = 0 ;
            for(j; j <copy[i].occurrences ; j++){
                point[j] = '*';
            }
            point[j] = '\0';
            
            printf("%s (%s)\n" , copy[i].valeur  , point);
        }
        printf("=============================\n");
        printf("Pour continuer, appuyez sur Entree : \n");
        getchar();
        getchar();
        break;
    case 4 :
        break;
    default:
        printf("invalid choix\n");
        break;
    }
}

char *my_strtok (char *text){
    static char delim = ' ';
    static char *last;
    
    if(text != NULL){
        last = text;
    }

    if(last == NULL){
        return NULL;
    }

    char *start  = last;
    while(*start && *start == delim){
        start++;
    }
    if(*start == '\0') {
        last = NULL;
        return NULL;
    }

    char *end = start;
    while(*end && *end != delim){
        end++;
    }
    if(*end){
        *end = '\0';
        last = end + 1;
    }else{
        last = NULL;
    }
    return start;
}




