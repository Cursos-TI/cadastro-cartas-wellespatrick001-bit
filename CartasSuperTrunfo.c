#include <stdio.h>


int main(){

    // Variaveis da carta 1

    
    char Estado[15] = "B";
    char Código [5] = "B01";
    char NomeDaCidade[20] = "Jacobina";
    unsigned int Populacao = 86679;
    float Área = 2.359;
    float PIB = 1.9;
    int Pontos_turisticos = 8;
    float Densidade = 36743.96;
    float PIBPERCAPITA = 45620.53;
    float SuperPoder = 169055.75;

    // Variaveis da carta 2

    char Estado2[15] = "C";
    char Código2 [5] = "C02";
    char NomeDaCidade2[20] = "Acarau";
    unsigned int Populacao2 = 68758;
    float Área2 = 842.6;
    float PIB2 = 1.02;
    int Pontos_turisticos2 = 9;
    float Densidade2 = 81.60;
    float PIBPERCAPITA2 = 67409.80;
    float SuperPoder2 = 137102.05;
    

    // Menu interativo


    int opcao, opcao2, soma1, soma2;
    float resultado, resultado2;


      printf("Menu de comparação\n");
      printf("1. População\n");
      printf("2. Área\n");
      printf("3. PIB\n");
      printf("4. Número de pontos turisticos\n");
      printf("5. Densidade demográfica\n");
      printf("Escolha um atributo: ");
      scanf("%d", &opcao);
    
     
    
      
     if (opcao != 1) {
        printf("1. População\n");
    }
    if (opcao != 2) {
        printf("2. Área\n");
    }
    if (opcao != 3) {
        printf("3. PIB\n");
    }
    if (opcao != 4) {
        printf("4. Número de pontos turisticos\n");
    }
    if (opcao != 5) {
        printf("5. Densidade demográfica\n");
    }


      printf("Escolha o segundo atributo: ");
      scanf("%d", &opcao2);

      if (opcao2 == opcao){
        printf("Você já escolheu esse atributo!\n");
        return 0;
      }
      
      // Switch do primeiro atributo

      switch(opcao){
      case 1:
         printf("País da carta 1: Brasil | País da carta 2: Brasil\n");
         printf("Atributo: população\n");
         printf("População da carta 1: %u\n", Populacao);
         printf("População da carta 2: %u\n", Populacao2);
        if (Populacao == Populacao2){
             printf("Os atributos deram empate!\n");
        } else if (Populacao > Populacao2){
             printf("Ganhador: %s!\n", NomeDaCidade);
        } else if (Populacao < Populacao2){
             printf("Ganhador: %s!", NomeDaCidade2);
        } else {
             printf("O jogo deu erro!");
        }

        opcao = Populacao;
        soma1 = Populacao2;
      break;
      case 2:
         printf("País da carta 1: Brasil | País da carta 2: Brasil\n");
         printf("Atributo: Área\n");
         printf("Área da carta 1: %.2f km²\n", Área);
         printf("Área da carta 2: %.2f km²\n", Área2);
         if (Área == Área2){
         printf("Os atributos deram empate!\n");
        } else if (Área > Área2){
            printf("Ganhador: %s!\n", NomeDaCidade);
        } else if (Área < Área2){
            printf("Ganhador: %s!\n", NomeDaCidade2);
        } else {
            printf("O jogo deu erro!");
        }

        opcao = Área;
        soma1 = Área2;
      break;
      case 3:
         printf("País da carta 1: Brasil | País da carta 2: Brasil\n");
         printf("Atributo: PIB\n");
         printf("PIB da carta 1: %.2f bilhões de reais\n", PIB);
         printf("PIB da carta 2: %.2f bilhões de reais\n", PIB2);
         if (PIB == PIB2){
        printf("Os atributos deram empate!\n");
        } else if (PIB > PIB2){
            printf("Ganhador: %s\n", NomeDaCidade);
        } else if (PIB < PIB2){
            printf("Ganhador: %s\n", NomeDaCidade2);
        } else {
            printf("O jogo deu erro!\n");
        }

        opcao = PIB;
        soma1 = PIB2;
      break;
      case 4:
         printf("País da carta 1: Brasil | País da carta 2: Brasil\n");
         printf("Atributo: Pontos turisticos\n");
         printf("Número de pontos turisticos da carta 1: %d\n", Pontos_turisticos);
         printf("Número de pontos turisticos da carta 2: %d\n", Pontos_turisticos2);
         if (Pontos_turisticos == Pontos_turisticos2){
            printf("Os atributos deram empate!\n");
        } else if (Pontos_turisticos > Pontos_turisticos2){
            printf("Ganhador: %s\n", NomeDaCidade);
        } else if (Pontos_turisticos < Pontos_turisticos2){
            printf("Ganhador: %s\n", NomeDaCidade2);
        } else {
            printf("O jogo deu erro!");
        }

        opcao = Pontos_turisticos;
        soma1 = Pontos_turisticos2;
      break;
      case 5:
         printf("País da carta 1: Brasil | País da carta 2: Brasil\n");
         printf("Atributo: densidade demográfica\n");
         printf("Densidade demográfica da carta 1: %.2f\n", Densidade);
         printf("Densidade demográfica da carta 2: %.2f\n", Densidade2);
         if (Densidade == Densidade2){
            printf("Os atributos deram empate!\n");
        } else if (Densidade > Densidade2){
            printf("Ganhador: %s\n", NomeDaCidade);
        } else if (Densidade < Densidade2){
            printf("Ganhador: %s\n", NomeDaCidade2);
        } else {
            printf("O jogo deu erro!");
        }

        opcao = Densidade;
        soma1 = Densidade2;
      break;
      default:
        if ((opcao < 1 || opcao > 5)){
            printf("Escolha apenas números de 1 a 5!\n");
           
        } 
         return 0;      
      break;              
      }    
    

      //Switch do segundo atributo


      switch(opcao2){
      case 1:
         printf("País da carta 1: Brasil | País da carta 2: Brasil\n");
         printf("Atributo: população\n");
         printf("População da carta 1: %u\n", Populacao);
         printf("População da carta 2: %u\n", Populacao2);
        if (Populacao == Populacao2){
             printf("Os atributos deram empate!\n");
        } else if (Populacao > Populacao2){
             printf("Ganhador: %s!\n", NomeDaCidade);
        } else if (Populacao < Populacao2){
             printf("Ganhador: %s!", NomeDaCidade2);
        } else {
             printf("O jogo deu erro!");
        }

        opcao2 = Populacao;
        soma2 = Populacao2;
      break;
      case 2:
         printf("País da carta 1: Brasil | País da carta 2: Brasil\n");
         printf("Atributo: Área\n");
         printf("Área da carta 1: %.2f km²\n", Área);
         printf("Área da carta 2: %.2f km²\n", Área2);
         if (Área == Área2){
         printf("Os atributos deram empate!\n");
        } else if (Área > Área2){
            printf("Ganhador: %s!\n", NomeDaCidade);
        } else if (Área < Área2){
            printf("Ganhador: %s!\n", NomeDaCidade2);
        } else {
            printf("O jogo deu erro!");
        }

        opcao2 = Área;
        soma2 = Área2;
      break;
      case 3:
         printf("País da carta 1: Brasil | País da carta 2: Brasil\n");
         printf("Atributo: PIB\n");
         printf("PIB da carta 1: %.2f bilhões de reais\n", PIB);
         printf("PIB da carta 2: %.2f bilhões de reais\n", PIB2);
         if (PIB == PIB2){
        printf("Os atributos deram empate!\n");
        } else if (PIB > PIB2){
            printf("Ganhador: %s\n", NomeDaCidade);
        } else if (PIB < PIB2){
            printf("Ganhador: %s\n", NomeDaCidade2);
        } else {
            printf("O jogo deu erro!\n");
        }

        opcao2 = PIB;
        soma2 = PIB2;
      break;
      case 4:
         printf("País da carta 1: Brasil | País da carta 2: Brasil\n");
         printf("Atributo: Pontos turisticos\n");
         printf("Número de pontos turisticos da carta 1: %d\n", Pontos_turisticos);
         printf("Número de pontos turisticos da carta 2: %d\n", Pontos_turisticos2);
         if (Pontos_turisticos == Pontos_turisticos2){
            printf("Os atributos deram empate!\n");
        } else if (Pontos_turisticos > Pontos_turisticos2){
            printf("Ganhador: %s\n", NomeDaCidade);
        } else if (Pontos_turisticos < Pontos_turisticos2){
            printf("Ganhador: %s\n", NomeDaCidade2);
        } else {
            printf("O jogo deu erro!");
        }

        opcao2 = Pontos_turisticos;
        soma2 = Pontos_turisticos2;
      break;
      case 5:
         printf("País da carta 1: Brasil | País da carta 2: Brasil\n");
         printf("Atributo: densidade demográfica\n");
         printf("Densidade demográfica da carta 1: %.2f\n", Densidade);
         printf("Densidade demográfica da carta 2: %.2f\n", Densidade2);
         if (Densidade == Densidade2){
            printf("Os atributos deram empate!\n");
        } else if (Densidade > Densidade2){
            printf("Ganhador: %s\n", NomeDaCidade);
        } else if (Densidade < Densidade2){
            printf("Ganhador: %s\n", NomeDaCidade2);
        } else {
            printf("O jogo deu erro!");
        }

        opcao2 = Densidade;
        soma2 = Densidade2;
      break;
      default:
            if ((opcao2 < 1 || opcao2 > 5)){
            printf("Escolha apenas números de 1 a 5!\n");
        }
        return 0;
      break;               
      }
      
      resultado = (float) opcao + opcao2;
      
      resultado2 = (float) soma1 + soma2;

      if (resultado > resultado2){
        printf("A carta 1 venceu a rodada!\n");
      } else if (resultado < resultado2){
        printf("A carta 2 venceu a rodada!\n");
      }
  
     
      


   
      
    
 


return 0;




}