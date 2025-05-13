#include <stdio.h>

int main() {
    int movimentosTorre, movimentosBispo, movimentosRainha;

    // Entrada do usuário para cada peça
    printf("Digite o número de casas para a Torre mover para a direita: \n");
    scanf("%d", &movimentosTorre);

    printf("Digite o número de casas para o Bispo mover na diagonal (cima/direita): \n");
    scanf("%d", &movimentosBispo);

    printf("Digite o número de casas para a Rainha mover para a esquerda: \n");
    scanf("%d", &movimentosRainha);

    // Movimento da Torre (for)
    printf("\nTorre (%d casas para a direita):\n", movimentosTorre);
    for (int i = 0; i < movimentosTorre; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (while)
    printf("\nBispo (%d casas na diagonal):\n", movimentosBispo);
    int contadorBispo = 0;
    while (contadorBispo < movimentosBispo) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha (do-while)
    printf("\nRainha (%d casas para a esquerda):\n", movimentosRainha);
    int contadorRainha = 0;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    return 0;
}
