#include <stdio.h>
#define NUMERO_DE_TENTATIVAS 5 // quando quer usar uma Constante (ex.: numero de tentativas no jogo)

//imprime cabeçalho do jogo
int main (){
    printf("*****************************************\n");
    printf("* Bem vindo ao nosso jogo de advinhacao *\n");
    printf("*****************************************\n");

    int numerosecreto = 42;
    int numerodetentativas = 5;
    int chute;
    
    for(int i = 1; i<=numerodetentativas; i++){//estrutura de repetição // contador/ variável i
     
        printf("Tentativa %d de %d\n", i, numerodetentativas);
        printf("Qual eh o seu chute? ");
        scanf("%d", &chute); // % lê o número que o usuário digitou. & Armazena para a variável
        printf("Seu chute foi %d\n", chute); // % busca o valor armazenado em "chute"

        int acertou = chute == numerosecreto;

        if(acertou) { // passar a condição
            printf("Parabens! Voce acertou!\n");
            printf("Jogue de novo! Voce voce eh um bom jogador!\n");
        
            break; // FOR parar de executar, pq acertou
        }
        else{

            int maior = chute > numerosecreto;

            if(maior) {
                printf("Seu chute foi maior que o numero secreto.\n");
            }else{
                printf("Seu chute foi menor que o numero secreto.\n");
            }
        }
    }
    printf("Fim de jogo!\n");
}