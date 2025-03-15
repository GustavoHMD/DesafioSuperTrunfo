#include <stdio.h>
void movimentoTorre(int torre){
    printf ("*********************************************************************\n");
    printf("---Movimentação Torre---\n");
    do {
        printf ("Direita Torre %d\n",torre);
        torre++;
    }while(torre<6);
}
void movimentoBispo(int bispo){
    printf ("*********************************************************************\n");
    printf("---Movimentação Bispo---\n");
    int quantidadeBispo;
    int direcaoBispo, cimaBaixoBispo;
    printf("Qual a quantidade de casa o bispo irá mover? Digite: \n");
    scanf ("%d",&quantidadeBispo);
    printf("Qual a direção que o bispo irá mover? Digite: 1- Para direita / 2- Para esquerda\n");
    scanf("%d",&direcaoBispo);
    printf("O Bispo irá se mover para cima ou para baixo? Digite: 1- Para cima / 2- Para baixo\n");
    scanf("%d",&cimaBaixoBispo);
    for (int i = 1; i <= quantidadeBispo; i++)
    {
        for (int j = 0; j < quantidadeBispo; j++)
        {
           if(direcaoBispo==1){
            printf("casa para a direita\n");
           }else{
            printf("casa para a esquerda\n");
           }break;
        }
        
        if(cimaBaixoBispo==1){
            printf("casas para cima\n");
        }else{
            printf("casas para baixo\n");
        }
    }
}
void movimentoRainha(int rainha){
    printf ("*********************************************************************\n");
    printf("---Movimentação Rainha---\n");
    while(rainha<=8){
        printf("Rainha %d\n",rainha);
        rainha++;
    }
}
void movimentoCavalo(int cavalo){
    printf ("*********************************************************************\n");
    printf("---Movimentação Cavalo---\n");
    int movimentoCavalo = 1;
    int direcaoCavalo, cimaBaixoCavalo;
    printf("Qual direção o cavalo irá se mover? Digite: 1- Esquerda / 2-Direita\n");
    scanf("%d",&direcaoCavalo);
    printf("O Cavalo irá se mover para cima ou para baixo? Digite: 1- Para cima / 2- Para baixo\n");
    scanf("%d",&cimaBaixoCavalo);
    for (int i = 0; i <1 ; i++) 
    {  
        for (int j = 0; j < 2; j++) //movimento horizontal
        {
            if(cimaBaixoCavalo==1){
                printf("Cima\n");
            }else{
                printf("Baixo\n");
            }
        }
    if(direcaoCavalo==1){
        printf("Esquerda\n");
        }else{
        printf("Direita\n");
        }   
    }
    
}
int main (){
    int torre,bispo, rainha, cavalo;

    movimentoTorre(torre);
    movimentoBispo(bispo);
    movimentoRainha(rainha);
    movimentoCavalo(cavalo);
    
    return 0;
}