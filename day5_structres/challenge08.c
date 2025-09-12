#include <stdio.h>
#include <math.h>

struct cercle{
    float rayon ;
}var;

float calculAire(struct cercle *pvar);



int main(){
    struct cercle *pvar = &var;
    float aire = calculAire(pvar);
    return 0;
}



float calculAire(struct cercle *pvar){
    printf("entrez la valuer de rayon :\n");
    scanf("%f" , &pvar->rayon);
    float aire = pow(pvar->rayon , 2)*3.141593;
    printf("L'aire du cercle est: %.2f\n", aire);

    return aire;

}