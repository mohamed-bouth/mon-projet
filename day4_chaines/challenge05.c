#include <stdio.h>
int main(){
    char str[100];
    printf("entrez la chaine :\n");
    scanf("%99s", str);
    int i = 0;
    for(i ; i <100 ; i++){
        if(str[i] == '\0'){
            break;
        }
    }
    int debut = 0;
    int fin = i-1;
    while(debut < fin){
        int temp = str[debut];
        str[debut] = str[fin];
        str[fin] = temp;
        debut++;
        fin--;
    }
    printf("..........\n");
    printf("%s", str);
}