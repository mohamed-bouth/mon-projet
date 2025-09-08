#include <stdio.h>


int maxf(int a , int b);


int main(){
    int a , b;
    printf("entrez 2 number\n");
    printf("number 1 :\n");
    scanf("%d" , &a);
    printf("numbre 2 :\n");
    scanf("%d" , &b);
    printf("...........\n");
    int max = maxf(a , b);
    printf("max est %d\n", max);
    return 0;
}


int maxf(int a , int b){
    int max;
    if(a > b){
        max = a;
    }else if(b > a){
        max = b;
    }else{
        max = a;
    }
    return max;
}