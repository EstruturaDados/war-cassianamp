// ===== PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO =====
//        
// === NÍVEL NOVATO - Cadastro Inicial dos Territórios ===

// Inclusão de bibliotecas
#include <stdio.h>   // Entrada e saída padrão (exs.: printf, scanf)

// Definição da estrutura Território
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

// Função principal (main)
int main() {

    // Cadastrando Território 1
    Territorio territorio1 = {
        printf("Nome do território: ");
        fgets(territorio1.nome, 30, stdin);

        printf("Cor do exército (ex.: Azul, Verde, Amarelo): ");
        fgets(territorio1.cor, 10, stdin);

        printf("Número de tropas: ");
        scanf("%d", &territorio1.tropas);
    };
    
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