#include <stdio.h>

/* ATIVIDADE SUPER TRUNFO NIVEL MESTRE
NOME: ADEMIR DE ASSIS DA SILVA GONÇALVES JUNIOR CURSO: ENGENHARIA DE SOFTWARE

OBS: SUPER PODER ADICIONADO, MODIFICAÇÃO DE POPULAÇÃO PARA UNSINGED LONG INT E COMPARAÇÃO SIMPLES ADICIONADA

DESDE JÁ AGRADEÇO.

*/

int main(){
//AQUI COMEÇA O CIDIGO.

//AQUI FICA AS VARIAVEIS

int ponto_turistico, ponto_turistico_;    
char estado[80], codigo[4], cidade[120], estado_[80], codigo_[4], cidade_[120];
float area, pib, area_, pib_, den_pop1, den_pop2, pib_per1, pib_per2;
unsigned long int populacao, populacao_;
float super_poder, super_poder_;

//AQUI INICIA OS DADOS DA CARTA 1
    
printf("Insira aqui os dados da Carta1\n");
printf("Insira uma letra para a sua carta\n");
scanf("%s", estado);

printf("Insira um codigo entre  A01 e A04\n");
scanf("%s", codigo);

printf("Insira o nome da cidade\n");
scanf("%s", cidade);

printf("Digite o numero da população\n");
scanf("%ul", &populacao);

printf("Digite a área:\n");
scanf("%f", &area);

printf("PIB:\n");
scanf("%f", &pib);

printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico);

//AQUI INICIA OS DADOS CARTA 2

printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Insira aqui os dados da Carta2\n");
printf("Insira uma letra para a sua carta.\n");
scanf("%s", estado_);

printf("Insira um codigo entre  B01 e B04\n");
scanf("%s", codigo_);

printf("Insira o nome da cidade\n");
scanf("%s", cidade_);

printf("Digite o numero da população\n");
scanf("%ul", &populacao_);

printf("Digite a área:\n");
scanf("%f", &area_);

printf("PIB:\n");
scanf("%f", &pib_);

printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico_);


//AQUI INICIA O RESULTADO, SERÁ RESULTADO CARTA 1
den_pop1 = (float)(populacao / area);
den_pop2 = (float)(populacao_ / area_);

pib_per1 = (float)(pib / populacao);
pib_per2 = (float)(pib_ / populacao_);

super_poder = (float)(populacao + area + pib + ponto_turistico + pib_per1 * (1 / den_pop1));// AQUI ESTA O CALCULO DO SUPER PODER 1
super_poder_ = (float)(populacao_ + area_ + pib_ + ponto_turistico_ + pib_per2 * (1/ den_pop2));// AQUI ESTA O CALCULO DO SUPER PODER 2

printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Carta1\n");
printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População: %u milhões\n", populacao);
printf("Área: %.2f km²\n", area);
printf("PIB:%.2f R$\n", pib);
printf("Pontos Turisticos:%d\n", ponto_turistico);
printf("Densidade populacional 1: %.2f hab/km²\n", den_pop1);
printf("PIB per capta1: %f R$\n", pib_per1);
printf("Super Poder: %f\n", super_poder);

//AQUI INICIA O RESULTADO CARTA 2

printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Carta2\n");
printf("Estado: %s\n", estado_);
printf("Codigo: %s\n", codigo_);
printf("Nome da cidade: %s\n", cidade_);
printf("População: %u milhões\n", populacao_);
printf("Área: %.2f km²\n", area_);
printf("PIB: %.2f R$\n", pib_);
printf("Pontos Turisticos: %d\n", ponto_turistico_);
printf("Densidade populacional 2: %.2f hab/km²\n", den_pop2); 
printf("PIB per capta2: %f R$\n", pib_per2); 
printf("Super Poder: %f\n", super_poder);

// AQUI ESTA A COMPARAÇÃO BOOLEANA SIMPLES
printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("RESULTADO COMPARAÇÃO!\n");
printf("Populacao A > Populacao B: %d\n", populacao > populacao_);
printf("Area A > Area B: %d\n", area > area_);
printf("Pib A > Pib B: %d\n", pib > pib_);
printf("Pontos turisticos A > Pontos turisticos B: %d\n", ponto_turistico > ponto_turistico_);
printf("Densidade populaciol A < Densidade populacional B: %d\n", den_pop1 < den_pop2);
printf("PIB per capta A > PIB per capta B: %d\n", pib_per1 > pib_per2);
printf("Super Poder A > Super Poder B: %d\n", super_poder > super_poder_);


return 0;
}