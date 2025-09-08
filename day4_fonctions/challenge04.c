#include <stdio.h>


int minf(int a , int b);


int main(){
    int a , b;
    printf("entrez 2 number\n");
    printf("number 1 :\n");
    scanf("%d" , &a);
    printf("numbre 2 :\n");
    scanf("%d" , &b);
    printf("...........\n");
    int max = minf(a , b);
    printf("min est %d\n", max);
    return 0;
}


int minf(int a , int b){
    int min;
    if(a < b){
        min = a;
    }else if(b < a){
        min = b;
    }else{
        min = a;
    }
    return min;
}