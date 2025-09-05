#include <stdio.h>
int main(){
    char choice1;
    double f , s , r;
    do{
        printf("please choose one of four type of opérations arithmétiques\n");
        scanf("%c" , &choice1);
        if(choice1 == '+'){
            printf("first number : ");
            scanf("%lf" , &f);
            printf("sconde number : ");
            scanf("%lf" , &f);
            r = f + s;
            printf("%.2lf", r);
        }else if (choice1 == '-'){
            printf("first number : ");
            scanf("%lf" , &f);
            printf("sconde number : ");
            scanf("%lf" , &f);
            r = f - s;
            printf("%.2lf", r);
        }else if (choice1 == '*'){
            printf("first number : ");
            scanf("%lf" , &f);
            printf("sconde number : ");
            scanf("%lf" , &f);
            r = f * s;
            printf("%.2lf", r);
        }else if (choice1 == '/'){
            printf("first number : ");
            scanf("%lf" , &f);
            printf("sconde number : ");
            scanf("%lf" , &f);
            r = f / s;
            printf("%.2lf", r);
        }else{
            printf("invalid choice please try again\n");
        }
    }while(choice1 != '+' && choice1 != '-' && choice1 != '*' && choice1 != '/');
}