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
    int cone[9] = {9, 9, 9, 9, 9, 9, 9, 9, 9};
    int cruz[7] = {7, 7, 7, 7, 7, 7, 7};
    int losango[5] = {5, 5, 5, 5, 5};

    int tabuleiro[10][10] = {0}; // matriz com todas a posições 0

    // primeiro cone no tabuleiro
    for(int k = 0; k < 1; k++){
        tabuleiro[1 + k][3] = cone[k];
        for (int k = 0; k < 3; k++){
        tabuleiro[1 + 1][k + 2] = cone[k];
            for (int k = 0; k < 5; k++){
            tabuleiro[2 + 1][k + 1] = cone[k];
             // vai imprimir o numero 9 em forma de cone
             // na coluna D2, C3, D3, E3, B4, C4, D4, E4, F4.
            }
        }   
    }
    // segundo cruz no tabuleiro
    for(int l = 0; l < 3; l++){
    tabuleiro[4 + l][7] = cruz[l];
        for (int l = 0; l < 5; l++){
        tabuleiro[4 + 1][l + 5] = cruz[l];
        // vai imprimir o numero 7 em forma de cruz
             // na coluna H5, F6, G6, H6, I6, J6, H7.
        } 
    }
       
    // terceiro losango no tabuleiro
    for(int m = 0; m < 3; m++){
        tabuleiro[7 + m][2] = losango[m];
            for (int m = 0; m < 3; m++){
            tabuleiro[7 + 1][m + 1] = losango[m];
            // vai imprimir o numero 5 em forma de losango
                 // na coluna C8, B9, C9, D9, C10.
            } 
        }
   
    printf("\n ## BATALHA NAVAL ## \n");
    imprimirTabuleiro(tabuleiro); 
    //impressão do tabuleiro com os navios

return 0;

}