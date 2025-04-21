#include <stdio.h>

// Definindo a estrutura para uma carta do Super Trunfo
struct Carta {
   char estado;                     // Letra de 'A' a 'H'
   char codigo[4];                  // Ex: A01, B03
   char nomeCidade[50];            // Nome da cidade
   int populacao;                  // Número de habitantes
   float area;                     // Área em km²
   float pib;                      // PIB em bilhões de reais
   int pontosTuristicos;          // Número de pontos turísticos
};

int main() {
   struct Carta cartas[2];

   // Coletando dados para as duas cartas
   for (int i = 0; i < 2; i++) {
       printf("\nCadastro da Carta %d:\n", i + 1);

       printf("Informe o estado (A-H): ");
       scanf(" %c", &cartas[i].estado);  // Espaço antes de %c para evitar problemas com buffer

       printf("Informe o código da carta (ex: A01): ");
       scanf("%s", cartas[i].codigo);

       printf("Informe o nome da cidade: ");
       scanf(" %[^\n]", cartas[i].nomeCidade);  // Lê até a nova linha

       printf("Informe a população: ");
       scanf("%d", &cartas[i].populacao);

       printf("Informe a área (em km²): ");
       scanf("%f", &cartas[i].area);

       printf("Informe o PIB (em bilhões de reais): ");
       scanf("%f", &cartas[i].pib);

       printf("Informe o número de pontos turísticos: ");
       scanf("%d", &cartas[i].pontosTuristicos);
   }

   // Exibindo os dados de forma organizada
   for (int i = 0; i < 2; i++) {
       printf("\nCarta %d:\n", i + 1);
       printf("Estado: %c\n", cartas[i].estado);
       printf("Código: %s\n", cartas[i].codigo);
       printf("Nome da Cidade: %s\n", cartas[i].nomeCidade);
       printf("População: %d\n", cartas[i].populacao);
       printf("Área: %.2f km²\n", cartas[i].area);
       printf("PIB: %.2f bilhões de reais\n", cartas[i].pib);
       printf("Número de Pontos Turísticos: %d\n", cartas[i].pontosTuristicos);
   }

   return 0;
}

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
