#include <stdio.h>
int main(){
    int chiffres , reversed;
    int a , b , c , d;
    printf("entre un number a quatre chiffres : ");
    scanf("%d" , &chiffres);
    a = (chiffres / 1000);
    b = (chiffres % 1000) / 100;
    c = (chiffres % 100) / 10;
    d = (chiffres % 10);
    reversed = (d*1000 + c*100 + b*10 + a );
    printf("\n%d", reversed);
    return 0;

}