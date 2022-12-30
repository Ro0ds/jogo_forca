#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void abertura(){
    //imprime cabeçalho
    printf("/****************/\n");
    printf("/ Jogo de Forca */\n");
    printf("/****************/\n\n");
}

void chuta(char chutes[], int* tentativas){
        char chute;
        printf("Qual letra? ");
        scanf(" %c", &chute);

        chutes[*tentativas] = chute;
        (*tentativas)++;
}

int main(){
    char palavrasecreta[20];
    char chutes[26];
    int tentativas = 0;
    int acertou = 0;
    int enforcou = 0;

    sprintf(palavrasecreta, "MELANCIA");

    abertura();

    do {
        printf("Voce ja deu %d chutes\n", tentativas);

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

        chuta(chutes, &tentativas);

    } while(!acertou && !enforcou);
}