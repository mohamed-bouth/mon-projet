#include <stdio.h>
int main(){
    char str1[100] , str2[100];
    printf("entrez un chain:\n");
    fgets(str1 , 99 , stdin);
    int j=0;
    for(int i = 0; str1[i] != '\0' ; i++){
        if(str1[i] != ' '){
            str2[j] = str1[i];
            j++;
        }
    }
    printf("...........\n");
    printf("%s", str2);
}