int main(){

    int codPrato, codSobremesa, codSuco, calorias, totalCalorias;

    printf("------Cardapio------");

    printf("\nPratos: \n\t\t 1 - Vegetariano \n\t\t 2 - Peixe \n\t\t 3 - Frango \n\t\t 4 - Carne \n\t\t");

    printf("Digite o codigo do prato:");
    scanf("%d", &codPrato);

    switch(codPrato){
        case 1:
        totalCalorias = 180;
        break;
        case 2:
        totalCalorias = 230;
        break;
        case3:
        totalCalorias = 250;
        break;
        case 4:
        totalCalorias = 350;
        break;
        default:
        printf("Codigo do prato invalido - siga para a sobremesa");
    }
    printf("\nSobremesas: \n\t\t 1 - Abacaxi \n\t\t 2 - Sorvete Diet \n\t\t 3 - Mouse Diet \n\t\t 4 - Mouse Chocolate \n\t\t");

    printf("Digite o codigo da sobremesa:");
    scanf("%d", &codSobremesa);

    switch(codSobremesa){
        case 1:
        //totalCalorias = totalCalorias + 75;
        totalCalorias += 75;
        break;
        case 2:
        totalCalorias+= 110;
        break;
        case 3:
        totalCalorias+= 170;
        break;
        case 4:
        totalCalorias+= 200;
        break;
        default:
        printf("Codigo da sobremesa invalido -  siga para o suco");
    }
    printf("\nSucos: \n\t\t 1 - cha \n\t\t 2 - Laranja \n\t\t 3 - Melao \n\t\t 4 - Refrigerante Diet \n\t\t");

    printf("Digite o codigo do suco:");
    scanf("%d", &codSuco);
    
    switch(codSuco){
        case 1:
        //totalCalorias = totalCalorias + 75;
        totalCalorias += 20;
        break;
        case 2:
        totalCalorias+= 70;
        break;
        case 3:
        totalCalorias+= 100;
        break;
        case 4:
        totalCalorias+= 65;
        break;
        default:
        printf("Codigo do suco invalido");
}
    printf("Total de calorias da refeicao: %d", totalCalorias);
}
