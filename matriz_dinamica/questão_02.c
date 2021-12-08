#include <stdio.h>
#include <stdlib.h>

int main(){
    double **mat1, **mat2;
    //n = linhas e m = colunas
    int n, m;

    printf("Informe as dimenções das matrizes que deseja somar\n");
    printf("numeros de linhas:\t");
    scanf("%d", &n);
    printf("numeros de colunas:\t");
    scanf("%d", &m);

    mat1 = malloc(n * sizeof(double*));
    mat2 = malloc(n * sizeof(double*));
    
    for (int i = 0; i < n; ++i) {
        mat1[i] = malloc(m * sizeof(double));
        mat2[i] = malloc(m * sizeof(double));
    }

    printf("\nInforme os valores da primeria matriz\n");
    for (int i = 0; i < n; i++){
        for(int j = 0; j <m; j++){
        printf("linha %d, coluna %d:", i+1, j+1);
        scanf("%d", &mat1[i][j]);
        }
    }

    printf("\nInforme os valores da segunda matriz\n");
    for (int i = 0; i < n; i++){
        for(int j = 0; j <m; j++){
        printf("linha %d, coluna %d:", i+1, j+1);
        scanf("%d", &mat2[i][j]);
        }
    }

    printf("\nResultado da soma\n");

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            printf(" %d ", mat1[i][j] + mat2[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++){
        free(mat1[i]);
    }
    for (int i = 0; i < n; i++){
        free(mat2[i]);
    }
    free(mat1);
    free(mat2);
    return 0;
} 
