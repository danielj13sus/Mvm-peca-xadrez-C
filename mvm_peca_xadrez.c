#include <stdio.h>

const int PASSOS_TORRE = 5;
const int PASSOS_BISPO = 5;
const int PASSOS_RAINHA = 8;
const int PASSOS_CAVALO_VERTICAL = 2;
const int PASSOS_CAVALO_HORIZONTAL = 1;

void simularMovimentoTorre() {
    printf("--- Movimento da Torre (%d casas) ---\n", PASSOS_TORRE);
    for (int i = 0; i < PASSOS_TORRE; ++i) {
        printf("Direita\n");
    }
    printf("\n");
}

void simularMovimentoBispo() {
    printf("--- Movimento do Bispo (%d casas) ---\n", PASSOS_BISPO);
    int contador = 0;
    while (contador < PASSOS_BISPO) {
        printf("Cima, Direita\n");
        contador++;
    }
    printf("\n");
}

void simularMovimentoRainha() {
    printf("--- Movimento da Rainha (%d casas) ---\n", PASSOS_RAINHA);
    if (PASSOS_RAINHA <= 0) {
        return;
    }
    int contador = 0;
    do {
        printf("Esquerda\n");
        contador++;
    } while (contador < PASSOS_RAINHA);
    printf("\n");
}

void simularMovimentoCavalo() {
    printf("--- Movimento do Cavalo (%d vertical, %d horizontal) ---\n",
           PASSOS_CAVALO_VERTICAL, PASSOS_CAVALO_HORIZONTAL);

    for (int segmento = 0; segmento < 2; ++segmento) {
        if (segmento == 0) {
            int passos_dados = 0;
            while (passos_dados < PASSOS_CAVALO_VERTICAL) {
                printf("Baixo\n");
                passos_dados++;
            }
        } else {
            int passos_dados = 0;
            while (passos_dados < PASSOS_CAVALO_HORIZONTAL) {
                printf("Esquerda\n");
                passos_dados++;
            }
        }
    }
    printf("\n");
}

int main() {
    simularMovimentoTorre();
    simularMovimentoBispo();
    simularMovimentoRainha();
    simularMovimentoCavalo();

    return 0;
}