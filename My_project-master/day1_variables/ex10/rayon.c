#include <stdio.h>
#include <math.h>
int main(){
    float rayon , volume;
    printf("entre le rayon :\n");
    scanf("%f", &rayon);
    volume = (4/3) * 3.14 * pow(rayon , 3);
    printf("le volume de une sphere est : %.2f", volume);
    return 0;
}