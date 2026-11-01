#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
    srand(time(NULL));
    int num, palpite, dificuldade, limite, continuar;

    do {
        printf("\n=== Jogo de Adivinhacao ===\n");
        printf("Escolha o nivel de dificuldade:\n");
        printf("1 - Facil (1 a 5)\n");
        printf("2 - Medio (1 a 20)\n");
        printf("3 - Dificil (1 a 100)\n");
        printf("Opcao: ");
        scanf("%d", &dificuldade);

        switch (dificuldade) {
            case 1:
                limite = 5;
                break;
            case 2:
                limite = 20;
                break;
            case 3:
                limite = 100;
                break;
            default:
                printf("Nivel invalido. Tente novamente.\n");
                continue;
        }

        num = (rand() % limite) + 1;
        printf("Informe um valor de 1 ate %d: ", limite);
        scanf("%d", &palpite);

        if (palpite > num) {
            printf("Seu palpite e maior que o numero sorteado.\n");
        } else if (palpite < num) {
            printf("Seu palpite e menor que o numero sorteado.\n");
        } else {
            printf("Parabens! Seu palpite está correto!.\n");
        }

        printf("O numero sorteado era: %d\n", num);
        printf("\nDeseja continuar jogando? (1 = Sim / 0 = Nao): ");
        scanf("%d", &continuar);
    } while (continuar == 1);

    printf("Obrigado por jogar!\n");
    return 0;
}