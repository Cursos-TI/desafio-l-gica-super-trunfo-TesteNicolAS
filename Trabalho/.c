#include <stdio.h>
int main(){

    /* oi, desculpe-me pela falta de comentarios

    sou aluno da estàcio, Nicolas Lopes Batista

    Desculpe-me, pela falta de comentarios do código, eu conclui o trabalho do jogo de xadrez, e tem muitos mais comentarios 
    que este código


    
    
    
    
    
    
    
    */
    // variaveis
    // atributos!!

    // Dados da carta 1
    char Brasil [30] = "Brasil";
    float populacao1 = 211.100;
    float area1 = 8.510000;
    float pib1 = 2.17400000000;
    unsigned int pontosTuristicos1 = 80;
    float densidadeDemografica1 = populacao1 / area1;
    float pibPercapita1 = pib1 / populacao1;
    double superpoder1 = populacao1 + area1 + pib1 + pontosTuristicos1 + densidadeDemografica1 + pibPercapita1; 

    unsigned int opcao, escolha, escolhaBrasil, escolhaEua, atributoDiferente1, atributosDiferentes2, atributosDiferentes3, atributosDiferentes4, atributosDiferentes5, atributosDiferentes6, atributosDiferentes7, atributosEua1, atributosEua2, atributosEua3, atributosEua4, atributosEua5, atributosEua6, atributosEua7;

    // dados da carta 2
    char Eua [30] = "Estados Unidos";
    float populacao2 = 340.100;
    float area2 = 9.867000;
    float pib2 = 27.7200000000;
    unsigned int pontosturisticos2 = 76;
    float densidadeDemografica2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;
    double superpoder2 = populacao2 + area2 + pib2 + pontosturisticos2 + densidadeDemografica2 + pibpercapita2;

    printf("SuperTrunfo de paises, jogo\n");
    printf("1. Iniciar\n");
    printf("2. Regras\n");
    printf("3. Fechar\n");
    printf("Escolha : \n");
    scanf("%u", &opcao);

    switch (opcao) {

        case 1:

        printf("Primeira rodada \n");

        break;

        case 2:

        printf("kkkkk\n");

        return 0;

        break;

        case 3:

        printf("Saindo\n");

        return 0;

        break;

        default:
        printf("Erro!!\n");
        printf("Bah, mas digita certo ae guri\n");

    }

    printf("Escolha as cartas\n");
    printf("1. Brasil\n");
    printf("2. Estados Unidos\n");
    printf("Escolha : \n");
    scanf("%u", &escolha);


    if (escolha == 1 && escolha != 2 ) {

        printf("Escolha os atribus da carta %s *****\n", Brasil);
        printf("1. populacao %f \n", populacao1);
        printf("2. area %f \n", area1);
        printf("3. pib %f \n", pib1);
        printf("4. pontos turisticos %u \n", pontosTuristicos1);
        printf("5. densisade demografica %f \n", densidadeDemografica1);
        printf("6. Pib percapita %f \n", pibPercapita1);
        printf("7. Super poder %f \n", superpoder1);
        printf("Escolha : \n");
        scanf("%u", &escolhaBrasil);

    } else if (escolha == 2 && escolha != 1) {

        printf("Escolha os atribus da carta %s *****\n", Eua);
        printf("1. populacao %f \n", populacao2);
        printf("2. area %f \n", area2);
        printf("3. pib %f \n", pib2);
        printf("4. pontos turisticos %u \n", pontosturisticos2);
        printf("5. densisade demografica %f \n", densidadeDemografica2);
        printf("6. Pib percapita %f \n", pibpercapita2);
        printf("7. Super poder %f \n", superpoder2);
        printf("Escolha : \n");
        scanf("%u", &escolhaEua);

     }
     
     switch (escolhaBrasil) {

        case 1:

        if (escolhaBrasil == 1 && populacao1 > populacao2){

            printf("populacao brasil %f \n", populacao1);
            printf("populacao estados unidos %f \n", populacao2);
            printf("Voce ganhou\n");
        } else {

            printf("populacao brasil %f \n", populacao1);
            printf("populacao estados unidos %f \n", populacao2);
            printf("Voce perdeu\n");

        } 

        break;

        case 2:

        if (escolhaBrasil == 2 && area1 > area2){

            printf("area brasil %f \n", area1);
            printf("area estados unidos %f \n", area2);
            printf("Voce ganhou\n");
        } else {

            printf("area brasil %f \n", area1);
            printf("area estados unidos %f \n", area2);
            printf("Voce perdeu\n");

        } 

        break;

        case 3:

        if (escolhaBrasil == 3 && pib1 > pib2){

            printf("pib brasil %f \n", pib1);
            printf("pib estados unidos %f \n", pib2);
            printf("Voce ganhou\n");
        } else {

            printf("pib brasil %f \n", pib1);
            printf("pib estados unidos %f \n", pib2);
            printf("Voce perdeu\n");

        } 

        break;

        case 4:

        if (escolhaBrasil == 4 && pontosTuristicos1 > pontosturisticos2){

            printf("pontos turisticos brasil %u \n", pontosTuristicos1);
            printf("pontos turisticos estados unidos %u \n", pontosturisticos2);
            printf("Voce ganhou\n");
        } else {

            printf("pontos turisticos brasil %u \n", pontosTuristicos1);
            printf("pontos turisticos estados unidos %fu \n", pontosturisticos2);
            printf("Voce perdeu\n");

        } 

        break;

        case 5:

        if (escolhaBrasil == 5 && densidadeDemografica1 > densidadeDemografica2){

            printf("densidade demografica brasil %f \n", densidadeDemografica1);
            printf("densidade demografica estados unidos %f \n", densidadeDemografica2);
            printf("Voce ganhou\n");
        } else {

            printf("densidade demografica brasil %f \n", densidadeDemografica1);
            printf("densidade demografica estados unidos %f \n", densidadeDemografica2);
            printf("Voce perdeu\n");

        } 

        break;

        case 6:

        if (escolhaBrasil == 6 && pibPercapita1 > pibpercapita2){

            printf("pib percapita brasil %f \n", pibPercapita1);
            printf("pib percapita estados unidos %f \n", pibpercapita2);
            printf("Voce ganhou\n");
        } else {

            printf("pib percapita brasil %f \n", pibPercapita1);
            printf("pib percapita estados unidos %f \n", pibpercapita2);
            printf("Voce perdeu\n");

        } 

        break;

        case 7:

        if (escolhaBrasil == 7 && superpoder1 > superpoder2){

            printf("Super poder brasil %f \n", superpoder1);
            printf("Super poder estados unidos %f \n", superpoder2);
            printf("Voce ganhou\n");
        } else {

            printf("super poder brasil %f \n", superpoder1);
            printf("super poder estados unidos %f \n", superpoder2);
            printf("Voce perdeu\n");

            break;

            default:

            printf("Erro!!\n");

        } 

     }

     switch (escolhaEua) {

        case 1:

        if (escolhaEua == 1 && populacao2 > populacao1){

            printf("populacao brasil %f \n", populacao1);
            printf("populacao estados unidos %f \n", populacao2);
            printf("Voce ganhou\n");
        } else {

            printf("populacao brasil %f \n", populacao1);
            printf("populacao estados unidos %f \n", populacao2);
            printf("Voce perdeu\n");

        } 

        break;

        case 2:

        if (escolhaEua == 2 && area2 > area1){

            printf("area brasil %f \n", area1);
            printf("area estados unidos %f \n", area2);
            printf("Voce ganhou\n");
        } else {

            printf("area brasil %f \n", area1);
            printf("area estados unidos %f \n", area2);
            printf("Voce perdeu\n");

        } 

        break;

        case 3:

        if (escolhaEua == 3 && pib2 > pib1){

            printf("pib brasil %f \n", pib1);
            printf("pib estados unidos %f \n", pib2);
            printf("Voce ganhou\n");
        } else {

            printf("pib brasil %f \n", pib1);
            printf("pib estados unidos %f \n", pib2);
            printf("Voce perdeu\n");

        } 

        break;

        case 4:

        if (escolhaBrasil == 4 && pontosturisticos2 > pontosTuristicos1){

            printf("pontos turisticos brasil %u \n", pontosTuristicos1);
            printf("pontos turisticos estados unidos %u \n", pontosturisticos2);
            printf("Voce ganhou\n");
        } else {

            printf("pontos turisticos brasil %u \n", pontosTuristicos1);
            printf("pontos turisticos estados unidos %fu \n", pontosturisticos2);
            printf("Voce perdeu\n");

        } 

        break;

        case 5:

        if (escolhaBrasil == 5 && densidadeDemografica2 > densidadeDemografica1){

            printf("densidade demografica brasil %f \n", densidadeDemografica1);
            printf("densidade demografica estados unidos %f \n", densidadeDemografica2);
            printf("Voce ganhou\n");
        } else {

            printf("densidade demografica brasil %f \n", densidadeDemografica1);
            printf("densidade demografica estados unidos %f \n", densidadeDemografica2);
            printf("Voce perdeu\n");

        } 

        break;

        case 6:

        if (escolhaBrasil == 6 && pibpercapita2 > pibPercapita1){

            printf("pib percapita brasil %f \n", pibPercapita1);
            printf("pib percapita estados unidos %f \n", pibpercapita2);
            printf("Voce ganhou\n");
        } else {

            printf("pib percapita brasil %f \n", pibPercapita1);
            printf("pib percapita estados unidos %f \n", pibpercapita2);
            printf("Voce perdeu\n");

        } 

        break;

        case 7:

        if (escolhaBrasil == 7 && superpoder2 > superpoder1){

            printf("Super poder brasil %f \n", superpoder1);
            printf("Super poder estados unidos %f \n", superpoder2);
            printf("Voce ganhou\n");
        } else {

            printf("super poder brasil %f \n", superpoder1);
            printf("super poder estados unidos %f \n", superpoder2);
            printf("Voce perdeu\n");

            break;

            default:

            printf("Erro!!\n");

        } 

     }

     printf("Agora vamos para a rodada 2\n");
     
     if (escolhaBrasil == 1) {

        printf("Escolha um atributo diferente de populacao \n", populacao1);
        printf("Atributos ...\n");
        printf("1. Area %f \n", area1);
        printf("2. pib %f \n", pib1);
        printf("3. pontos turisticos %u \n", pontosTuristicos1);
        printf("4. densidade demografica %f \n", densidadeDemografica1);
        printf("5. pib percapita %f \n", pibPercapita1);
        printf("6. super poder %f \n", superpoder1);
        printf("Escolha : \n");
        scanf("%u", &atributoDiferente1);

     } else if (escolhaBrasil == 2) {

        printf("Escolha um atributo diferente de area %f \n", area1);
        printf("Atributos ...\n");
        printf("1. populacao %f \n", populacao1);
        printf("2. pib %f \n", pib1);
        printf("3. pontos turisticos %u \n", pontosTuristicos1);
        printf("4. densidade demografica %f \n", densidadeDemografica1);
        printf("5. pib percapita %f \n", pibPercapita1);
        printf("6. super poder %f \n", superpoder1);
        printf(" Escolha : \n");
        scanf("%u", &atributosDiferentes2);

     } else if (escolhaBrasil == 3) {

        printf("Escolha um atributo diferente do pib %f \n", pib1);
        printf("Atributos ...\n");
        printf("1. populacao %f \n", populacao1);
        printf("2. area %f \n", area1);
        printf("3. pontos turisticos %u \n", pontosTuristicos1);
        printf("4. densidade demografica %f \n", densidadeDemografica1);
        printf("5. pib percapita %f \n", pibPercapita1);
        printf("6. super poder %f \n", superpoder1);
        printf("Escolha : \n");
        scanf("%u", &atributosDiferentes3);

     } else if (escolhaBrasil == 4) {

        printf("Escolha um atributo diferente de pontos turisticos %u \n", pontosTuristicos1);
        printf("Atributos ...\n");
        printf("1. populacao %f \n", populacao1);
        printf("2. area %f \n", area1);
        printf("3. pib %f \n", pib1);
        printf("4. densidade demografica %f \n", densidadeDemografica1);
        printf("5. pib percapita %f \n", pibPercapita1);
        printf("6. super poder %f \n", superpoder1);
        printf("Escolha : \n"); 
        scanf("%u", &atributosDiferentes4);
        


     } else if (escolhaBrasil == 5) {

        printf("Escolha um atributo diferente de densidade demografica %f \n", densidadeDemografica1);
        printf("Atributos ...\n");
        printf("1. populacao %f \n", populacao1);
        printf("2. area %f \n", area1);
        printf("3. pib %f \n", pib1);
        printf("4. pontos turisticos %u \n", pontosTuristicos1);
        printf("5. pib percapita %f \n", pibPercapita1);
        printf("6. super poder %f \n", superpoder1);
        printf("Escolha : \n");
        scanf("%u", &atributosDiferentes5);

     } else if (escolhaBrasil == 6) {

        printf("Escolha um atributo diferente de pib percapita %f \n", pibPercapita1);
        printf("1. populacao %f \n", populacao1);
        printf("2. area %f \n", area1);
        printf("3. pib %f \n", pib1);
        printf("4. pontos turisticos %u \n", pontosTuristicos1);
        printf("5. densidade demografica %f \n", densidadeDemografica1);
        printf("6. super poder %f \n", superpoder1);
        printf("Escolha : \n");
        scanf("%u", &atributosDiferentes6);


     } else if (escolhaBrasil == 7) {

        printf("Escolha um atributo diferente de super poder %f \n", superpoder1);
        printf("1. populacao %f \n", populacao1);
        printf("2. area %f \n", area1);
        printf("3. pib %f \n", pib1);
        printf("4. pontos turisticos %u \n", pontosTuristicos1);
        printf("5. densidade demografica %f \n", densidadeDemografica1);
        printf("6. pib percapita %f \n", pibPercapita1);
        printf("Escolha : \n");     
        scanf("%u", &atributosDiferentes7);

     }

     if (escolhaEua == 1) {

        printf("Escolha um atributo diferente de populacao %f \n", populacao2);
        printf("Atributos ...\n");
        printf("1. Area %f \n", area2);
        printf("2. pib %f \n", pib2);
        printf("3. pontos turisticos %u \n", pontosturisticos2);
        printf("4. densidade demografica %f \n", densidadeDemografica2);
        printf("5. pib percapita %f \n", pibpercapita2);
        printf("6. super poder %f \n", superpoder2);
        printf("escolha : \n");
        scanf("&u", &atributosEua1);


     } else if (escolhaEua == 2) {

        printf("Escolha um atributo diferente de area %f \n", area2);
        printf("Atributos ...\n");
        printf("1. populacao %f \n", populacao2);
        printf("2. pib %f \n", pib2);
        printf("3. pontos turisticos %u \n", pontosturisticos2);
        printf("4. densidade demografica %f \n", densidadeDemografica2);
        printf("5. pib percapita %f \n", pibpercapita2);
        printf("6. super poder %f \n", superpoder2);
        printf("Escolha : \n");
        scanf("%u", &atributosEua2);

     } else if (escolhaEua == 3) {

        printf("Escolha um atributo diferente do pib %f \n", pib2);
        printf("Atributos ...\n");
        printf("1. populacao %f", populacao2);
        printf("2. Area %f \n", area2);
        printf("3. pontos turisticos %u \n", pontosturisticos2);
        printf("4. densidade demografica %f \n", densidadeDemografica2);
        printf("5. pib percapita %f \n", pibpercapita2);
        printf("6. super poder %f \n", superpoder2);
        printf("Escolha : \n");
        scanf("%u", &atributosEua3);

     } else if (escolhaEua == 4) {

        printf("Escolha um atributo diferente de pontos turisticos %u \n", pontosturisticos2);
        printf("Escolha um atributo diferente do pib %f \n", pib2);
        printf("Atributos ...\n");
        printf("1. populacao %f", populacao2);
        printf("2. Area %f \n", area2);
        printf("3. pontos turisticos %u \n", pontosturisticos2);
        printf("4. densidade demografica %f \n", densidadeDemografica2);
        printf("5. pib percapita %f \n", pibpercapita2);
        printf("6. super poder %f \n", superpoder2);
        printf("Escolha \n");
        scanf("%u", &atributosEua4);

     } else if (escolhaEua == 5) {

        printf("Escolha um atributo diferente de densidade demografica %f \n", densidadeDemografica2);
        printf("Atributos ...\n");
        printf("1. populacao %f", populacao2);
        printf("2. Area %f \n", area2);
        printf("3. pib %f \n", pib2);
        printf("4. pontos turisticos %u \n", pontosturisticos2);
        printf("5. pib percapita %f \n", pibpercapita2);
        printf("6. super poder %f \n", superpoder2);
        printf("Escolha : \n");
        scanf("%u", &atributosEua5);

     } else if (escolhaEua == 6) {

        printf("Escolha um atributo diferente de pib percapita %f \n", pibpercapita2);
        printf("Atributos ...\n");
        printf("1. populacao %f", populacao2);
        printf("2. Area %f \n", area2);
        printf("3. pib %f \n", pib2);
        printf("4. pontos turisticos %u \n", pontosturisticos2);
        printf("5. densidade populacional %f \n", densidadeDemografica2);
        printf("6. super poder %f \n", superpoder2);
        printf("Escolha : \n");
        scanf("%u", &atributosEua6);

     } else if (escolhaEua == 7) {

        printf("Escolha um atributo diferente de super poder %f \n", superpoder2);
        printf("Atributos ...\n");
        printf("1. populacao %f", populacao2);
        printf("2. Area %f \n", area2);
        printf("3. pib %f \n", pib2);
        printf("4. pontos turisticos %u \n", pontosturisticos2);
        printf("5. densidade populacional %f \n", densidadeDemografica2);
        printf("6. super poder %f \n", pibpercapita2);
        printf("Escolha : \n");
        scanf("%u", &atributosEua7);

     }     

     switch (atributoDiferente1) {

        case 1:

        if (atributoDiferente1 == 1 && area1 > area2) {

            printf("Voce escolheu a area do Brasil %f \n", area1);
            printf("Area dos estados unidos %f \n", area1);
            printf("Voce ganhou a segunda rodada \n");

        } else {

            printf("Voce escolheu a area do Brasil %f \n", area1);
            printf("Area dos estados unidos %f \n", area1);
            printf("Voce perdeu a segunda rodada \n");

        }

        break;

        case 2:

        if (atributoDiferente1 == 1 && pib1 > pib2)  {

            printf("Voce escolheu o pib do Brasil %f \n", pib1);
            printf("Pib dos estados unidos %f \n", pib2);
            printf("Voce ganhou a segunda rodada \n");

     } else {

        printf("Voce escolheu pib do Brasil %f \n", pib1);
        printf("Pib dos estados unidos %f \n", pib2);
        printf("Voce perdeu a segunda rodada \n");

     }

     break;

     case 3:

     if (atributoDiferente1 == 3 && pontosTuristicos1 > pontosturisticos2){

        printf("Voce escolheu pontos turisticos do Brasil %u \n", pontosTuristicos1);
        printf("Pib dos estados unidos %u \n", pontosturisticos2);
        printf("Voce ganhou a segunda rodada \n");

     } else {

        printf("Voce escolheu pontos turisticos do Brasil %u \n", pontosTuristicos1);
        printf("Pib dos estados unidos %u \n", pontosturisticos2);
        printf("Voce perdeu a segunda rodada \n");

     } 

     break;

     case 4:
     
     if (atributoDiferente1 == 4 && densidadeDemografica1 < densidadeDemografica2) {

        printf("Voce escolheu a densidade demografica do Brasil %f \n", densidadeDemografica1);
        printf("densidade demografica dos estados unidos %f \n", densidadeDemografica2);
        printf("Voce ganhou a segunda rodada \n");

     } else {

        printf("Voce escolheu a densidade demografica do Brasil %f \n", densidadeDemografica1);
        printf("densidade demografica dos estados unidos %f \n", densidadeDemografica2);
        printf("Voce perdeu a segunda rodada \n");

     }

     break;

     case 5:

     if (atributoDiferente1 == 5 && pibPercapita1 > pibpercapita2) {

        printf("Voce escolheu o pib percapita do Brasil %f \n", pibPercapita1);
        printf("pib percapita dos estados unidos %f \n", pibpercapita2);
        printf("Voce ganhou a segunda rodada \n");

     } else {

        printf("Voce escolheu a densidade demografica do Brasil %f \n", pibPercapita1);
        printf("densidade demografica dos estados unidos %f \n", pibpercapita2);
        printf("Voce perdeu a segunda rodada \n");

     }

     if (atributoDiferente1 == 6 && superpoder1 > superpoder2) {

        printf("Voce escolheu o super poder do Brasil %f \n", superpoder1);
        printf("super poder dos estados unidos %f \n", superpoder2);
        printf("Voce ganhou a segunda rodada \n");

     } else {

        printf("Voce escolheu o super poder do Brasil %f \n", superpoder1);
        printf("super poder dos estados unidos %f \n", superpoder2);
        printf("Voce perdeu a segunda rodada \n");

     }

     break;
      
}

switch (atributosDiferentes2) {

    case 1:

    if (atributosDiferentes2 == 1 && populacao1 > populacao2) { 

    printf("Voce escolheu a populacao do Brasil %f \n", populacao1);
    printf("populacao dos estados unidos %f \n", populacao2);
    printf("Voce ganhou a segunda rodada \n");

 } else {

    printf("Voce escolheu a populacao do Brasil %f \n", populacao1);
    printf("super poder dos estados unidos %f \n", populacao2);
    printf("Voce perdeu a segunda rodada \n");

 }

 break; 

 case 2: 

 if (atributosDiferentes2 && pib1 > pib2) {

    printf("Voce escolheu pib do Brasil %f \n", pib1);
    printf("pib dos estados unidos %f \n", pib2);
    printf("Voce ganhou a segunda rodada \n");

 } else {

    printf("Voce escolheu o pib do Brasil %f \n", pib1);
    printf("pib dos estados unidos %f \n", pib2);
    printf("Voce perdeu a segunda rodada \n");

 }

 break;

 case 3:

 if (atributosDiferentes2 && pontosTuristicos1 > pontosturisticos2) {

 printf("Voce escolheu os pontos turisticos do Brasil %f \n", pontosTuristicos1);
 printf("Pontos turisticos dos estados unidos %f \n", pontosturisticos2);
 printf("Voce ganhou a segunda rodada \n");

} else {

 printf("Voce escolheu os pontos turisticos do Brasil %u \n", pontosTuristicos1);
 printf("pontos turisticos dos estados unidos %u \n", pontosturisticos2);
 printf("Voce perdeu a segunda rodada \n");

}

break;

case 4:

if (atributosDiferentes2 == 4 && densidadeDemografica1 < densidadeDemografica2) {

printf("Voce escolheu a densidade demografica do Brasil %f \n", densidadeDemografica1);
printf("Densidade demografica dos estados unidos %f \n", densidadeDemografica2);
printf("Voce ganhou a segunda rodada \n");

} else {

printf("Voce escolheu a densidade demografica do Brasil %f \n", densidadeDemografica1);
printf("debsudade demografica dos estados unidos %f \n", densidadeDemografica2);
printf("Voce perdeu a segunda rodada \n");

}

break;

case 5:

if (atributosDiferentes2 == 5 && pibPercapita1 > pibpercapita2) {

    printf("Voce escolheu o pib percapita do Brasil %f \n", pibPercapita1);
    printf("pib percapita dos estados unidos %f \n", pibpercapita2);
    printf("Voce ganhou a segunda rodada \n");

 } else {

    printf("Voce escolheu o pib percapita do Brasil %f \n", pibPercapita1);
    printf("Pib percapita dos estados unidos %f \n", pibpercapita2);
    printf("Voce perdeu a segunda rodada \n");

}

break;

case 6:

if (atributosDiferentes2 == 6 && superpoder1 > superpoder2 ) {

    printf("Voce escolheu o super poder do Brasil %f \n", superpoder1);
    printf("super poder dos estados unidos %f \n", superpoder2);
    printf("Voce ganhou a segunda rodada \n");

 } else {

    printf("Voce escolheu o super poder do Brasil %f \n", densidadeDemografica1);
    printf("super poder dos estados unidos %f \n", densidadeDemografica2);
    printf("Voce perdeu a segunda rodada \n");

} 

break;

}

switch (atributosDiferentes3) {

case 1:

if (atributosDiferentes3 == 1 && populacao1 > populacao2)
{

    printf("Voce escolheu a populacao do Brasil %f \n", populacao1);
    printf("populacao dos estados unidos %f \n", populacao2);
    printf("Voce ganhou a segunda rodada \n");

} else {

printf("Voce escolheu a populacao do Brasil %f \n", populacao1);
printf("populacao dos estados unidos %f \n", populacao2);
printf("Voce perdeu a segunda rodada \n");

}

break;

case 2:

if (atributosDiferentes3 == 2 && area1 > area2) 
{

printf("Voce escolheu a area do Brasil %f \n", area1);
printf("area dos estados unidos %f \n", area2);
printf("Voce ganhou a segunda rodada \n");

} 

else {

printf("Voce escolheu a area do Brasil %f \n", area1);
printf("area dos estados unidos %f \n", area2);
printf("Voce perdeu a segunda rodada \n");

}

break;

case 3:

if (atributosDiferentes3 == 3 && pontosTuristicos1 > pontosturisticos2)
{

printf("Voce escolheu os pontos turisticos do Brasil %f \n", pontosTuristicos1);
printf("populacao dos estados unidos %f \n", pontosturisticos2);
printf("Voce ganhou a segunda rodada \n");

} else {

printf("Voce escolheu os pontos turisticos do Brasil %f \n", pontosTuristicos1);
printf("pontos turisticos dos estados unidos %f \n", pontosturisticos2);
printf("Voce perdeu a segunda rodada \n");

} 

break;

case 4:

if (atributosDiferentes3 == 4 && densidadeDemografica1 < densidadeDemografica2)
{
    
printf("Voce escolheu a densidade demografica do Brasil %f \n", densidadeDemografica1);
printf("densidade demografica dos estados unidos %f \n", densidadeDemografica2);
printf("Voce ganhou a segunda rodada \n");

} else {

    printf("Voce escolheu a densidade demografica do Brasil %f \n", densidadeDemografica1);
    printf("pontos turisticos dos estados unidos %f \n", densidadeDemografica2);
    printf("Voce perdeu a segunda rodada \n");
    
}

break;

if (atributosDiferentes3 == 5 && pibPercapita1 > pibpercapita2)
{

printf("Voce escolheu o pib percapita do Brasil %f \n", pibPercapita1);
printf("pib percapita dos estados unidos %f \n", pibpercapita2);
printf("Voce ganhou a segunda rodada \n");

} else {

printf("Voce escolheu o pib percapita do Brasil %f \n", pibPercapita1);
printf("pib percapita dos estados unidos %f \n", pibpercapita2);
printf("Voce perdeu a segunda rodada \n");

}

break;

case 6:

if (atributosDiferentes3 == 6 && superpoder1 > superpoder2)
{
    
printf("Voce escolheu o super poder do Brasil %f \n", superpoder1);
printf("super poder dos estados unidos %f \n", superpoder2);
printf("Voce ganhou a segunda rodada \n");

} else {

printf("Voce escolheu o pib percapita do Brasil %f \n", superpoder1);
printf("pontos turisticos dos estados unidos %f \n", superpoder2);
printf("Voce perdeu a segunda rodada \n");

    }
    
    break;

}

switch (atributosDiferentes4)
{

case 1:

    if (atributosDiferentes4 == 1 && populacao1 > populacao2)
    {
    
printf("Voce escolheu a populacao do Brasil %f \n", populacao1);
printf("populacao dos estados unidos %f \n", populacao2);
printf("Voce ganhou a segunda rodada \n");

    } else {

printf("Voce escolheu o super poder do Brasil %f \n", superpoder1);
printf("super poder dos estados unidos %f \n", superpoder2);
printf("Voce ganhou a segunda rodada \n");

    }
    
    break;

    case 2:

    if (atributosDiferentes4 == 2 && area1 > area2)
    {

printf("Voce escolheu a area do Brasil %f \n", area1);
printf("area dos estados unidos %f \n", area2);
printf("Voce ganhou a segunda rodada \n");

    } else {

printf("Voce escolheu a area do Brasil %f \n", area1);
printf("area dos estados unidos %f \n", area2);
printf("Voce perdeu a segunda rodada \n");

    }

    break;

    case 3:

    if (atributosDiferentes4 == 3 && pib1 > pib2)
    {
printf("Voce escolheu o pib do Brasil %f \n", pib1);
printf("pib dos estados unidos %f \n", pib2);
printf("Voce ganhou a segunda rodada \n");

    } else {

printf("Voce escolheu o pib do Brasil %f \n", pib1);
printf("pib dos estados unidos %f \n", pib2);
printf("Voce perdeu a segunda rodada \n");

    }

    break;

    case 4: 

    if (atributosDiferentes4 == 4 && densidadeDemografica1 < densidadeDemografica2)
    {

printf("Voce escolheu a densidade demografica do Brasil %f \n", densidadeDemografica1);
printf("super poder dos estados unidos %f \n", densidadeDemografica2);
printf("Voce ganhou a segunda rodada \n");
        
    }

printf("Voce escolheu o densidade demografica do Brasil %f \n", densidadeDemografica1);
printf("densidade demografica dos estados unidos %f \n", densidadeDemografica2);
printf("Voce perdeu a segunda rodada \n");
    
    
}



}