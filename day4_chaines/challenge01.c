#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    printf("entrez votre nom et prenom\n");
    fgets(str , sizeof(str), stdin);
    int len = strlen(str);
    if(len > 0 && str[len -1] == '\n'){
        str[len -1] = '\0';
    }
    printf("%s" , str);
    printf("%d" , strlen(str));
    return 0;
}