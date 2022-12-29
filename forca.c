#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavrasecreta[20];
    char chutes[26];
    int tentativas = 0;
    int acertou = 0;
    int enforcou = 0;


    sprintf(palavrasecreta, "MELANCIA");

    do {
        for(int i = 0; i < strlen(palavrasecreta); i++){
            int achou = 0;

            for(int j = 0; j < tentativas; j++){
                if(chutes[j] == palavrasecreta[i]){
                    achou = 1;
                    break;
                }
            }

            if (achou){
                printf("%c", palavrasecreta[i]);
            }
            else{
                printf("_ ");
            }
        }

        printf("\n");

        char chute;
        printf("Qual letra? ");
        scanf(" %c", &chute);

        chutes[tentativas] = chute;
        tentativas++;

        for(int i = 0; i < strlen(palavrasecreta); i++){
            if(palavrasecreta[i] == chute){
                printf("A posicao %d tem essa letra \n", i + 1);
            }
        }
    } while(!acertou && !enforcou);
}