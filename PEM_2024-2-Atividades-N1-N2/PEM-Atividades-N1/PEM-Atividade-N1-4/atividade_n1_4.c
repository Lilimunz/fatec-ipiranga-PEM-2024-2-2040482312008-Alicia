/* Disciplina: Programaçao Estruturada e Modular
Prof. Carlos Veríssimo                                    
--------------------------------------------------------
Objetivo do Programa:  implementação da jogada Xeque Pastor      
Data - 31/08/2024                                                
Autor: Alicia Abade Muniz */
#include <stdio.h>

int main() {
    printf("==========================================\n");
	printf("    Posicao inicial do tabuleiro\n");
    printf("==========================================\n");
	printf("   A   B   C   D   E   F   G   H\n"); //imprime a linha de cabeC'alho do tabuleiro
	char* tabuleiro[8][8] = {
		{"tP1", "cP1", "bP1", "dP", "rP", "bP2", "cP2", "tP2"}, //linha da torre, cavalo, bispo, rei e dama - pretas
		{"pP1", "pP2", "pP3", "pP4", "pP5", "pP6", "pP7", "pP8"},
		{"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "}, //linha intermediaria - vazias
		{"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
		{"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
		{"  ", "  ", "  ", "  ", "  ", "  ", "  ", "  "},
		{"pB1", "pB2", "pB3", "pB4", "pB5", "pB6", "pB7", "pB8"},//linha dos peC5es brancos
		{"tB1", "cB1", "bB1", "dB", "rB", "bB2", "cB2", "tB2"}// linha da torre, cavalo, bispo, rei e dama - brancas
	};
	int i = 0; //inicializa o indice para as linhas do tabuleiro
     int j=0; 
	while (i < 8) { //laC'o que itera sobre cada linha do tabuleiro
		printf("%d ", 8 - i);
		int j = 0; //inicializa os indices para as colunas
		while (j < 8) {
			printf("%-3s ", tabuleiro[i][j]); // formataC'C#o para saC-da sair a esquerda e largura de 3 caracteres
			j++; //incrementa o indice da coluna
		}
		printf("\n");
		i++; //incrementa o indice da linha
    }
 //inicializa o indice para as linhas do tabuleiro
    printf("\n==========================================");
    printf("\nJogada #1\n");
    printf("==========================================\n");
    printf("\n-----------Brancas jogam e4------------\n");
	tabuleiro[6][4] = "...";
	tabuleiro[4][4] = "pB5";
	printf(tabuleiro[i][j]);
    printf("\n");
   i=0;
    while (i < 8) { //laço que itera sobre cada linha do tabuleiro
        printf("%d ", 8 - i);
        int j = 0; //inicializa os indices para as colunas
        while (j < 8) {
            printf("%-3s ", tabuleiro[i][j]); // formatação para saída sair a esquerda e largura de 3 caracteres
            j++; //incrementa o indice da coluna
        }
        printf("\n");
        i++; //incrementa o indice da linha
    }
    printf("\n------------Pretas jogam e5------------\n");
	tabuleiro[1][4] = "...";
	tabuleiro[3][4] = "pP4";
	printf(tabuleiro[i][j]);
    printf("\n");
   i = 0; // redefinindo o indice de linhas
    while (i < 8) {
        printf("%d ", 8 - i);
        int j = 0;
        while (j < 8) {
            printf("%-3s ", tabuleiro[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n==========================================");
    printf("\nJogada #2\n");
    printf("==========================================\n");
    printf("\n-----------Brancas jogam Bc4---------\n");
	tabuleiro[7][5] = "...";
	tabuleiro[4][2] = "bB2";
	printf(tabuleiro[i][j]);
    printf("\n");
   i = 0; // redefinindo o indice de linhas
    while (i < 8) {
        printf("%d ", 8 - i);
        int j = 0;
        while (j < 8) {
            printf("%-3s ", tabuleiro[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n-----------------Pretas jogam Cc6-----------\n");
	tabuleiro[0][1] = "...";
	tabuleiro[2][2] = "cP2";
	printf(tabuleiro[i][j]);
    printf("\n");
   i = 0; // redefinindo o indice de linhas
    while (i < 8) {
        printf("%d ", 8 - i);
        int j = 0;
        while (j < 8) {
            printf("%-3s ", tabuleiro[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n==========================================");
    printf("\nJogada #3\n");
    printf("==========================================\n");
    printf("\n-----------Brancas jogam Dh5--------------\n");
	tabuleiro[7][3] = "...";
	tabuleiro[3][7] = "dB";
	printf(tabuleiro[i][j]);
    printf("\n");
   i = 0; // redefinindo o indice de linhas
    while (i < 8) {
        printf("%d ", 8 - i);
        int j = 0;
        while (j < 8) {
            printf("%-3s ", tabuleiro[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n-------------Pretas jogam Cf6---------------\n");
	tabuleiro[0][6] = "...";
	tabuleiro[2][5] = "cP2";
	printf(tabuleiro[i][j]);
    printf("\n");
   i = 0; // redefinindo o indice de linhas
    while (i < 8) {
        printf("%d ", 8 - i);
        int j = 0;
        while (j < 8) {
            printf("%-3s ", tabuleiro[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    printf("\n==========================================");
    printf("\nJogada #4 (Xeque mate)\n");
    printf("==========================================\n");
    printf("\n-----------------Brancas capturam Peao em pP6 em f7 e Xeque MATE (Dxf7#)--------------------------\n");
	tabuleiro[3][7] = "...";
	tabuleiro[1][5] = "dB";
	printf(tabuleiro[i][j]);
    printf("\n");
   i = 0; // redefinindo o indice de linhas
    while (i < 8) {
        printf("%d ", 8 - i);
        int j = 0;
        while (j < 8) {
            printf("%-3s ", tabuleiro[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
return 0;
}
