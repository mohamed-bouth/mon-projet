#include <stdio.h>
#include <math.h>
int main(){
    float moyenne;
    int n1 , n2 , n3;
    printf("moyen 1 :\n");
    scanf("%d" , &n1);
    printf("moyen 2 :\n");
    scanf("%d" , &n2);
    printf("moyen 3 :\n");
    scanf("%d" , &n3);
    moyenne = cbrt(n1 * n2 * n3);
    printf("La moyenne geometrique est : %.4lf\n", moyenne);
    return 0;
}