#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavrasecreta[20];
    int acertou = 0;
    int enforcou = 0;

    sprintf(palavrasecreta, "MELANCIA");

    do{
        char chute;
        printf("Qual letra? ");
        scanf(" %c", &chute);

        for(int i = 0; i < strlen(palavrasecreta); i++){
            if(palavrasecreta[i] == chute){
                printf("A posicao %d tem essa letra \n", i + 1);
            }
        }
    } while(!acertou && !enforcou);
}