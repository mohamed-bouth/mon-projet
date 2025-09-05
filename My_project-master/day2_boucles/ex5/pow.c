#include <stdio.h>
int main(){
    int number , somme , puissance;
    do{
        printf("entrex un number:\n");
        scanf("%d" , &number);
        printf("enter des puissance\n");
        scanf("%d" , &puissance);
        if(number == 0){
            printf("0^%d = 1\n", puissance);
        }else{
            somme = 1;
            for(int i = 1 ; i <= puissance ;i++ ){
                somme = somme * number ;
            }
            printf("%d", somme);
        }
    }while(number == 0 );
    
}