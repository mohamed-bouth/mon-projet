#include <stdio.h>
int main(){
    float moyen;
    int n1 , n2 , n3;
    int nc1 = 2, nc2 = 3, nc3 = 5;
    printf("first note :\n");
    scanf("%d" , &n1);
    printf("seconde note :\n");
    scanf("%d" , &n2);
    printf("third note :\n");
    scanf("%d" , &n3);
    moyen = (n1*nc1 + n2*nc2 + n3*nc3) / (nc1+nc2+nc3);
    printf("your golobal note is %.2f" , moyen);
}