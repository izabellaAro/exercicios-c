#include <stdio.h>

int main()
{
    printf("---- Caixa da loja ABC ----\n");

    float valorCompra, valorFinal, valorParcela;
    int qntParcelas, opcaoPag;

    do {
        printf("Qual o valor da sua compra?\n");
        scanf("%f", &valorCompra);
    } while(valorCompra <= 0);


    do {

        printf("\nOpcoes de Pagamento");
        printf("\nOpcao 1 - A vista com 10%% de Desconto\nOpcao 2 - valor etiqueta em 2x\n");

        if(valorCompra > 100){

            printf("Opcao 3 - de 3 ate 10 vezes com 3%% de juros ao mes\n");
        }

        scanf("%d", &opcaoPag);
        
        switch (opcaoPag)
        {
            case 1:
                valorFinal = valorCompra * 0.9;
                printf("\nO valor com desconto para pagamento a vista e: R$%0.2f", valorFinal);
                break;
            case 2:
                valorFinal = valorCompra;
                valorParcela = valorCompra / 2;
                printf("\nO valor final para pagamento e de: R$%0.2f", valorFinal);
                printf("\nEm duas parcelas de: R$%0.2f", valorParcela);
                break;
            case 3:
                printf("\nQual a quantidade de parcelas?\n");
                scanf("%d", &qntParcelas);
                valorParcela = valorCompra / qntParcelas;
                valorParcela = valorParcela * 1.03;
                valorFinal = valorParcela * qntParcelas;
                printf("\nO valor total com juros para pagamento sera de: R$%0.2f", valorFinal);
                printf("\nO valor de cada parcela sera de: R$%0.2f", valorParcela);
                break;
            
            default:
                printf("\nOpcao invalida\n");
                break;
        }
    } while (opcaoPag <= 0 || opcaoPag > 3);
}
