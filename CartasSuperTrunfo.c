#include <stdio.h>

int main (){
    printf("Desafiocartas\n");
    

}
struct Carta {
    char estado[3];
    char codigo[5];
    char nomeCidade[50];
    long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidadePopulacional;
    float pibPerCapita;
};

int main() {
    struct Carta cartas[2];

    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);

        printf("Digite o Estado: ");
        scanf("%s", cartas[i].estado);

        printf("Digite o Código: ");
        scanf("%s", cartas[i].codigo);

        printf("Digite o Nome da Cidade: ");
        scanf(" %[^\n]", cartas[i].nomeCidade);  // Lê a string com espaços

        printf("Digite a População: ");
        scanf("%ld", &cartas[i].populacao);

        printf("Digite a Área (em km²): ");
        scanf("%f", &cartas[i].area);

        printf("Digite o PIB (em bilhões de reais): ");
        scanf("%f", &cartas[i].pib);

        printf("Digite o Número de Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);

        // Cálculo da densidade populacional
        cartas[i].densidadePopulacional = cartas[i].populacao / cartas[i].area;

        // Cálculo do PIB per capita (convertendo PIB para reais)
        cartas[i].pibPerCapita = (cartas[i].pib * 1e9) / cartas[i].populacao;

        printf("\n");
    }

    // Exibição dos resultados
    for (int i = 0; i < 2; i++) {
        printf("Carta %d:\n", i + 1);
        printf("Estado: %s\n", cartas[i].estado);
        printf("Código: %s\n", cartas[i].codigo);
        printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
        printf("População: %ld\n", cartas[i].populacao);
        printf("Área: %.2f km²\n", cartas[i].area);
        printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
        printf("Número de Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
        printf("Densidade Populacional: %.2f hab/km²\n", cartas[i].densidadePopulacional);
        printf("PIB per Capita: %.2f reais\n", cartas[i].pibPerCapita);
        printf("\n");
    }

    return 0;
}
