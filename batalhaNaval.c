#include <stdio.h>

// imprimir tabuleiro

void imprimirTabuleiro(int tabuleiro[10][10]){ 
    int linha[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char coluna[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};

       //tabuleiro
       printf("  "); 
       for(int i = 0; i < 10; i++){
           printf(" %c", coluna[i]);
       }
   
       printf("\n"); // separar a coluna das linhas
   
       for(int j = 0; j < 10; j++){ 
           printf("%2d ", linha[j]); // linhas de 1 até 10 
               for (int k = 0; k < 10; k++)
               {
                   printf("%d ", tabuleiro[j][k]); 
                   // imprime o tabuleiro
               }
           printf("\n");
       }
}

int main(){
    int navio1[3] = {3, 3, 3};
    int navio2[3] = {3, 3, 3};
    int navio3[3] = {3, 3, 3};
    int navio4[3] = {3, 3, 3};
    int tabuleiro[10][10] = {0}; // matriz com todas a posições 0

    // primeiro navio no tabuleiro
    for(int k = 0; k < 3; k++){ 
        tabuleiro[1 + 1][k + 1] = navio1[k];  
        // navio horizontal b3,c3 e d3
    }
    // segundo navio no tabuleiro
    for(int l = 0; l < 3; l++){
        tabuleiro[5 + l][7] = navio2[l]; 
        // navio vertical h5, h6 e h7
    }
    // terceiro navio no tabuleiro
    for(int n = 0; n < 1; n++){
        tabuleiro[9 + n][4] = navio3[n]; 
        tabuleiro[8 + n][3] = navio3[n];
        tabuleiro[7 + n][2] = navio3[n];
        // navio diagonal c8, d9 e e10
    }
    // quarto navio no tabuleiro
    for(int o = 0; o < 1; o++){
        tabuleiro[0 + o][9] = navio4[o];
        tabuleiro[1 + o][8] = navio4[o];
        tabuleiro[2 + o][7] = navio4[o];
        // navio diagonal h3, i2 e j1
    }

    printf("\n ## BATALHA NAVAL ## \n");
    imprimirTabuleiro(tabuleiro); 
    //impressão do tabuleiro com os navios


}