#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

// Função recursiva para fazer os movimentos da Torre
void moverTorreRecursivo(int movimentos) {
    if (movimentos > 0) {
        printf("Direita\n");  // Imprime o movimento da Torre
        moverTorreRecursivo(movimentos - 1);  // Chama a si mesma decrementando a posição
    }
}

// Função recursiva para fazer os movimentos da Rainha
void moverRainhaRecursivo(int movimentos) {
    if (movimentos > 0) {
        printf("Esquerda\n");  // Imprime o movimento da Rainha
        moverRainhaRecursivo(movimentos - 1);  // Chama a si mesma decrementando a posição
    }
}

// Função para fazer os movimentos do Bispo
// Recursividade: Substitua os loops simples que controlam os movimentos da Torre, Bispo e Rainha por funções recursivas. Cada função recursiva deverá simular o movimento da respectiva peça, imprimindo a direção correta a cada casa.
// Bispo com Loops Aninhados: O Bispo deve ser implementado com recursividade, e também com loops aninhados, utilizando o loop mais externo para o movimento vertical, e o mais interno para o movimento horizontal.
void moverBispo(int movimentos) {
    if (movimentos > 0) {
        for(int i = 0; i < 1; i++) {
            printf("Cima\n");  // Imprime o movimento vertical do Bispo
            for(int j = 0; j < 1; j++) {
                printf("Direita\n");  // Imprime o movimento horizontal do Bispo
            }
        }
        moverBispo(movimentos - 1);  // Chama a si mesma decrementando a posição
    }
}

// Função para fazer os movimentos do Cavalo
// Loops Complexos para o Cavalo: Aprimore a movimentação do Cavalo, utilizando loops aninhados com múltiplas variáveis e/ou condições. 
// Você pode usar continue e break para controlar o fluxo do loop de forma mais precisa. 
// O movimento do Cavalo agora será para cima e para a direita, em "L" (duas casas para cima e uma para a direita).
void moverCavalo(int movimentos) {
    for(int i = 0, j = 0; i < movimentos && j < 1; (i < movimentos) ? i++ : j++) {
        if(i < 2) {
            printf("Cima\n");
        }
        else if(j < 1) {
            printf("Direita\n");
        }
    }
}



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
    moverBispo(bispo_movimentos);

    // Implementação de Movimentação da Torre
    // Exibindo os movimentos da Torre
    printf("\n-- Movimentos da Torre:\n");
    // Movimento para direita
    moverTorreRecursivo(torre_movimentos);


    // Implementação de Movimentação da Rainha
    // Exibondo os movimentos da Rainha
    printf("\n-- Movimentos da Rainha:\n");
    // Movimento para Esquerda
    moverRainhaRecursivo(rainha_movimentos);


    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Exibindo os movimentos do cavalo
    printf("\n-- Movimentos do Cavalo:\n");
    moverCavalo(cavalo_movimentos);
 
    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
