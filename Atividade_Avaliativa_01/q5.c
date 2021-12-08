#include <stdio.h>
#include <stdlib.h>

struct lista{
    int x;
    struct lista *prox;
}typedef Lista;

Lista *primeiro;

void adicionar_numero(){
    Lista *lista = malloc(sizeof(Lista));
    printf("numero: ");
    scanf("%d", &lista->x);
    lista->prox = primeiro;
    primeiro = lista;
}

void mostrar_numeros(Lista *lista){
    if (lista != NULL){
        printf("%d\n", lista->x);
    mostrar_numeros(lista->prox);
    }
}

void remover_negativos(Lista *lista){
    if (lista != NULL){
        if(lista->x >=0){
            printf("%d\n", lista->x);
        }
    mostrar_numeros(lista->prox);
    }
}

int main(){
    int aux;

    do{
        printf("\n---------MENU--------\n");
        printf("'1' inserir valores\n");
        printf("'2' mostrar valores\n");
        printf("'3' remover negativos\n");
        printf("'4' fechar programa\n");
        printf("----------------------\nOpcao: ");
        scanf("%d", &aux);
        printf("\n");

        switch (aux)
        {
            case 1: 
            adicionar_numero();
            break;

            case 2:
            mostrar_numeros(primeiro);
            break;

            case 3:
            remover_negativos(primeiro);
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
