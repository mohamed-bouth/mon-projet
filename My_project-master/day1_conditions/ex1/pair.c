#include <stdio.h>
int main(){
    int number , temp;
    printf("entre vortre number :\n");
    scanf("%d", &number);
    temp = number % 2;
    if(temp == 0){
        printf("le number '%d' est pair\n", number );
    }else{
        printf("le number '%d' est impair\n", number);
    }
    return 0;
}