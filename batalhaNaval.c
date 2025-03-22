#include <stdio.h>

#define TAMANHO 10  // Define o tamanho fixo do tabuleiro (10x10)
#define NAVIO 3      // Define o tamanho fixo dos navios (3 posições)

// Inicialização do tabuleiro com zeros representando água.
void inicializarTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            tabuleiro[i][j] = 0;  // Define todas as posições como água (0)
        }
    }
}

// Função para posicionar um navio no tabuleiro
void posicionarNavio(int tabuleiro[TAMANHO][TAMANHO], int linha, int coluna, int horizontal) {
    for (int i = 0; i < NAVIO; i++) {
        if (horizontal) {
            tabuleiro[linha][coluna + i] = NAVIO;  // Posiciona horizontalmente
        } else {
            tabuleiro[linha + i][coluna] = NAVIO;  // Posiciona verticalmente
        }
    }
}

// Função para exibir o tabuleiro no console
void exibirTabuleiro(int tabuleiro[TAMANHO][TAMANHO]) {
    for (int i = 0; i < TAMANHO; i++) {
        for (int j = 0; j < TAMANHO; j++) {
            printf("%d ", tabuleiro[i][j]);  // Imprime cada posição separada por espaço
        }
        printf("\n");  // Nova linha ao final de cada linha da matriz
    }
}

int main() {
    int tabuleiro[TAMANHO][TAMANHO];  // Declara a matriz do tabuleiro
    inicializarTabuleiro(tabuleiro);  // Inicializa o tabuleiro com zeros

    // Posiciona um navio horizontalmente na posição (2,3)
    posicionarNavio(tabuleiro, 2, 3, 1);

    // Posiciona um navio verticalmente na posição (5,6)
    posicionarNavio(tabuleiro, 5, 6, 0);

    // Exibe o tabuleiro atualizado no console
    exibirTabuleiro(tabuleiro);
    
    return 0;
}
