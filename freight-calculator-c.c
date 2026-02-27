#include <stdio.h>
#include <time.h>


int main(void) {
    // Declaracao de variaveis
    int NCM, regiao;
    float precoProduto = 0.0, precoFrete = 0.0, precoTotal = 0.0;
    time_t agora = time(0);
    struct tm *tempoLocal = localtime(&agora);
    struct tm dataEntrega = *tempoLocal; // Copia da data atual para a data de entrega

    // Tela Inicial do programa
    printf("\nSIMULACAO DE PRECO E PEDIDO DE UMA LOJA ONLINE");
    printf("\n\n| NCM |  NOME   | PESO(kg) |  PRECO  |");
    printf("\n| 001 | CAMISA  |   0.3    | R$15,00 |");
    printf("\n| 002 | MOLETOM |   0.5    | R$30,00 |");
    printf("\n| 003 | CALCA   |   0.3    | R$20,00 |");

    // Entrada do NCM do produto desejado
    printf("\n\nESCREVA O NCM DO PRODUTO DESEJADO ABAIXO:\n");
    scanf("%d", &NCM);
    system("cls");  // Limpa a tela (funciona apenas em Windows)

    // Definir preco do produto com base no NCM
    switch (NCM) {
        case 1:
            printf("\nVoce escolheu CAMISA. Peso: 0.3 kg, Preco: R$15,00\n");
            precoProduto = 15.00;
            break;
        case 2:
            printf("\nVoce escolheu MOLETOM. Peso: 0.5 kg, Preco: R$30,00\n");
            precoProduto = 30.00;
            break;
        case 3:
            printf("\nVoce escolheu CALCA. Peso: 0.3 kg, Preco: R$20,00\n");
            precoProduto = 20.00;
            break;
        default:
            printf("\nNCM invalido! Escolha um codigo de 1 a 3.\n");
            return 1; // Encerra o programa caso o NCM seja invalido
    }

    // Solicita a regiao de entrega
    printf("\nEscolha a regiao de entrega:\n");
    printf("[1] NORTE - R$15,00 ---- 10 dias\n");
    printf("[2] SUL - R$18,00 ---- 7 dias\n");
    printf("[3] SUDESTE - R$14,00 ---- 5 dias\n");
    printf("[4] NORDESTE - R$24,00 ---- 12 dias\n");
    printf("Digite o numero correspondente a regiao: ");
    scanf("%d", &regiao);
    system("cls");

    // Definir o preco do frete e prazo de entrega com base na regiao
    int diasEntrega = 0;
    switch (regiao) {
        case 1:
            precoFrete = 15.00;
            diasEntrega = 10;
            printf("\nRegiao de entrega: NORTE. Frete: R$15,00 ---- 10 dias\n");
            break;
        case 2:
            precoFrete = 18.00;
            diasEntrega = 7;
            printf("\nRegiao de entrega: SUL. Frete: R$18,00 ---- 7 dias\n");
            break;
        case 3:
            precoFrete = 14.00;
            diasEntrega = 5;
            printf("\nRegiao de entrega: SUDESTE. Frete: R$14,00 ---- 5 dias\n");
            break;
        case 4:
            precoFrete = 24.00;
            diasEntrega = 12;
            printf("\nRegiao de entrega: NORDESTE. Frete: R$24,00 ---- 12 dias\n");
            break;
        default:
            printf("\nRegiao invalida! Escolha um numero de 1 a 4.\n");
            return 1; // Encerra o programa caso a regiao seja invalida
    }

    // Calculo do preco total da compra
    precoTotal = precoProduto + precoFrete;

    // Calcula a data de entrega somando os dias de entrega
    dataEntrega.tm_mday += diasEntrega;
    mktime(&dataEntrega); // Ajusta a data para a data futura

    // Exibicao do resumo da compra
    printf("\n===== Resumo da Compra =====\n");
    printf("Preco do Produto: R$%.2f\n", precoProduto);
    printf("Preco do Frete: R$%.2f\n", precoFrete);
    printf("Preco Total da Compra: R$%.2f\n", precoTotal);
    printf("Data e Hora da Compra: %02d/%02d/%04d %02d:%02d\n",
           tempoLocal->tm_mday, tempoLocal->tm_mon + 1, 1900 + tempoLocal->tm_year,
           tempoLocal->tm_hour, tempoLocal->tm_min);
    printf("Data Prevista para Entrega: %02d/%02d/%04d\n",
           dataEntrega.tm_mday, dataEntrega.tm_mon + 1, 1900 + dataEntrega.tm_year);

    return 0;
}