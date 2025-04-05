#include <stdio.h>

void movertorre(int casastorre){
    if (casastorre > 0){
        printf ("Direita\n");
        movertorre(casastorre - 1);
    }
}
void moverrainha( int casasrainha){
    if (casasrainha > 0){
        printf("Esquerda\n");
        moverrainha(casasrainha - 1);
    }
}
void moverbispo(int casasbispo){
    if (casasbispo > 0){
        for (int i = 0; i < 1; i++){
            printf("Direita\n");
                for(int j = 0; j < 1; j++){
                    printf("Cima\n");
                }
            }
        moverbispo(casasbispo - 1);
    }
}

int main() {
    int entrada;
    int cavalo = 0;

    printf("Selecione a peça que deseja mexer:\n");
    printf("1. Cavalo\n2. Torre\n3. Bispo\n4. Rainha\n");
    scanf("%d", &entrada);

    switch(entrada) {
        case 1:
            while (cavalo < 2) {
                printf("Esquerda\n");
                cavalo ++; 
            } for(int j=0; j < 1; j++){
                    printf("Baixo\n");
            }
            break;
        case 2:
            movertorre(5);
            
            break;

        case 3:
            moverbispo (5);
            break;

        case 4:
           moverrainha(8);
            break;

        default:
            printf("Opção inválida, tente novamente\n");
    }

    return 0;
}
