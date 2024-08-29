/* Disciplina: Programaçao Estruturada e Modular
Prof. Carlos Veríssimo                                    
--------------------------------------------------------
Objetivo do Programa: tabuleiro de xadrez      
Data - 27/08/2024                                                
Autor: Alicia Abade Muniz */

#include <stdio.h>
 
#define LINHAS 8
#define COLUNAS 8
 
int main() { 
    char* tabuleiro[LINHAS][COLUNAS] = {
        {"PT1", "PC1", "PB1", "PD", "PR", "PB2", "PC2", "PT2"}, //linha da torre, cavalo, bispo, rei e dama - pretas
        {"PP1", "PP2", "PP3", "PP4", "PP5", "PP6", "PP7", "PP8"},
        {" X", " X", " X", " X", " X", " X", " X", " X"}, //linha intermediaria - vazias
        {" X", " X", " X", " X", " X", " X", " X", " X"},
        {" X", " X", " X", " X", " X", " X", " X", " X"},
        {" X", " X", " X", " X", " X", " X", " X", " X"},
        {"BP1", "BP2", "BP3", "BP4", "BP5", "BP6", "BP7", "BP8"},//linha dos peões brancos
        {"BT1", "BC1", "BB1", "BR", "BD", "BB2", "BC2", "BT2"}// linha da torre, cavalo, bispo, rei e dama - brancas
    };
 
    int i = 0; //inicializa o indice para as linhas do tabuleiro
  
    while (i < LINHAS) { //laço que itera sobre cada linha do tabuleiro
        printf("%d ", 8 - i);
        int j = 0; //inicializa os indices para as colunas
        while (j < COLUNAS) {
            printf("%-3s ", tabuleiro[i][j]); // formatação para saída sair a esquerda e largura de 3 caracteres
            j++; //incrementa o indice da coluna
        }
        printf("\n");
        i++; //incrementa o indice da linha
    }
     printf("  A   B   C   D   E   F   G   H\n"); //imprime a linha de cabeçalho do tabuleiro
    return 0;
}
