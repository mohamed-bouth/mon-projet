#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x, y;

    printf("Entrez les coordonnees du premier point du segment (x1 y1) : ");
    scanf("%f %f", &x1, &y1);

    printf("Entrez les coordonnees du deuxieme point du segment (x2 y2) : ");
    scanf("%f %f", &x2, &y2);

    printf("Entrez les coordonnees du point a tester (x y) : ");
    scanf("%f %f", &x, &y);

    float colinear = (x - x1) * (y2 - y1) - (y - y1) * (x2 - x1);

    if (colinear == 0 &&
        x >= (x1 < x2 ? x1 : x2) && x <= (x1 > x2 ? x1 : x2) &&
        y >= (y1 < y2 ? y1 : y2) && y <= (y1 > y2 ? y1 : y2)) {
        
        printf("Le point (%.2f, %.2f) est sur le segment.\n", x, y);
    } else {
        printf("Le point (%.2f, %.2f) n'est pas sur le segment.\n", x, y);
    }

    return 0;
}
