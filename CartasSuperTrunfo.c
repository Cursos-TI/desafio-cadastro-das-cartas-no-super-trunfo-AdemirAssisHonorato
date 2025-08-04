#include <stdio.h>

/* ATIVIDADE SUPER TRUNFO NIVEL INTERMEDIARIO 
NOME: ADEMIR DE ASSIS DA SILVA GONÇALVES JUNIOR CURSO: ENGENHARIA DE SOFTWARE

OBS: DADOS DE DENSIDADE POPULACIONAL E PIB PER CAPTA ADICIONADAS JUNTO COM AS CORREÇOES SUGERIDAS EM E-MAIL ENVIADO.
AS CORREÇÕES ERAM SOBRE O USO DOS ESPECIFICADORES.

DESDE JÁ AGRADEÇO.

*/

/*
Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50

Densidade Populacional: 8102.47 hab/km²

PIB per Capita: 56724.32 reais

 

Carta 2:

Estado: B

Código: B02

Nome da Cidade: Rio de Janeiro

População: 6748000

Área: 1200.25 km²

PIB: 300.50 bilhões de reais

Número de Pontos Turísticos: 30

Densidade Populacional: 8102.47 hab/km²

PIB per Capita: 56724.32 reais

*/

int main(){
//AQUI COMEÇA O CIDIGO.

//AQUI FICA AS VARIAVEIS

int ponto_turistico, ponto_turistico_;    
char estado[2], codigo[4], cidade[120], estado_[2], codigo_[4], cidade_[120];
float populacao, area, pib, populacao_, area_, pib_;
float den_pop1, den_pop2, pib_per1, pib_per2; // VARIAVEIS NIVEL INTERMEDIARIO

//AQUI INICIA OS DADOS DA CARTA 1
    
printf("Insira aqui os dados da Carta1\n");
printf("Insira uma letra para a sua carta\n");
scanf("%s", estado);

printf("Insira um codigo entre  A01 e A04\n");
scanf("%s", codigo);

printf("Insira o nome da cidade\n");
scanf("%s", cidade);

printf("Digite o numero da população\n");
scanf("%f", &populacao);

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
scanf("%f", &populacao_);

printf("Digite a área:\n");
scanf("%f", &area_);

printf("PIB:\n");
scanf("%f", &pib_);

printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico_);


//AQUI INICIA O RESULTADO, SERÁ RESULTADO CARTA 1

/* CALCULO NIVEL INTERMEDIARIO COMEÇA AQUI*/
den_pop1 = (float)(populacao / area);
den_pop2 = (float)(populacao_ / area_);

pib_per1 = (float)(pib / populacao);
pib_per2 = (float)(pib_ / populacao_);
/* CALCULO NIVEL INTERMEDIARIO TERMINA AQUI*/

printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Carta1\n");
printf("Estado: %s\n", estado);
printf("Codigo: %s\n", codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População: %f milhões\n", populacao);
printf("Área: %f km²\n", area);
printf("PIB:%f R$\n", pib);
printf("Pontos Turisticos:%d\n", ponto_turistico);
printf("Densidade populacional 1: %f hab/km²\n", den_pop1); //RESULTADO NIVEL INTERMEDIARIO
printf("PIB per capta: %f R$\n", pib_per1); //RESULTADO NIVEL INTERMEDIARIO

//AQUI INICIA O RESULTADO CARTA 2

printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Carta2\n");
printf("Estado: %s\n", estado_);
printf("Codigo: %s\n", codigo_);
printf("Nome da cidade: %s\n", cidade_);
printf("População: %f milhões\n", populacao_);
printf("Área: %f km²\n", area_);
printf("PIB: %f R$\n", pib_);
printf("Pontos Turisticos:%d\n", ponto_turistico_);
printf("Densidade populacional 2: %f hab/km²\n", den_pop2); //RESULTADO NIVEL INTERMEDIARIO
printf("PIB per capta2: %f R$\n", pib_per2); // //RESULTADO NIVEL INTERMEDIARIO

return 0;

}