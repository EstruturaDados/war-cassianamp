// ===== PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO =====
//        
// === NÍVEL NOVATO - Cadastro Inicial dos Territórios ===

// Inclusão de bibliotecas
#include <stdio.h>   // Entrada e saída padrão (exs.: printf, scanf)
#include <string.h>  // Manipulação de strings (ex: strlen, strcpy, strcmp)

// Definição da estrutura Território
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

// Função principal (main)
int main() {

    Territorio territorios[5];  //Declaração do vetor para armazenar 5 estruturas do tipo Territorio 
    int i;  // Definição da variável i para percorrer o laço for

    printf("Vamos cadastrar os 5 territórios iniciais do nosso mundo.\n");

    // Entrada dos dados - Cadastrando os territórios utilizando um laço for
    for (i = 0; i < 5; i++) {

        printf("\n--- Cadstrando Território %d ---\n", i + 1);
        
        printf("Nome do território: ");
        fgets(territorios[i].nome, 30, stdin);

        printf("Cor do exército (ex.: Azul, Verde, Amarelo): ");
        fgets(territorios[i].cor, 10, stdin);
        
        printf("Número de tropas: ");
        scanf("%d", &territorios[i].tropas);

        getchar();  // Para limpar o '\n' deixado no buffer pelo scanf
       
    }

    // Feedback de conclusão após o cadastro dos 5 territórios
    printf("\nCadastro inicial concluído com sucesso!\n");
    
    // Exibição dos dados - Percorrendo o vetor para exibir os dados de cada território

    printf("\n=======================================\n");
    printf("     MAPA DO MUNDO - ESTADO ATUAL\n");
    printf("=======================================\n");

    for (i = 0; i < 5; i++) {

        printf("\nTERRITÓRIO %d:\n", i + 1);
        printf("- Nome: %s", territorios[i].nome);
        printf("- Dominado por: Exército %s", territorios[i].cor);
        printf("- Tropas: %d\n", territorios[i].tropas);
    }

}