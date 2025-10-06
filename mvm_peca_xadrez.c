#include <stdio.h>

const int PASSOS_TORRE = 5;
const int PASSOS_BISPO = 5;
const int PASSOS_RAINHA = 8;
const int PASSOS_CAVALO_VERTICAL = 2;
const int PASSOS_CAVALO_HORIZONTAL = 1;

void moverTorreRecursivamente(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Direita\n");
    moverTorreRecursivamente(passos_restantes - 1);
}

void moverBispoRecursivamente(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Cima, Direita\n");
    moverBispoRecursivamente(passos_restantes - 1);
}

void moverRainhaRecursivamente(int passos_restantes) {
    if (passos_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivamente(passos_restantes - 1);
}

void simularMovimentoBispoAninhado() {
    printf("--- Movimento do Bispo (Loops Aninhados, %d casas) ---\n", PASSOS_BISPO);
    for (int passo_diagonal = 0; passo_diagonal < PASSOS_BISPO; ++passo_diagonal) {
        for (int i = 0; i < 1; ++i) {
             printf("Cima, Direita\n");
        }
    }
    printf("\n");
}

void simularMovimentoCavaloComplexo() {
    printf("--- Movimento do Cavalo (Loops Complexos, %d cima, %d direita) ---\n",
           PASSOS_CAVALO_VERTICAL, PASSOS_CAVALO_HORIZONTAL);

    for (int segmento = 0; segmento < 2; ++segmento) {
        int limite_passos = (segmento == 0) ? PASSOS_CAVALO_VERTICAL : PASSOS_CAVALO_HORIZONTAL;

        for (int passo = 0; passo < limite_passos; ++passo) {
            if (segmento == 0) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
            if (passo >= 2) {
                 break;
            }
        }
    }
    printf("\n");
}

int main() {
    printf("--- Movimento da Torre (Recursivo, %d casas) ---\n", PASSOS_TORRE);
    moverTorreRecursivamente(PASSOS_TORRE);
    printf("\n");

    printf("--- Movimento da Rainha (Recursivo, %d casas) ---\n", PASSOS_RAINHA);
    moverRainhaRecursivamente(PASSOS_RAINHA);
    printf("\n");

    printf("--- Movimento do Bispo (Recursivo, %d casas) ---\n", PASSOS_BISPO);
    moverBispoRecursivamente(PASSOS_BISPO);
    printf("\n");
    simularMovimentoBispoAninhado();
    
    simularMovimentoCavaloComplexo();

    return 0;
}