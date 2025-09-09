#include <stdio.h>

long long fibonacci(int n);

int main(){
    int numbre;
    printf("entrez un numbre:\n");
    scanf("%d", &numbre);
    long long funumber = fibonacci(numbre);
    printf("%lld\n",funumber);
    return 0;
}

long long fibonacci(int n){
    if(n == 0){
        return 0;
    }else if(n == 1){
        return 1;
    }
    long long  a = 0 , b = 1 , c ;
    for(int i = 2; i <= n ; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b ; 

}