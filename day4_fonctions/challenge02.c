#include <stdio.h>


int sommef(int a , int b);


int main(){
    int a , b;
    printf("entrez 2 number\n");
    printf("number 1 :\n");
    scanf("%d" , &a);
    printf("numbre 2 :\n");
    scanf("%d" , &b);
    printf("...........\n");
    int somme = sommef(a , b);
    printf("%d x %d = %d", a , b , somme);
    return 0;
}


int sommef(int a , int b){
    int somme = a * b;
    return somme;
}