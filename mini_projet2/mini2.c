#include <stdio.h>
int main(){
    char secretletter[8] = { 'y' , 'o' , 'u' , 'c' , 'o' , 'd' , 'e' , '\0'};
    char affichageTableau[8] = { '_' , '_' ,'_' ,'_' ,'_' , '_' , '_'  , '\0'};
    char userChoix;
    printf("welcome to what is charcter game!\n");
    printf("..............................................\n");
    printf("this is what is charachter game\nyou have 10 heart\nif your choice is right , you continue the game.\nif your choice is false , you lose one heart.\nenjoy the game\n");
    int gamephase = 0;
    char choix2;
    do{
        gamephase = 0;
        char affichageTableau[8] = { '_' , '_' ,'_' ,'_' ,'_' , '_' , '_'  , '\0'};
        for(int heart = 10 ; heart > 0 ; ){
            printf("make your choice\n");
            printf("(%s)\n>>" , affichageTableau);
            scanf(" %c", &userChoix);
            if(secretletter[gamephase] == userChoix){
                affichageTableau[gamephase] = userChoix;
                gamephase++;
                printf("you choose the right choice\n");
            }else{
                printf("your choice is false\n");
                heart--;
                printf("you have left %d heart\n.................\n" , heart);
            }
            if(affichageTableau[6] == 'e'){
                printf("congradilation you win the game\n................\n");
                break;
            }else if(heart == 0){
                printf("your lose the game\ngood luck next time\n.................\n");
            }
        }
        do{
            printf("do you want to play again? (y/n)\n");
            scanf(" %c", &choix2);
            if(choix2 == 'y'){
                printf("restarting the game\n");
            }else if(choix2 = 'n'){
                printf("thank you for playing our game\n");
            }else{
                printf("invalid choice please try again\n");
            }
        }while (choix2 != 'y' && choix2 != 'n');
        
    }while (choix2 == 'y');

}