#include <stdio.h>
#include <ctype.h>
int main(){
    char str[100];
    printf("entrez le chaine:\n");
    scanf("%s", str);
    for(int i = 0 ; str[i] != '\0' ; i++){
        str[i] = toupper(str[i]);
    }
    printf("...........\n");
    printf("%s", str);
    return 0;
}