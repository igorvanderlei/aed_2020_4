#include <stdio.h>
#include "bst.h"

int main(int argc, char*argv[]) {
    no *raiz;
    //Inicializar a árvore vazia
    raiz = NULL;
    int opcao;
    int valor;

    while(1) {
        scanf("%d", &opcao);
        switch(opcao) {
            //inserir
            case 1: 
                scanf("%d", &valor);
                raiz = inserir(raiz, valor);                
                break;
            //preorder
            case 2:
                preorder(raiz);
                printf("\n");
                break;
            case 3:
                printf("%d\n", altura(raiz));
                break;
            case 4:
                scanf("%d", &valor);
                raiz = remover(raiz, valor);                
                break;

            //sair
            case 99:
                return(0);
        } 
    } 
}
