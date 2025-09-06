#include <stdio.h>
int main(){
    int h1 , h2 , m1 , m2 , s1 , s2;
    printf("entrez la premier date :");
    scanf("%d/%d/%d", &h1 , &m1 , &s1);
    printf("entrez la deuxieme date :");
    scanf("%d/%d/%d", &h2 , &m2 , &s2);
    if(h1 < h2 || (h1 == h2 && m1 < m2) || (h1 == h2 && m1 == m2 && s1 < s2)){
        printf("Le premier instant precede le second\n");
    }else if(h1 > h2 || (h1 == h2 && m1 > m2) || (h1 == h2 && m1 == m2 && s1 > s2)){
        printf("Le second instant precede le premier\n");
    }else{
        printf("Les deux instants sont identiques\n");
    }
    return 0;
}