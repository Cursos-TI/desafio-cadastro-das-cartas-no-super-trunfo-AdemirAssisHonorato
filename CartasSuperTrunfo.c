#include <stdio.h>

// Trabalho de Nome: Ademir de Assis Honorato Gonçalves Junior, Curso: Engenharia de software
// Atividade: Carta Super Trunfo nivel novato 
/*
Carta 1:

Estado: A

Código: A01

Nome da Cidade: São Paulo

População: 12325000

Área: 1521.11 km²

PIB: 699.28 bilhões de reais

Número de Pontos Turísticos: 50

 

Carta 2:

Estado: B

Código: B02

Nome da Cidade: Rio de Janeiro

População: 6748000

Área: 1200.25 km²

PIB: 300.50 bilhões de reais

Número de Pontos Turísticos: 30

*/

int main(){
//AQUI COMEÇA O CIDIGO.

//AQUI FICA AS VARIAVEIS

int codigo, ponto_turistico, codigo_, ponto_turistico_;    
char estado[2], cidade[50];
char estado_[2], cidade_[50];
float populacao, area, pib, populacao_, area_, pib_;

//AQUI INICIA OS DADOS DA CARTA 1
    
printf("Insira aqui os dados da Carta1\n");
printf("Insira uma letra para a sua carta.\n");
scanf("%s", estado);

printf("Insira um codigo entre  01 e 04\n");
scanf("%d", &codigo);

printf("Insira o nome da cidade\n");
scanf("%s", cidade);

printf("Digite o numero da população\n");
scanf("%d", &populacao);

printf("Digite a área:\n");
scanf("%i", &area);

printf("PIB:\n");
scanf("%i", &pib);

printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico);

//AQUI INICIA OS DADOS CARTA 2

printf("\n"); //ESTA É UMA QUEBRA DE LINHA
printf("Insira aqui os dados da Carta2\n");
printf("Insira uma letra para a sua carta.\n");
scanf("%s", estado_);

printf("Insira um codigo entre  01 e 04\n");
scanf("%d", &codigo_);

printf("Insira o nome da cidade\n");
scanf("%s", cidade_);

printf("Digite o numero da população\n");
scanf("%d", &populacao_);

printf("Digite a área:\n");
scanf("%i", &area_);

printf("PIB:\n");
scanf("%i", &pib_);

printf("Digite quantidade de pontos turisticos, no Estado\n");
scanf("%d", &ponto_turistico_);


//AQUI INICIA O RESULTADO, SERÁ RESULTADO CARTA 1

printf("Carta1\n");
printf("Estado: %s\n", estado);
printf("Codigo: %s %d\n", estado, codigo);
printf("Nome da cidade: %s\n", cidade);
printf("População: %d\n", populacao);
printf("Área: %i km²\n", area);
printf("PIB:%i R$\n", pib);
printf("Pontos Turisticos:%d\n", ponto_turistico);

//AQUI INICIA O RESULTADO CARTA 2

printf("\n");
printf("Carta2\n");
printf("Estado: %s\n", estado_);
printf("Codigo: %s %d\n", estado_, codigo_);
printf("Nome da cidade: %s\n", cidade_);
printf("População: %d\n", populacao_);
printf("Área: %i km²\n", area_);
printf("PIB:%i R$\n", pib_);
printf("Pontos Turisticos:%d\n", ponto_turistico_);

return 0;

}