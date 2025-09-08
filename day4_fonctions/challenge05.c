#include <stdio.h>
long long facto(int n){
    if (n == 0){
        printf("1");
        return 1;
    }else{
        printf("%d x " ,n);
        return n * facto(n -1);
    }
}
int main(){
    int number , somme;
    printf("entrez un number \n");
    scanf("%d", &number);
    printf(" = %d" ,  somme = facto(number));
}



