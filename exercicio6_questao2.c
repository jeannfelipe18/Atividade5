#include <stdio.h>


int main() {
    int codigo;
    int quantidade;
    float precoUnitario;
    float valorTotal;


    printf("Digite o código do item pedido: ");
    scanf("%d", &codigo);


    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);


    switch (codigo) {
        case 100:
            precoUnitario = 10.10;
            break;
        case 101:
            precoUnitario = 8.30;
            break;
        case 102:
            precoUnitario = 8.50;
            break;
        case 103:
            precoUnitario = 12.50;
            break;
        case 104:
            precoUnitario = 13.25;
            break;
        default:
            printf("Código de item inválido!\n");
            return 1; // Sai do programa com erro
    }


    valorTotal = precoUnitario * quantidade;
    printf("Valor a ser pago: R$ %.2f\n", valorTotal);


    return 0;
}
