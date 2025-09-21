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

    //carta 2

    char Estado2[3];
    char Código2[20];
    char NomeDaCidade2[30];
    int Populacao2;
    float Área2;
    float PIB2;
    int Pontos_turisticos2;

    //carta 1

    printf("Carta1: \n");

    printf("Estado: ");
    scanf("%s", &Estado);

    printf("Código: \n");
    scanf("%s", Código);
   
    printf("Nome da cidade: \n");
    scanf("%s", &NomeDaCidade);

    printf("Populacao: \n");
    scanf("%i", &Populacao);

    printf("Área: ");
    scanf("%f", &Área);
    
    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Pontos turisticos: \n");
    scanf("%i", &Pontos_turisticos);
    
    //carta2

    printf("Estado: ");
    scanf("%s", Estado2);

    printf("Código: \n");
    scanf("%s", &Código2);
   
    printf("Nome da cidade: \n");
    scanf("%s", NomeDaCidade2);

    printf("Populacao: \n");
    scanf("%i", &Populacao2);

    printf("Área: \n");
    scanf("%f", &Área2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Pontos turisticos: ");
    scanf("%i", &Pontos_turisticos2);



return 0;
}