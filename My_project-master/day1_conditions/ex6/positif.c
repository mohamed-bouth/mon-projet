#include <stdio.h>
int main(){
    int number;
    printf("entre un number :\n");
    scanf("%d", &number);
    if(number > 0){
        printf("le number est positif");
    }else if(number = 0){
        printf("le number est null");
    }else{
        printf("le number est negatif");
    }
    return 0;
}