#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main() {
    char userinput[100][100];
    char neutres[][20] = {"hello", "hi"};
    char positif[][20] = {"happy", "good"};
    char negatif[][20] = {"sad", "bad"};
    char aiinput[100][100];

    char hello[][100] = { "nice to meet you!" , "how are you today"};
    char hi[][100] = { "hi there!" , "hi how i can help you"};
    char happy[][100] = { "oh that great !" , "that's great keep smiling!"};
    char good[][100] = {"good vibes only" , "wow , that's wonderful news"};
    char sad[][100] = {"oh , i'm sorry to hear that" , "i understand , it's not easy"};
    char bad[][100] = {"i'm here if you want to talk about it" , "it,s okay to feel bad sometime"};
    int i = 0;
    printf("..........\n");
    while (1) {
        if(i == 100){
            i = 0 ;
            memset(userinput , 0 , sizeof(userinput));
            memset(aiinput  , 0 , sizeof(aiinput));
        }
        printf("You: ");
        fgets(userinput[i], 99, stdin);

        userinput[i][strcspn(userinput[i], "\n")] = '\0';

        if (strcmp(userinput[i], "exit") == 0) {
            printf("Chatbot: Bye!\n");
            break;
        }
        if (strcmp(userinput[i], "history") == 0) {
            printf("....................\n");
            for(int g = 0 ;strcmp(userinput[g] , "history") != 0; g++){
                printf("you: %s\n" , userinput[g]);
                printf("chat: %s\n" , aiinput[g]);
            }
            break;
        }

        char *word = NULL;
        int found = 0;

        for (int j = 0; j < 5; j++) {
            if (strlen(neutres[j]) > 0 && strstr(userinput[i], neutres[j]) != NULL) {
                word = neutres[j];
                found = 1;
                break;
            }
        }
        if (!found){
            for (int j = 0; j < 5; j++) {
                if (strlen(positif[j]) > 0 && strstr(userinput[i], positif[j]) != NULL) {
                    word = positif[j];
                    found = 1;
                    break;
                }
            }
        }
        if (!found){
            for (int j = 0; j < 5; j++) {
                if (strlen(negatif[j]) > 0 && strstr(userinput[i], negatif[j]) != NULL) {
                    word = negatif[j];
                    found = 1;
                    break;
                }
            }
        }
        if (!found) {
            printf("Chatbot: i dont understand please try again...\n");
            strcpy(aiinput[i] , "i dont understand please try again...");
            i++;
            continue;
        }



        int r;
        srand(time(NULL));
        r = rand() % 2;
        if(strcmp(word, "hello") == 0){
            printf("chat bot: %s\n" , hello[r]);
            strcpy(aiinput[i] , hello[r]);
        }else if(strcmp(word , "hi") == 0){
            printf("chat bot: %s\n" , hi[r]);
            strcpy(aiinput[i] , hi[r]);
        }else if(strcmp(word , "happy") == 0){
            printf("chat bot: %s\n" , happy[r]);
            strcpy(aiinput[i] , happy[r]);
        }else if(strcmp(word , "good") == 0){
            printf("chat bot: %s\n" , good[r]);
            strcpy(aiinput[i] , good[r]);
        }else if(strcmp(word , "sad") == 0){
            printf("chat bot: %s\n" , sad[r]);
            strcpy(aiinput[i] , sad[r]);
        }else if(strcmp(word , "bad") == 0){
            printf("chat bot: %s\n" , bad[r]);
            strcpy(aiinput[i] , bad[r]);
        }
        i++;
    }

    return 0;
}
