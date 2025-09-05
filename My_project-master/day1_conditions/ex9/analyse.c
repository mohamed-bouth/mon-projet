#include <stdio.h>
int main(){
    char  charachter;
    do{
        printf("entre un charachter:\n");
        scanf("%c", &charachter);
        if(charachter >= 65 && charachter <= 90){
            printf("'%c' est une lettre majuscule.\n", charachter);
        }else if(charachter >= 97 && charachter <= 122) {
            printf("'%c' est une lettre miniscule.\n", charachter);
        }else{
            printf("'%c' n'est pas un character.\n", charachter);
        }
    }while(charachter < 65 || charachter > 122);
    return 0;
}