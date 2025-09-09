#include <stdio.h>
int main(){
    char str[100] , character;
    printf("entrez la chain : \n");
    scanf("%99s", str);
    printf("Quel est le caractère que vous recherchez?\n");
    scanf(" %c" , &character);
    int j = 0;
    for(int i = 0 ; str[i] != '\0' ; i++){
        if(str[i] == character){
            j++;
        }
    }
    if(j == 0){
        printf("Désolé, nous n’avons pas trouvé le caractère que vous recherchez\n");
    }else{
        printf("Le caractère que vous recherchez est apparu %d fois" , j);
    }
    return 0;
}