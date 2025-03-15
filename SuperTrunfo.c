#include <stdio.h>
int main(){
    
    int nrCarta, nrPontosTuristicos;
    unsigned long int populacao;
    unsigned long int populacao2;
    char estado[3];
    char nomeCidade [10];
    char codigo[3];
    float areakm;
    float pib;
    float densidadePopulacional, pibCapita;
    int nrCarta2, nrPontosTuristicos2;
    char estado2[3];
    char nomeCidade2 [10];
    char codigo2[3];
    float areakm2;
    float pib2;
    float densidadePopulacional2, pibCapita2;
    float superPoder, superPoder2;
    
    printf ("Digite o número da carta:\n ");
    scanf ("%d", &nrCarta);

    printf ("Digite o estado da carta:\n ");
    scanf ("%s", estado);

    printf ("Digite o código da carta:\n ");
    scanf ("%s", codigo);

    printf ("Digite o nome da cidade:\n ");
    scanf ("%s", nomeCidade);

    printf ("Digite qual o tamanho da população:\n ");
    scanf ("%lu", &populacao);

    printf ("Digite a área em km² dessa cidade:\n ");
    scanf ("%f", &areakm);

    printf ("Digite o PIB dessa cidade:\n ");
    scanf("%f", &pib);

    printf ("Digite o número de pontos turísticos da cidade:\n ");
    scanf ("%d", &nrPontosTuristicos);

    densidadePopulacional = populacao/areakm;
    pibCapita = pib/populacao;
    superPoder = populacao+areakm+pib+nrPontosTuristicos+pibCapita+densidadePopulacional;

    printf("Carta %d\n", nrCarta);
    printf("Estado: %s\n", estado);
    printf("Código: %s%s\n", estado,codigo);
    printf("Nome da Cidade: %s\n",nomeCidade);
    printf("População: %lu\n", populacao);
    printf("Área: %.2f km²\n", areakm);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", nrPontosTuristicos);
    printf("Densidade populacional é de %.2f hab/km²\n",densidadePopulacional);
    printf("O PIB per capita é de: %.2f reais\n", (float)pibCapita);
    printf("O super poder é: %f\n", superPoder);

    printf("------------------------------------------------------------------------------------------------------\n");

    printf ("Digite o número da carta:\n ");
    scanf ("%d", &nrCarta2);

    printf ("Digite o estado da carta:\n ");
    scanf ("%s", estado2);

    printf ("Digite o código da carta:\n ");
    scanf ("%s", codigo2);

    printf ("Digite o nome da cidade:\n ");
    scanf ("%s", nomeCidade2);

    printf ("Digite qual o tamanho da população:\n ");
    scanf ("%lu", &populacao2);

    printf ("Digite a área em km² dessa cidade:\n ");
    scanf ("%f", &areakm2);

    printf ("Digite o PIB dessa cidade:\n ");
    scanf("%f", &pib2);

    printf ("Digite o número de pontos turísticos da cidade:\n ");
    scanf ("%d", &nrPontosTuristicos2);

    densidadePopulacional2 = populacao2/areakm2;
    pibCapita2 = pib2/populacao2;
    superPoder2 = populacao2+areakm2+pib2+nrPontosTuristicos2+pibCapita2+densidadePopulacional2;

    printf("Carta %d\n", nrCarta2);
    printf("Estado: %s\n", estado2);
    printf("Código: %s%s\n", estado2,codigo2);
    printf("Nome da Cidade: %s\n",nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", areakm2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf ("Número de Pontos Turísticos: %d\n", nrPontosTuristicos2);
    printf("Densidade populacional é de %.2f hab/km²\n",densidadePopulacional2);
    printf("O PIB per capita é de: %.2f reais\n", (float)pibCapita2);
    printf("O super poder é: %f\n", superPoder2);

    printf("------------------------------------------------------------------------------------------------------\n");

    printf("Comparação das Cartas\n");
    
    unsigned long int resultadoPopulacao = populacao > populacao2;
    float resultadoArea = areakm > areakm2;
    float resultadoPib = pib > pib2;
    int resultadoPontosTuristicos = nrPontosTuristicos > nrPontosTuristicos2;
    float resultadoDensidadePopulacional = densidadePopulacional > densidadePopulacional2;
    float resultadoPibPerCapita = pibCapita > pibCapita2;
    float resultadoSuperPoder = superPoder > superPoder2;

    int quantidadeAtributos;
    printf("Quantos atributos você gostaria de comparar, digite uma quantidade:\n");
    scanf("%d",&quantidadeAtributos);
    for (size_t i = 0; i < quantidadeAtributos; i++)
    {
        int comparativo;
        printf ("------------------------------------------------------------------------------------------------------\n");
        printf ("Comparativo de atributos - Digite um número de 1 a 6 para escolher:\n");
        printf ("1 - Comparar nomes das localidades\n");
        printf ("2 - Comparar população das localidades\n");
        printf ("3 - Comparar área das localidades\n");
        printf ("4 - Comparar pib das localidades\n");
        printf ("5 - Comparar número de pontos turísticos das localidades\n");
        printf ("6 - Comparar densidade demográfica das localidades\n");
        scanf ("%d",&comparativo);
        switch (comparativo)
        {
            case 1:
                printf ("Nome da localidade 01: %s\n",nomeCidade);
                printf ("Nome da localidade 02: %s\n",nomeCidade2);
                break;
            case 2:
                if(populacao>populacao2){
                    printf("Localidade 01 é vencedora, pois sua população é maior\n");
                }else if(populacao2>populacao){
                    printf("Localidade 02 é vencedora, pois sua população é maior\n");
                }else
                    printf("Empate\n");
                    break;
            case 3:
                if(areakm>areakm2){
                    printf("Localidade 01 é vencedora, pois sua área em KM é maior\n");
                }else if(areakm2>areakm){
                    printf("Localidade 02 é vencedora, pois sua área em KM é maior\n");
                }else
                    printf("Empate\n");
                    break;
            case 4:
                if(pib>pib2){
                    printf("Localidade 01 é vencedora, pois seu PIB é maior\n");
                }else if(pib2>pib){
                    printf("Localidade 02 é vencedora, pois seu PIB é maior\n");
                }else
                    printf("Empate\n");
                    break;
            case 5:
                if(nrPontosTuristicos>nrPontosTuristicos2){
                    printf("Localidade 01 é vencedora, pois seu número de pontos turísticos é maior\n");
                }else if(nrPontosTuristicos2>nrPontosTuristicos){
                    printf("Localidade 02 é vencedora, pois seu número de pontos turísticos é maior\n");
                }else
                    printf("Empate\n");
                    break;
            case 6:
                if(densidadePopulacional2>densidadePopulacional){
                    printf("Localidade 01 é vencedora, pois sua densidade populacional é menor\n");
                }else if(densidadePopulacional>densidadePopulacional2){
                    printf("Localidade 02 é vencedora, pois sua densidade populacional é menor\n");
                }else
                    printf("Empate\n");
                    break;
            default:
                printf("Opção inválida\n");
                break;
        }
    }  
    printf("************VENCEDORA************\n");
    if(superPoder>superPoder2){
        printf("LOCALICADE 01: %s, é a vencedora\n",nomeCidade);
    }else if(superPoder2>superPoder){
        printf("LOCALIDADE 02: %s, é a vencedora\n",nomeCidade2);
    }else
        printf("---EMPATE---");
    return 0;
}