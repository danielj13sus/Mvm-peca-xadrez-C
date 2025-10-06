#include <stdio.h>

const int PASSOS_TORRE = 5;
const int PASSOS_BISPO = 5;
const int PASSOS_RAINHA = 8;

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

int main() {
    simularMovimentoTorre();
    simularMovimentoBispo();
    simularMovimentoRainha();

    return 0;
}