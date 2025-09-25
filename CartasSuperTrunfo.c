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

    
    printf("Carta 1: \n");

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

    PIBPERCAPITA = (float) Populacao / PIB;

    printf("PIB per Capita: %.2f reais\n", PIBPERCAPITA);


    // CARTA 2

    char Carta2;
    char Estado2[15];
    char Código2 [5];
    char NomeDaCidade2[20];
    int Populacao2;
    float Área2;
    float PIB2;
    int Pontos_turisticos2;
    float Densidade2;
    float PIBPERCAPITA2;


    printf("Carta 2: \n");

    printf("Estado: ");
    scanf("%s", &Estado2);

    printf("Código: \n");
    scanf("%s", Código2);
   
    printf("Nome da cidade: \n");
    scanf("%s", &NomeDaCidade2);

    printf("Populacao: \n");
    scanf("%d", &Populacao2);

    printf("Área: \n");
    scanf("%f", &Área2);
    
    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos2);
    
    Densidade2 = (float) Populacao2 / Área2;

    printf("Densidade populacional: %.2f hab./km²\n", Densidade2);

    PIBPERCAPITA2 = (float) Populacao2 / PIB2;

    printf("PIB per Capita: %.2f reais\n", PIBPERCAPITA2);


return 0;
}