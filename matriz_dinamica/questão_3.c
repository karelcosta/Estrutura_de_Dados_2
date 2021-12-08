#include <stdio.h>
#include <stdlib.h>

int main(){
    int **mat;
    int n, m;

    printf("Informe as dimencoes da matriz\nnumero de linhas:");
    scanf("%d", &n);
    printf("numero de colunas:");
    scanf("%d", &m);

    mat = malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++){
        mat[i] = malloc(m * sizeof(int));
    }

    printf("\nInforme os valores da matriz\n");
    for (int i = 0; i < n ; i++){
        for (int j = 0; j < m; j++){
            printf("linha %d, coluna %d: ", i + 1, j + 1);
            scanf("%d", &mat[i][j]);
        }
    }

    printf("\nMatriz transposta\n");
    for(int i = 0; i < m; ++i){
        for(int j = 0; j < n; ++j){
            printf(" %d ", mat[j][i]);
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++){
        free(mat[i]);
    }
    free(mat);
    return 0;
}
