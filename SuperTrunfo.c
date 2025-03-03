#include <stdio.h>


int main(){
    int nrCarta, nrPontosTuristicos, populacao;
    char estado[3];
    char nomeCidade [10];
    char codigo[3];
    float areakm;
    float pib;
    int nrCarta2, nrPontosTuristicos2, populacao2;
    char estado2[3];
    char nomeCidade2 [10];
    char codigo2[3];
    float areakm2;
    float pib2;
    
    printf ("Digite o número da carta:\n ");
    scanf ("%d", &nrCarta);

    printf ("Digite o estado da carta:\n ");
    scanf ("%s", estado);

    printf ("Digite o código da carta:\n ");
    scanf ("%s", codigo);

    printf ("Digite o nome da cidade:\n ");
    scanf ("%s", nomeCidade);

    printf ("Digite qual o tamanho da população:\n ");
    scanf ("%d", &populacao);

    printf ("Digite a área em km² dessa cidade:\n ");
    scanf ("%f", &areakm);

    printf ("Digite o PIB dessa cidade:\n ");
    scanf("%f", &pib);

    printf ("Digite o número de pontos turísticos da cidade:\n ");
    scanf ("%d", &nrPontosTuristicos);

    printf("Carta %d\n", nrCarta);
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado,codigo);
    printf("Nome da Cidade: %s\n",nomeCidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", areakm);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf ("Número de Pontos Turísticos: %d\n", nrPontosTuristicos);

    printf ("---------------------------------------------------------------------\n");

    printf ("Digite o número da carta:\n ");
    scanf ("%d", &nrCarta2);

    printf ("Digite o estado da carta:\n ");
    scanf ("%s", estado2);

    printf ("Digite o código da carta:\n ");
    scanf ("%s", codigo2);

    printf ("Digite o nome da cidade:\n ");
    scanf ("%s", nomeCidade2);

    printf ("Digite qual o tamanho da população:\n ");
    scanf ("%d", &populacao2);

    printf ("Digite a área em km² dessa cidade:\n ");
    scanf ("%f", &areakm2);

    printf ("Digite o PIB dessa cidade:\n ");
    scanf("%f", &pib2);

    printf ("Digite o número de pontos turísticos da cidade:\n ");
    scanf ("%d", &nrPontosTuristicos2);

    printf("Carta %d\n", nrCarta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2,codigo2);
    printf("Nome da Cidade: %s\n",nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", nrPontosTuristicos2);

    
    return 0;

}