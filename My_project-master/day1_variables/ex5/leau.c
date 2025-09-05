#include <stdio.h>
int main(){
    int c;
    printf("please write the degre of water:\n");
    scanf("%d" , &c);
    if(c < 0 ){
        printf("water status is solid");
    }else if(c >= 0 && c < 100){
        printf("water status is normal");
    }else{
        printf("water status is gaz");
    }
    return 0 ;
}