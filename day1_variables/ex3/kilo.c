#include<stdio.h>
int main(){
    double y=0, k;
    printf("entre kilometres\n");
    scanf("%lf" , &k);
    y = k * 1093.61;
    printf("les resultat: %.2lf", y);
    return 0;
}