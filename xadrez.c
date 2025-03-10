#include <stdio.h>

// Definindo constantes para os movimentos das peças
#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8
#define MOVIMENTO_CAVALO_L 1

// Função para mover o Bispo (5 casas na diagonal superior direita)
void moverBispo(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {
        printf("Cima e Direita\n");
    }
}

// Função para mover a Torre (5 casas para a direita)
void moverTorre(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {
        printf("Direita\n");
    }
}

// Função para mover a Rainha (8 casas para a esquerda)
void moverRainha(int movimentos) {
    for (int i = 1; i <= movimentos; i++) {
        printf("Esquerda\n");
    }
}

// Função para mover o Cavalo (movimento em L, para baixo e para a esquerda)
void moverCavalo() {
    // Usando loops aninhados: um 'for' e um 'while'
    for (int i = 0; i < MOVIMENTO_CAVALO_L; i++) {
        printf("Baixo\n");
        
        int j = 0;
        while (j < MOVIMENTO_CAVALO_L) {
            printf("Esquerda\n");
            j++;
        }
    }
}

// Função principal que chama as movimentações das peças
int main() {
    // Mover as peças com as quantidades definidas
    printf("Movimentando o Bispo:\n");
    moverBispo(MOVIMENTO_BISPO);

    printf("\nMovimentando a Torre:\n");
    moverTorre(MOVIMENTO_TORRE);

    printf("\nMovimentando a Rainha:\n");
    moverRainha(MOVIMENTO_RAINHA);

    printf("\nMovimentando o Cavalo:\n");
    moverCavalo();

    return 0;
}
