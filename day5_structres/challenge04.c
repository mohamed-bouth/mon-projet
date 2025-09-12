#include <stdio.h>

    struct point{
    int x ;
    int y ;
    };

int main(){
    struct point var;
    var.x = 10;
    var.y = 10;
    struct point *pvar = &var;
   
    printf("entrez la valuer de x :");
    scanf("%d" , &pvar->x);
    printf("entrez la valeur de y :");
    scanf("%d" , &pvar->y);
    printf("..............\n");
    printf("x = %d\n" , pvar->x);
    printf("y = %d\n" , pvar->y);
    return 0;
    
}
