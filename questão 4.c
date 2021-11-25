#include <stdio.h>
#include <stdlib.h>

int main(){
    int n_linhas, n_colunas;
    int **mat;
    FILE *ptrarq;

    ptrarq = fopen("matriz.txt", "r");
    if(ptrarq == NULL) {
        printf("arquivo não encontrado ou nao a memoria dispinivel");
        exit(1);
    }

    fscanf(ptrarq, "%d %d", &n_linhas, &n_colunas);

    mat = malloc(n_linhas * sizeof(int *));
    for (int i = 0; i < n_linhas; i++){
        mat[i] = malloc(n_colunas * sizeof(int));
    }

    for (int i = 0; i < n_linhas; i++){
        for (int j = 0; j < n_colunas; j++){
            fscanf(ptrarq, "%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < n_linhas; i++){
        for (int j = 0; j < n_colunas; j++){
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

    return 0;
}