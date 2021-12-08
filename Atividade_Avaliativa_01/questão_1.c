#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct livro{
char titulo[51];
char autor[51];
int ano;
struct livro *prox;
}typedef Livro;
Livro *primeiro;

void adicionar_livro(){
    Livro *livro = malloc(sizeof(Livro));
    printf("Nome do livro: ");
    scanf("%s", livro->titulo);
    printf("autor: ");
    scanf("%s", livro->autor);
    printf("ano do livro: ");
    scanf("%d", &livro->ano);
    livro->prox = primeiro;
    primeiro = livro;
}

void livros_ano(Livro *livro, int ano){
    if (livro != NULL) {
        if (livro->ano == ano) {
            printf("%s\n%s - %d\n", livro->titulo, livro->autor, livro->ano);
        }
        livros_ano(livro->prox, ano);
    }

}

void mostrar_livros(Livro *livro){
    if (livro != NULL) {
        printf("\n%s\n%s - %d", livro->titulo, livro->autor, livro->ano);
    }
    mostrar_livros(livro->prox);
}

int main(){
    int aux, ano;

    do{
        printf("\n---------MENU--------\n");
        printf("'1' inserir livro\n");
        printf("'2' mostrar livros\n");
        printf("'3' escolher livros por ano\n");
        printf("'4' fechar programa\n");
        printf("----------------------\nOpcao: ");
        scanf("%d", &aux);
        printf("\n");

        switch (aux)
        {
            case 1: 
            adicionar_livro();
            break;

            case 2:
            mostrar_livros(primeiro);
            break;

            case 3:
            printf("informe o ano ");
            scanf("%d", &ano);
            livros_ano(primeiro, ano);
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
