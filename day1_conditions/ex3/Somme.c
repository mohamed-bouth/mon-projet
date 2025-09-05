#include <stdio.h>
int main(){
    int number1 , number2 , somme , temp;
    printf("entrez deux number :\n");
    printf("number 1 \n");
    scanf("%d", &number1);
    printf("number 2 \n");
    scanf("%d", &number2);
    if(number1 != number2){
        somme = number1 + number2;
        printf("la somme est %d",somme);
    }else{
        temp = number1 + number2;
        somme = temp * 3;
        printf("la somme est %d",somme);
    }
    return 0;
}