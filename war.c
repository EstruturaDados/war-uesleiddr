#include <stdio.h>
#include <string.h>

/*
    Estrutura (struct) Territorio:
    Representa um território com nome, cor do exército e quantidade de tropas.
*/
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

int main() {
    // Vetor de 5 estruturas do tipo Territorio
    struct Territorio territorios[5];
    
    // Variável auxiliar para controlar o loop
    int i;

    printf("=== Cadastro de Territórios ===\n\n");

    // Laço para entrada dos dados dos 5 territórios
    for (i = 0; i < 5; i++) {
        printf("Cadastro do %dº território:\n", i + 1);

        printf("Nome do território: ");
        scanf(" %[^\n]", territorios[i].nome); // Lê string com espaços

        printf("Cor do exército: ");
        scanf(" %[^\n]", territorios[i].cor);

        printf("Quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n"); // Espaço para deixar o visual mais limpo
    }

    // Exibição dos dados cadastrados
    printf("\n=== Lista de Territórios Cadastrados ===\n");
    for (i = 0; i < 5; i++) {
        printf("\nTerritório %d:\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do exército: %s\n", territorios[i].cor);
        printf("Tropas: %d\n", territorios[i].tropas);
    }

    printf("\nCadastro e exibição concluídos com sucesso!\n");

    return 0;
}
