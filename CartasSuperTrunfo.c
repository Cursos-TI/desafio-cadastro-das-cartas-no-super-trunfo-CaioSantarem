#include <stdio.h>

int main() {
    // Declaração das variáveis para armazenar as informações da primeira carta
    char estado1;
    char codigo1[4]; // Código composto por letra + dois dígitos (ex: A01)
    char nomeCidade1[50]; // Nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // Declaração das variáveis para armazenar as informações da segunda carta
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // Início do cadastro da primeira carta
    printf("Cadastro da Carta 1:\n");

    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado1); // Leitura do estado (caractere)

    printf("Informe o Código da Carta (ex: A01): ");
    scanf("%s", codigo1); // Leitura do código (string)

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade1); // Leitura do nome da cidade (com espaços)

    printf("Informe a População: ");
    scanf("%d", &populacao1); // Leitura da população (inteiro)

    printf("Informe a Área (em km²): ");
    scanf("%f", &area1); // Leitura da área (float)

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib1); // Leitura do PIB (float)

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1); // Leitura dos pontos turísticos (inteiro)

    printf("\n"); // Linha em branco para melhor organização

    // Início do cadastro da segunda carta
    printf("Cadastro da Carta 2:\n");

    printf("Informe o Estado (A-H): ");
    scanf(" %c", &estado2);

    printf("Informe o Código da Carta (ex: B02): ");
    scanf("%s", codigo2);

    printf("Informe o Nome da Cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Informe a População: ");
    scanf("%d", &populacao2);

    printf("Informe a Área (em km²): ");
    scanf("%f", &area2);

    printf("Informe o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Informe o Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    printf("\n"); // Linha em branco para melhor separação

    // Exibição dos dados da primeira carta cadastrada
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n"); // Linha em branco para separar as cartas

    // Exibição dos dados da segunda carta cadastrada
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0; // Finalização do programa
}
