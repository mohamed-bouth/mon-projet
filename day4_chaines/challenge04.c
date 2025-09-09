#include <stdio.h>
#include <string.h>
int main(){
    char str1[100] , str2[100];
    printf("entrez la chaine 1\n");
    scanf("%s" , str1);
    printf("entrez la chaine 2\n");
    scanf("%s" , str2);
    int res = strcmp(str1 , str2);
    if(res == 0){
        printf("Les deux tableaux sont identiques\n");
    }else{
        printf("Les deux tableaux ne sont pas identiques\n");
    }



    return 0;
}