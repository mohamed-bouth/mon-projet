#include <stdio.h>


struct date{
    int jour;
    int mois;
    int annee;
};

void changetime(struct date *day);

int main(){
    struct date d;
    struct date *day = &d;
    changetime(day);
    printf("la date est:\n");
    printf("%d/%d/%d" , day->jour , day->mois , day->annee);

}

void changetime(struct date *day){
    printf("choisir la date a la formule (jj/mm/aa):\n");
    scanf("%d/%d/%d", &day->jour , &day->mois , &day->annee);
}