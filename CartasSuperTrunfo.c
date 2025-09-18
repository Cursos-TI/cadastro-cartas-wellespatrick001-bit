#include <stdio.h>


int main(){

    //carta 1
    char Carta1;
    char Estado[3];
    char Código[20];
    char NomeDaCidade[30];
    int Populacao;
    float Area;
    float PIB;
    int Pontos_turisticos;

    //carta 2

    char Estado2[3];
    char Código2[20];
    char NomeDaCidade2[30];
    int Populacao2;
    float Area2;
    float PIB2;
    int Pontos_turisticos2;

    //carta 1

    printf("Carta1: \n");

    printf("Estado: ");
    scanf("%s", Estado);

    printf("Código: \n");
    scanf("%s", Código);
   
    printf("NomeDaCidade: \n");
    scanf("%s", NomeDaCidade);

    printf("Populacao: \n");
    scanf("%i", &Populacao);

    printf("Area: ");
    scanf("%f", &Area);
    
    printf("PIB:\n");
    scanf("%f", &PIB);

    printf("Pontos_turisticos:\n");
    scanf("%i", &Pontos_turisticos);
    
    //carta2

    printf("Estado2: ");
    scanf("%s", Estado2);

    printf("Código2: \n");
    scanf("%s", &Código2);
   
    printf("NomeDaCidade2: \n");
    scanf("%s", NomeDaCidade2);

    printf("Populacao2: \n");
    scanf("%i", &Populacao2);

    printf("Area2: \n");
    scanf("%f", &Area2);

    printf("PIB2: \n");
    scanf("%f", &PIB2);

    printf("Pontos_turisticos2: ");
    scanf("%i", &Pontos_turisticos2);



return 0;
}