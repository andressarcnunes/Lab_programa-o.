#include <stdio.h>

int main() {
    int tem_ingredientes;
    int sabor;
    int tempo_forno = 0;

    printf("=== RECEITA DE BOLO ===\n\n");

    // Passo 1: verificar ingredientes (if / else)
    printf("Voce tem todos os ingredientes? (1 = sim, 0 = nao): ");
    scanf("%d", &tem_ingredientes);

    if (tem_ingredientes == 0) {
        printf("Va comprar os ingredientes e volte depois!\n");
        return 0;
    }
