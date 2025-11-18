// ===== PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO =====
//        
// === NÍVEL NOVATO - Cadastro Inicial dos Territórios ===

// Inclusão de bibliotecas
#include <stdio.h>   // Entrada e saída padrão (exs.: printf, scanf)
#include <stdlib.h>  // Funções utilitárias (exs.: malloc, exit, free)
#include <string.h>  // Manipulaçnao de strings

// Definição de constantes globais
#define MAX_TERRITORIOS 5  // Quantidade máxima de territórios que podem ser cadastrados

// Definição da estrutura Território
struct Territorio {
    char nome[30];
    char cor[10];
    int tropas;
};

// Função para limpar o buffer de entrada
void limparBufferEntrada() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);    
};

// Função principal (main)
int main() {
    struct Territorio mapa[MAX_TERRITORIOS];
    int totalLivros = 0;
    int opcao;

    // Menu principal
    do {

        // Exibição do menu com as opções
        printf("=== MAPA DO MUNDO - Menu de cadastro e consulta ===");
        printf("1 - Cadastrar território\n");
        printf("2 - Listar territórios cadastrados\n");
        printf("------------------------------------");
        printf("Escolha uma opção");
    }
    
};


// --- Cadastrando Território 1 ---
// Nome do território:
// Cor do exército (ex.: Azul, Verde, Amarelo):
// Número de tropas: 

/*

Cadastro inicial concluído com sucesso!

=======================================
     MAPA DO MUNDO - ESTADO ATUAL
=======================================

TERRITÓRIO 1:
- Nome:
- Dominado por:
- Quantidade de tropas:

*/