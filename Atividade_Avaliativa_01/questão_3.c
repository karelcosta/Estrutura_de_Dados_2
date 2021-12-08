#include <stdio.h>
#include <stdlib.h>

struct lista{
    int numero;
    struct lista *prox;
} typedef Lista;

Lista *primeiro, *primeiro_in;

void adicionar_valor(){
    Lista *lista = malloc(sizeof(Lista));
    printf("Numero:");
    scanf("%d", &lista->numero);
    lista->prox = NULL;
    if (primeiro == NULL)
    {
        primeiro = lista;
    } else 
    {
        Lista *aux = primeiro;
        while (aux != NULL)
        {
            aux = aux->prox;
        }
        aux->prox = lista;
    }
}

void inverter(Lista *lista){
    if (lista != NULL) {
        Lista *lista_in = malloc(sizeof(Lista));
        lista_in = lista;
        lista_in->prox = primeiro_in;
        primeiro_in = lista_in; 
    }
    inverter(lista->prox);
}

void mostra_lista(Lista *lista){
    if (lista != NULL) {
        printf("\n%d",lista->numero);
    }
    mostra_lista(lista->prox);
}

void mostra_lista_inversa(Lista *lista_in){
    if(lista_in != NULL) {
        printf("\n%d",lista_in->numero);
    }
    mostra_lista_inversa(lista_in->prox);
}

int main(){
    int aux, op;

    do{
        printf("\n---------MENU--------\n");
        printf("'1' inserir numero\n");
        printf("'2' mostrar numeros\n");
        printf("'3' inverter lista\n");
        printf("'4' fechar programa\n");
        printf("----------------------\nOpcao: ");
        scanf("%d", &op);
        printf("\n");

        switch (op)
        {
            case 1: 
            adicionar_valor();
            break;

            case 2:
            mostra_lista(primeiro);
            break;

            case 3:
            inverter(primeiro);
            mostra_lista(primeiro_in);
            break;

            case 4:
            aux = 1;
            break;
        
            default:
            break;
        }
    }while (aux != 1);
    return 0;
}
