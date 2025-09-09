#include <stdio.h>

void pairouno (int numbre);

int main(){
    int numbre;
    printf("entrez un numbre\n");
    scanf("%d", &numbre);
    pairouno(numbre);
}

void pairouno (int numbre){

    if(numbre % 2 == 0){
        printf("'%d' est pair\n" , numbre);
    }else{
        printf("'%d' est impair\n" , numbre);
    }
}