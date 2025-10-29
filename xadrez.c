#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Variáveis para armazenar a quantidade de movimentos de cada peça
    int torre_movimentos = 5;
    int bispo_movimentos = 5;
    int rainha_movimentos = 8;
    int cavalo_movimentos = 3;
    
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Exibindo os movimentos do Bispo
    printf("-- Movimentos do Bispo:\n");
    // Movimento para Cima-Direita
    int count = 1;
    do {
        printf("Cima\n");
        printf("Direita\n");
        count++;
    } while(count <= bispo_movimentos);


    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Exibindo os movimentos da Torre
    printf("\n-- Movimentos da Torre:\n");
    // Movimento para direita
    for(int i = 1; i <= torre_movimentos; i++) {
        printf("Direita\n");
    }


    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.

    // Exibondo os movimentos da Rainha
    printf("\n-- Movimentos da Rainha:\n");
    // Movimento para Esquerda
    count = 1;
    while(count <= rainha_movimentos) {
        printf("Esquerda\n");
        count++;
    }


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Exibindo os movimentos do cavalo
    printf("\n-- Movimentos do Cavalo:\n");
    count = 1;
    do {
        for(; count <= 2; count++) {
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        count++;
    } while(count <= cavalo_movimentos);
    



    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
