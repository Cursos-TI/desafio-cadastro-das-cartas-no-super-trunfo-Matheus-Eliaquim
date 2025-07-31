#include <stdio.h>

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

printf("Cadastro de cartas\n\n"); 

    /*Abaixo estão as informação que cada carta deve ter, para realizar o cadastro
    de mais cartas, basta utilizar as informções descritas abaixo para fazer uma 
    nova tela de cadastro*/

    char estado;
    char codigo[4];
    char cidade[20];
    int populacao;
    float area, pib;
    int pturisticos;

    /*Campo usado para coletar informações do usuario, manter a estrutura de separação de dados para adicionar linhas. 
    usar sempre o comando printf("texto desejado: "), e scanf("variavel", formato)*/

    printf("Digite uma letra de A a Z para representar o Estado: ");
    scanf(" %c", &estado);

    printf("Digite o codigo alfanumerico da carta (EX: A00): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);        

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);    

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pturisticos);
    
    //duas linhas espeço
    printf("\n"); // Espaço 1
    printf("\n"); // Espaço 2

    /* a partir daqui ficam os dados para impressão de cada carta
    semre usar o comando printf("variavel\n", formato) para adicionar mais campos */

    printf("Carta 01\n\n");
    
    printf("Estado: %c\n", estado);
    
    printf("Codigo: %s\n", codigo);

    printf("Cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("Area: %.2f\n", area);

    printf("P.I.B: %.2f\n", pib);

    printf("Pontos turisticos: %d\n", pturisticos);
     
    printf("\n"); // Linha de espaço

      /*Campo usado para coletar informações do usuario, manter a estrutura de separação de dados para adicionar linhas. 
    usar sempre o comando printf("texto desejado: "), e scanf("variavel", formato)*/

    printf("Cadastro de cartas\n\n");

    printf("Digite uma letra de A a Z para representar o Estado: ");
    scanf(" %c", &estado);

    printf("Digite o codigo alfanumerico da carta (EX: A00): ");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: ");
    scanf("%s", cidade);
    
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);        

    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: ");
    scanf("%f", &pib);    

    printf("Digite a quantidade de pontos turisticos da cidade: ");
    scanf("%d", &pturisticos);
    
    //duas linhas espeço
    printf("\n"); // Espaço 1
    printf("\n"); // Espaço 2

     /* a partir daqui ficam os dados para impressão de cada carta
    semre usar o comando printf("variavel\n", formato) para adicionar mais campos */
   
    printf("Carta 02\n\n");
    
    printf("Estado: %c\n", estado);
    
    printf("Codigo: %s\n", codigo);

    printf("Cidade: %s\n", cidade);

    printf("População: %d\n", populacao);

    printf("Area: %.2f\n", area);

    printf("P.I.B: %.2f\n", pib);

    printf("Pontos turisticos: %d\n", pturisticos);
     
    printf("\n"); // Linha de espaço

    return 0;

}
