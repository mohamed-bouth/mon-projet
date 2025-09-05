#include<stdio.h>
int main(){
    double ms = 0 , kmh;
    printf("entre la valeur di km/h \n");
    scanf("%lf" , &kmh);
    ms = kmh * 0.27778;
    printf("les resultat: %.2lf m/s", ms);
    return 0;
}