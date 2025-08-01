#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {

//Variáveis da primeira carta
    char cidade[30],estado;
    int populacao,n_pontos_turisticos,codigo;
    float area,pib,densidade,pib_per_capita,pib_real;

//Variáveis da segunda carta
    char cidade2[30],estado2;
    int populacao2,n_pontos_turisticos2,codigo2;
    float area2,pib2,densidade2,pib_per_capita2,pib_real2;

//Entrada da primeira carta
    printf("Insira o código da carta!\n");
    scanf("%i", &codigo);

    printf("Insira a letra do estado!\n(a) DF\n(b) Bahia\n(c) Curitiba\n(d) Rondônia\n(e) Ceará\n(f) Acre\n(g) Sergipe\n(h) Amazonas\n");
    scanf(" %c", &estado);

    printf("Insira a cidade!\n");
    scanf("%s", &cidade);

    printf("Insira a população!\n");
    scanf("%i", &populacao);

    printf("Insira a área!\n");
    scanf("%f", &area);

    printf("Insira o PIB em bilhões!\n");
    scanf("%f", &pib);

    printf("Insira a quantidade de pontos turísticos!\n");
    scanf("%i", &n_pontos_turisticos);

//Cálculos de densidade populacional e PIB per capita, a variável "pib_real" serve para converter a unidade introduzida para bilhões.
    pib_real = pib*1000000000;
    densidade = (populacao/area);
    pib_per_capita = (float)(pib_real/populacao);

//Entrada da segunda carta
    printf("Insira o código da segunda carta!\n");
    scanf("%i", &codigo2);

    printf("Insira outra letra do estado!\n(a) DF\n(b) Bahia\n(c) Curitiba\n(d) Rondônia\n(e) Ceará\n(f) Acre\n(g) Sergipe\n(h) Amazonas\n");
    scanf(" %c", &estado2);

    printf("Insira outra cidade!\n");
    scanf("%s", &cidade2);

    printf("Insira a população!\n");
    scanf("%i", &populacao2);

    printf("Insira a área!\n");
    scanf("%f", &area2);

    printf("Insira o PIB em bilhões!\n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos!\n");
    scanf("%i", &n_pontos_turisticos2);

//Cálculos de densidade populacional e PIB per capita da segunda carta
    pib_real2 = pib2*1000000000;
    densidade2 = (populacao2/area2);
    pib_per_capita2 = (float)(pib_real2/populacao2);

//Envio das duas cartas
    printf("\nCarta %i:\n",codigo);
    printf("Estado: %c\n",estado);
    printf("Código: %c0%i\n",estado,codigo);
    printf("Nome da Cidade: %s\n",cidade);
    printf("População: %i\n",populacao);
    printf("Área: %.2f km²\n",area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %i\n", n_pontos_turisticos);
    printf("Densidade populacional:%.2f hab/km²\n",densidade);
    printf("PIB per capita:%.2f reais\n\n",pib_per_capita);

    printf("Carta %i:\n",codigo2);
    printf("Estado: %c\n",estado2);
    printf("Código: %c0%i\n",estado2,codigo2);
    printf("Nome da Cidade: %s\n",cidade2);
    printf("População: %i\n",populacao2);
    printf("Área: %.2f km²\n",area2);
    printf("PIB: %.2f\n", pib2);
    printf("Número de Pontos Turísticos: %i\n", n_pontos_turisticos2);
    printf("Densidade populacional:%.2f hab/km²\n",densidade2);
    printf("PIB per capita:%.2f reais\n",pib_per_capita2);

    return 0;
}
