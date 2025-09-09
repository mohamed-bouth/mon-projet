#include <stdio.h>
int main(){
    char letter[100];
    printf("entrez votre nom\n");
    fgets(letter , sizeof(letter) , stdin);
    int len = -1;
    for(int i = 0 ; letter[i] != '\0' ; i++){
        len++;
    }
    printf("la longueur de chaine est %d" , len);
    return 0;
}