#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int numeroJogador, numeroComputador, resultado;
    char tipocomparacao;

    srand (time(0));
    numeroComputador = rand() % 100 + 1;

    printf("Bem-vindo ao jogo Maior, Menor ou Igual!\n");
    printf("Você deve escolher um número e um tipo de comparação.\n");
    printf("M. Maior\n");
    printf("N. Menor\n");
    printf("I. igual\n");

    printf("Escolha a comparação:\n");
    scanf("%c", &tipocomparacao);

    printf("Digite seu número (entre 1 e 100):\n");
    scanf("%d", &numeroJogador);

    //printf("O número do computador é: %d", numeroComputador);

    switch (tipocomparacao)
    {
    case 'M':
    case 'm':
        printf("Você escolheu a opção Maior!\n");
        resultado = numeroJogador > numeroComputador ? 1 : 0;
        break;
    case 'N':
    case 'n':
        printf("Você escolheu a opção Menor!\n");
        resultado = numeroJogador < numeroComputador ? 1 : 0;
        break;
    case 'I':
    case 'i':
        printf("Você escolheu a opção Igual!\n");
        resultado = numeroJogador == numeroComputador ? 1 : 0;        
        break;
    default:
        printf("Opção de jogo inválida\n");
        break;
    }

    if (resultado == 1){
        printf("Parabéns, você ganhou!\n");
    }   else {
            printf("Infelizmente, você perdeu!\n");
    }
    
    printf("O número do computador é: %d, e o do Jogador é: %d", numeroComputador, numeroJogador);
}