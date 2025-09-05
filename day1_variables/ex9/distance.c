#include <stdio.h>
#include <math.h>
int main(){
    int x1 , y1 , z1;
    int x2 , y2 , z2;
    float distance;
    printf("write the first Coordinates (x1 , y1 , z1)");
    printf("\nwrite x1 :");
    scanf("%d", &x1);
    printf("\nwrite y1 :");
    scanf("%d", &y1);
    printf("\nwrite z1 :");
    scanf("%d", &z1);
    printf("\nwrite the seconde Coordinates (x1 , y1 , z1)");
    printf("\nwrite x2 :");
    scanf("%d", &x2);
    printf("\nwrite y2 :");
    scanf("%d", &y2);
    printf("\nwrite z2 :");
    scanf("%d", &z2);
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("La distance euclidienne est : %.4lf\n", distance);
    return 0;
}