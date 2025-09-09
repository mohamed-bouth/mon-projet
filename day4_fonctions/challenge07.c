#include <stdio.h>
#include <string.h>

void reverse(char s[]);

int main(){
    char s[] = "hello";
    printf("%s\n" , s);
    reverse(s);
    printf("%s", s);
    return 0;
}

void reverse(char s[]){
int debut = 0;
int fin = strlen(s) -1;
while(debut < fin){
    char temp = s[debut]; 
    s[debut] = s[fin];
    s[fin] = temp;
    debut++;
    fin--;
}



}