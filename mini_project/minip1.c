#include <stdio.h>
int main(){
    float note[5];
    float totalnote , moyennote;
    int c = 5;
    float bignote , weaknote;
    printf("ecrire 5 notes:\n");
    printf("note 1:\n");
    scanf("%f", &note[0]);
    printf("note 2:\n");
    scanf("%f", &note[1]);
    printf("note 3:\n");
    scanf("%f", &note[2]);
    printf("note 4:\n");
    scanf("%f", &note[3]);
    printf("note 5:\n");
    scanf("%f", &note[4]);
    totalnote = note[0] + note[1] + note[2] + note[3] + note[4];
    moyennote = totalnote / 5;
    bignote = note[0];
    weaknote = note[0];
    for(int i = 1 ; i < c ; i++){
        if(bignote < note[i]){
            bignote = note[i];
        }
        if(weaknote > note[i]){
            weaknote = note[i];
        }
    }
    printf(" rapport final ....\n");
    if(moyennote >= 90){
        printf("Excellent  \n");
    }else if(moyennote <90 && moyennote >= 80){
        printf("Tres bien  \n");
    }else if(moyennote <80 && moyennote >= 70){
        printf("Bien  \n");
    }else if(moyennote <70 && moyennote >= 60){
        printf("Passable  \n");
    }else{
        printf("Échec \n");
    }
    printf("total note est %.2f\n", totalnote);
    printf("moyen note est %.2f\n" , moyennote);
    printf("la note la plus haute est %.2f\n" , bignote);
    printf("la note la plus basse est %.2f" , weaknote);
    return 0;
}