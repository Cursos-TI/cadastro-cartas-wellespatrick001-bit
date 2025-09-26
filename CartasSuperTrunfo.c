#include <stdio.h>


int main(){

    //carta 1

    
    char Estado[15];
    char Código [5];
    char NomeDaCidade[20];
    unsigned int Populacao;
    float Área;
    float PIB;
    int Pontos_turisticos;
    float Densidade;
    float PIBPERCAPITA;
    float InversoDensi;
    float SuperPoder;
    
    printf("Carta 1: \n");

    printf("Estado: ");
    scanf("%s", &Estado);

    printf("Código: \n");
    scanf("%s", Código);
   
    printf("Nome da cidade: \n");
    scanf("%s", &NomeDaCidade);

    printf("Populacao: \n");
    scanf("%d", &Populacao);

    printf("Área em km²: \n");
    scanf("%f", &Área);
    
    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos turisticos: \n");
    scanf("%d", &Pontos_turisticos);
    


    Densidade = (float) Populacao / Área;
    
    PIBPERCAPITA = (float) Populacao / PIB;
    


    printf("Densidade populacional: %.2f hab./km²\n", Densidade);

    printf("PIB per Capita: %.2f reais\n", PIBPERCAPITA);


    InversoDensi = Densidade / 1;
    
    SuperPoder = (float) Populacao + Área + PIB + Pontos_turisticos + PIBPERCAPITA + InversoDensi;
    printf("Supoder Poder: %.2f\n", SuperPoder);


    // CARTA 2

    
    char Estado2[15];
    char Código2 [5];
    char NomeDaCidade2[20];
    unsigned int Populacao2;
    float Área2;
    float PIB2;
    int Pontos_turisticos2;
    float Densidade2;
    float PIBPERCAPITA2;
    float InversoDensi2;
    float SuperPoder2;

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
    PIBPERCAPITA2 = (float) Populacao2 / PIB2;

    printf("Densidade populacional: %.2f hab./km²\n", Densidade2);

    printf("PIB per Capita: %.2f reais\n", PIBPERCAPITA2);


    InversoDensi2 = Densidade2 / 1;
    
    SuperPoder2 = (float) Populacao2 + Área2 + PIB2 + Pontos_turisticos2 + PIBPERCAPITA2 + InversoDensi2;
    printf("Supoder Poder: %.2f\n", SuperPoder2);


    printf("População: Carta 1 venceu (%d)\n", Populacao > Populacao2);

    printf("Área: Carta 2 venceu (%d)\n", Área > Área2);

    printf("PIB: Carta 1 venceu (%d)\n", PIB > PIB2);

    printf("Pontos Turísticos: Carta 2 venceu (%d)\n", Pontos_turisticos > Pontos_turisticos2);

    printf("Densidade Populacional: Carta 2 venceu (%d)\n", Densidade < Densidade2);

    printf("PIB per Capita: Carta 2 venceu (%d)\n", PIBPERCAPITA > PIBPERCAPITA2);

    printf("Super Poder: Carta 1 venceu (%d)\n", SuperPoder > SuperPoder2);
 


return 0;
}