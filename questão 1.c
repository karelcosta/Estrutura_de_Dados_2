#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, m;
    int **mat;  

    printf("Informe as dimencoes da matriz\nNumero de linhas:\t");
    scanf("%d", &n);
    printf("Numero de colunas:\t");
    scanf("%d", &m);

    mat = malloc(n * sizeof(int *));
    for (int i = 0; i < n; ++i)
    {
        mat[i] = malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            mat[i][j] = 0;
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            printf(" %d ", mat[i][j]);
        }
        printf("\n");
    }

    free(mat);
    return 0;
}