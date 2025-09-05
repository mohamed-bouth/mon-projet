#include <stdio.h>
int main(){
    char  charachter;
    printf("entre un charachter:\n");
    scanf("%c", &charachter);
    if(charachter >= 65 && charachter <= 90){
        printf("'%c' est une lettre majuscule.\n", charachter);
    } else {
        printf("'%c' n'est pas une lettre majuscule.\n", charachter);
    }
    return 0;
}