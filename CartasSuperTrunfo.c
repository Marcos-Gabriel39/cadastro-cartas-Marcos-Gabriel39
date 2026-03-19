#include <stdio.h>

int main(){

    char estado,estado2;
    char nome[20],codigo[20],nome2[20],codigo2[20];
    int populacao,turismo,populacao2,turismo2;
    float area,pib,area2,pib2;

    printf("\nDigite as informações da carta 1\n");
    printf("Digite uma letra de 'A' a 'h': ");
    scanf(" %c",&estado);

    printf("Digite a letra do estado seguido de um digito: ");
    scanf(" %s",&codigo);

    printf("Digite o nome da cidade: ");
    scanf(" %s",&nome);

    printf("Digite a população da cidade: ");
    scanf(" %d",&populacao);

    printf("Digite a área da cidade(em km²): ");
    scanf(" %f",&area);

    printf("Digite o PIB(Produto Interno Bruto) da ciadade: ");
    scanf(" %f",&pib);

    printf("Digite o numero de pontos turísticos na cidade: ");
    scanf(" %i",&turismo);


    printf("\nDigite as informações da carta 2\n");
    printf("Digite uma letra de 'A' a 'h': ");
    scanf(" %c",&estado2);

    printf("Digite a letra do estado seguido de um digito: ");
    scanf(" %s",&codigo2);

    printf("Digite o nome da cidade: ");
    scanf(" %s",&nome2);

    printf("Digite a população da cidade: ");
    scanf(" %d",&populacao2);

    printf("Digite a área da cidade(em km²): ");
    scanf(" %f",&area2);

    printf("Digite o PIB(Produto Interno Bruto) da ciadade: ");
    scanf(" %f",&pib2);

    printf("Digite o numero de pontos turísticos na cidade: ");
    scanf(" %i",&turismo2);

    printf("\nCarta 1:\n");
    printf("Estado: %c\n",estado);
    printf("Codigo: %s\n",codigo);
    printf("Nome da cidade: %s\n",nome);
    printf("População: %d\n",populacao);
    printf("Área: %f\n",area);
    printf("PIB: %f\n",pib);
    printf("Numero de pontos turísticos: %i",turismo);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n",estado2);
    printf("Codigo: %s\n",codigo2);
    printf("Nome da cidade: %s\n",nome2);
    printf("População: %d\n",populacao2);
    printf("Área: %f\n",area2);
    printf("PIB: %f\n",pib2);
    printf("Numero de pontos turísticos: %i",turismo2);

    return 0;

}