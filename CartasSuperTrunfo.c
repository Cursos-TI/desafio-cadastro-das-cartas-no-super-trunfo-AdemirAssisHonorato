#include <stdio.h>

/* Tema 2 - Super Trunfo em c: Fundamentos e Técnicas Avançadas

NOME: ADEMIR DE ASSIS DA SILVA GONÇALVES JUNIOR CURSO: ENGENHARIA DE SOFTWARE

"Deixei a resultado de saida igual ao que se pede"

*/

int main(){
  
//AQUI FICA AS VARIAVEIS

int ponto_turistico, ponto_turistico_;    
char pais[80], codigo[4], cidade[80], pais_[80], codigo_[4], cidade_[80], resultado, resultado2; 
float area, pib, area_, pib_, den_pop1, den_pop2, pib_per1, pib_per2,super_poder, super_poder_;
unsigned long int populacao, populacao_;

//AQUI INICIA OS DADOS DA CARTA 1
    
printf("Insira aqui os dados da Carta1\n");

printf("Insira o nome do Pais para a sua carta\n");
scanf(" %[^\n]", pais);

printf("Insira o nome da cidade\n");
scanf(" %[^\n]", cidade);

printf("Digite o numero da população\n");
scanf("%lu", &populacao);

printf("Digite a área:\n");
scanf("%f", &area);

printf("PIB:\n");
scanf("%f", &pib);

printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico);

//AQUI INICIA OS DADOS CARTA 2

printf("\n"); //ESTA É UMA QUEBRA DE LINHA

printf("Insira aqui os dados da Carta2\n");

printf("Insira o nome do Pais para a sua carta\n");
scanf(" %[^\n]", pais_);

printf("Insira o nome da cidade\n");
scanf(" %[^\n]", cidade_);

printf("Digite o numero da população\n");
scanf("%lu", &populacao_);

printf("Digite a área:\n");
scanf("%f", &area_);

printf("PIB:\n");
scanf("%f", &pib_);

printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico_);

//Aqui esta a comparação ternária

resultado > resultado2 ? 1 : 0;

populacao > populacao_ ? resultado : resultado2;
area > area_ ? resultado : resultado2;
pib > pib_ ? resultado : resultado2;
ponto_turistico > ponto_turistico_ ? resultado : resultado2;
den_pop1 < den_pop1 ? resultado : resultado2;
pib_per1 > pib_per2 ? resultado : resultado2;
super_poder > super_poder_ ? resultado : resultado2;

//AQUI ESTA A COMPARAÇÃO BOOLEANA SIMPLES

printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("COMPARAÇÃO DAS CARTAS!\n");
printf("\n"); //ESTA É UMA QUEBRA DE LINHA

if (populacao > populacao_){
    printf("Populacao: Carta 1 venceu (1) \n");
}else{
    printf("Populacao: Carta 2 venceu (0)\n");
}

if (area > area_){
    printf("Area: Carta 1 venceu (1) \n");
}else{
    printf("Area: Carta 2 venceu (0)\n");
}

if (pib > pib_){
    printf("PIB: Carta 1 venceu (1) \n");
}else{
    printf("PIB: Carta 2 venceu (0)\n");
}

if (ponto_turistico > ponto_turistico_){
    printf("Pontos turisticos: Carta 1 venceu (1) \n");
}else{
    printf("Pontos turisticos: Carta 2 venceu (0)\n");
}

if (den_pop1 < den_pop2){
    printf("Densidade populacional: Carta 1 venceu (1) \n");
}else{
    printf("Densidade populacional: Carta 2 venceu (0)\n");
}

if (pib_per1 > pib_per2){
    printf("PIB Per Capta: Carta 1 venceu (1) \n");
}else{
    printf("PIB Per Capta: Carta 2 venceu (0)\n");
}

if (super_poder > super_poder_){
    printf("Super poder: Carta 1 venceu (1) \n");
}else{
    printf("Super poder: Carta 2 venceu (0)\n");
}

printf("\n"); //ESTA É UMA QUEBRA DE LINHA

printf("FIM DE JOGO");

return 0;
}