#include <stdio.h>
#include <math.h>
int main(){
    float a , b , c;
    float delta;
    printf("s'il vous plaît écrivez la valeur de a et b et c:\n");
    printf("la valuer de a \n");
    scanf("%f", &a);
    printf("la valuer de b \n");
    scanf("%f", &b);
    printf("la valuer de c \n");
    scanf("%f", &c);
    delta = pow(b,2) - 4 * a * c;
    if(delta > 0){
        printf(" Deux solutions reelles distinctes");
    }else if(delta == 0){
        printf("Une solution double");
    }else{
        printf(" Pas de solution reelle");
    }
    return 0;
}