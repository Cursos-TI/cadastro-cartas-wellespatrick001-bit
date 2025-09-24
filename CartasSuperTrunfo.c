#include <stdio.h>


int main(){

    //carta 1
    char Carta1;
    char Estado[15];
    char Código [5];
    char NomeDaCidade[20];
    int Populacao;
    float Área;
    float PIB;
    int Pontos_turisticos;
    float Densidade;
    float PIBPERCAPITA;

    
    printf("Carta1: \n");

    printf("Estado: ");
    scanf("%s", &Estado);

    printf("Código: \n");
    scanf("%s", Código);
   
    printf("Nome da cidade: \n");
    scanf("%s", &NomeDaCidade);

    printf("Populacao: \n");
    scanf("%d", &Populacao);

    printf("Área: \n");
    scanf("%f", &Área);
    
    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos);
    
    Densidade = (float) Populacao / Área;
    printf("Densidade populacional: %.2f hab./km²\n", Densidade);

    PIBPERCAPITA = (float) PIB / Populacao;
    printf("PIB per Capita: %.2f\n", PIBPERCAPITA);




return 0;
}