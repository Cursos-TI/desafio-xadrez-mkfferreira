#include <stdio.h>

#define BISPO_PASSOS 5
#define TORRE_PASSOS 5
#define RAINHA_PASSOS 8

// Função para movimentar o bispo em diagonal superior direita de forma recursiva
void moverBispo(int passos) {
    if (passos == 0) return;
    printf("Diagonal Superior Direita\n");
    moverBispo(passos - 1);
}

// Função para movimentar a torre para a direita de forma recursiva
void moverTorre(int passos) {
    if (passos == 0) return;
    printf("Direita\n");
    moverTorre(passos - 1);
}

// Função para movimentar a rainha para a esquerda de forma recursiva
void moverRainha(int passos) {
    if (passos == 0) return;
    printf("Esquerda\n");
    moverRainha(passos - 1);
}

// Função para movimentar o cavalo em L (baixo e esquerda)
void moverCavalo() {
    for (int i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    int contador = 0;
    while (contador < 1) {
        printf("Esquerda\n");
        contador++;
    }
}

// Função para movimentar o cavalo em L (cima e direita) com múltiplas variáveis
void moverCavaloMestre() {
    for (int i = 0, j = 0; i < 2 || j < 1; i++, j++) {
        if (i < 2) printf("Cima\n");
        if (j < 1) printf("Direita\n");
        if (i == 1 && j == 0) break;
    }
}

int main() {
    printf("Movimento do Bispo:\n");
    moverBispo(BISPO_PASSOS);

    printf("\nMovimento da Torre:\n");
    moverTorre(TORRE_PASSOS);

    printf("\nMovimento da Rainha:\n");
    moverRainha(RAINHA_PASSOS);

    printf("\nMovimento do Cavalo (baixo e esquerda):\n");
    moverCavalo();

    printf("\nMovimento do Cavalo (cima e direita - mestre):\n");
    moverCavaloMestre();

    return 0;
}
