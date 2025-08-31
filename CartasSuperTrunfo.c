#include <stdio.h>

int main (){
    int população1, população2, turistico1,turistico2;
    float pib1, pib2, area1, area2;
    char codcidade1[20], codcidade2[20]; 
    char nomecidade1[20], nomecidade2[20];
    char estado1[20], estado2[20];
    
        printf("Digite Carta 1 \n");

        printf("Digite o Turismo:");
        scanf("%d", &turistico1);

        printf("Digite a População:");
        scanf("%d", &população1);

        printf("Digite o PIB:");
        scanf("%f", &pib1);

        printf("Digite a Área:");
        scanf("%f", &area1);

        printf("Digite o Estado:");
        scanf("%s", &estado1);

        printf("Digite o Código da Cidade:");
        scanf("%s", &codcidade1);

        printf("Digite a Cidade:");
        scanf("%s", &nomecidade1);
        
        printf("Digite Carta 2 \n");

        printf("Digite o Turismo:");
        scanf("%d", &turistico2);

        printf("Digite a População:");
        scanf("%d", &população2);

        printf("Digite o PIB:");
        scanf("%f", &pib2);

        printf("Digite a Área:");
        scanf("%f", &area2);

        printf("Digite o Estado:");
        scanf("%s", &estado2);

        printf("Digite o Código da Cidade:");
        scanf("%s", &codcidade2);

        printf("Digite a Cidade:");
        scanf("%s", &nomecidade2);

        printf("Carta 1 \n");
        printf("Estado: %s\n", estado1);
        printf("Código: %s\n", codcidade1);
        printf("Nome da Cidade: %s\n", nomecidade1);
        printf("População: %d\n", população1);
        printf("Área: %f\n", area1);
        printf("PIB: %f\n", pib1);
        printf("Número de Pontos Turísticos: %d\n", turistico1);

        printf("Carta 2 \n");
        printf("Estado: %s\n", estado2);
        printf("Código: %s\n", codcidade2);
        printf("Nome da Cidade: %s\n", nomecidade2);
        printf("População: %d\n", população2);
        printf("Área: %f\n", area2);
        printf("PIB: %f\n", pib2);
        printf("Número de Pontos Turísticos: %d\n", turistico2);
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
