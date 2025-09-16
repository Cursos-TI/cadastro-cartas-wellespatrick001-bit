#include <stdio.h>
#include "CartasSuperTrunfo.h"

int main(){
    char Estado[3];
    char Código[20];
    char NomeDaCidade[30];
    int Populacao;
    float Area;
    float PIB;
    int Pontos_turisticos;

    printf("Estado: ");
    scanf("%s", Estado);

    printf("Código: \n");
    scanf("%s", &Código);
   
    printf("NomeDaCidade: \n");
    scanf("%s", NomeDaCidade);

    printf("Populacao: \n");
    scanf("%i", &Populacao);

    printf("Area: \n");
    scanf("%f", Area);

    printf("PIB: \n");
    scanf("%f", PIB);

    printf("Pontos_turisticos: \n");
    scanf("%i", Pontos_turisticos);
return 0;
}