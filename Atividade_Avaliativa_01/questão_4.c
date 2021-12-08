#include <stdio.h>
#include <stdlib.h>

struct lista
{
    int x;
    struct lista *prox;
}typedef Lista;

Lista *primeirol1, *primeirol2;

void ADD_L1(){
    Lista *l1 = malloc(sizeof(Lista));
    printf("Numero:");
    scanf("%d", &l1->x);
    l1->prox = NULL;
    if (primeirol1 == NULL)
    {
        primeirol1 = l1;
    } else 
    {
        Lista *auxl1 = primeirol1;
        while (auxl1 != NULL)
        {
            auxl1 = auxl1->prox;
        }
        auxl1->prox = l1;
    }
}

void ADD_L2(){
    Lista *l2 = malloc(sizeof(Lista));
    printf("Numero:");
    scanf("%d", &l2->x);
    l2->prox = NULL;
    if (primeirol2 == NULL)
    {
        primeirol2 = l2;
    } else 
    {
        Lista *auxl2 = primeirol2;
        while (auxl2 != NULL)
        {
            auxl2 = auxl2->prox;
        }
        auxl2->prox = l2;
    }
}

void mostra_lista(Lista *lista){
    if (lista != NULL) {
        printf("\n%d",lista->x);
    }
    mostra_lista(lista->prox);
}

Lista *concatena(Lista *l1,Lista *l2){
    if (l2 != NULL){
        if (l2->prox = NULL){
            l2->prox = l1;
        }
    }
    if (l2->prox != l1){
        concatena(primeirol1, l2->prox);
    }
}

int main(){
    int aux;

    do{
        printf("\n---------MENU--------\n");
        printf("'1' Lista 1\n");
        printf("'2' Lista 2\n");
        printf("'3' concatena\n");
        printf("'4' fechar programa\n");
        printf("----------------------\nOpcao: ");
        scanf("%d", &aux);
        printf("\n");

        switch (aux)
        {
            case 1:
            printf("\n\t---Lista 1---\n");
            printf("'1' adicionar numero\n");
            printf("'2' mostrar lista\n");
            printf("opção: ");
            scanf("%d", &aux);

            switch (aux)
            {
                case 1:
                ADD_L1();
                break;

                case 2:
                mostra_lista(primeirol1);
                break;

                default:
                break;
            }
            break;

            case 2:
            printf("\n\t---Lista 2---\n");
            printf("'1' adicionar numero\n");
            printf("'2' mostrar lista\n");
            printf("opção: ");
            scanf("%d", &aux);

            switch (aux)
            {
                case 1:
                ADD_L2();
                break;

                case 2:
                mostra_lista(primeirol2);
                break;

                default:
                break;
            }
            break;

            case 3:
            mostra_lista(concatena(primeirol1, primeirol2));
        
            break;

            case 4:
            aux = 0;
            break;
        
            default:
            break;
        }


    }while (aux != 0);
    
    return 0;
}
