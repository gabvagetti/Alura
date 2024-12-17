#include <stdio.h>

//imprime cabeçalho do jogo
int main (){
    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhacao *\n");
    printf("*****************************************\n");

    int numerosecreto = 42;
    int chute;
    int ganhou = 0;
    int tentativas = 1;

    while (ganhou == 0) { // enquanto não ganhou
    //for(int i = 1; i<=numerodetentativas; i++){//estrutura de repetição // contador/ variável i
     
        printf("Tentativa %d\n", tentativas);
        printf("Qual eh o seu chute? ");
        scanf("%d", &chute); // % lê o número que o usuário digitou. & Armazena para a variável
        printf("Seu chute foi %d\n", chute); // % busca o valor armazenado em "chute"
        
        if (chute <0){
            printf("Voce nao pode chutar numeros negativos!\n");
            continue; // continua o bloco anterior.
        }

        int acertou = chute == numerosecreto;
        int maior = chute > numerosecreto;

        if(acertou) { // passar a condição
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo! Voce voce eh um bom jogador!\n");
            printf("-----------------------------------------\n");
            ganhou = 1; // repete enquando ganhou = 0, quando for 1, quebra o loop e o código continua.
        }
            else if(maior) {
                printf("Seu chute foi maior que o numero secreto.\n");
                printf("-----------------------------------------\n");
            }
            else {
                printf("Seu chute foi menor que o numero secreto.\n");
                printf("-----------------------------------------\n");
            }
            tentativas++;
    }
    printf("Fim de jogo!\n");
    printf("Voce acertou em %d tentativas!", tentativas-1);
}