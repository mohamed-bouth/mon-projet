#include <stdio.h>
int main(){
    int number , chiffres = 0;
    printf("entrez nomber: \n");
    scanf("%d" , &number);
    if (number < 10 && number >= 0 ){
        printf(".........\n");
        printf("le nomber des chiffre est 1");
    }else{
        while(number != 0 ){
            number = number / 10 ;
            chiffres++;
        }
        printf(".........\n");
    printf("le nomber des chiffre est :%d" , chiffres);
    }
    return 0;
}