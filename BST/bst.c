#include <stdio.h>
#include <stdlib.h>
#include "bst.h"

no* inserir(no* raiz, int valor) {
    //caso base da recursão
    if(raiz == NULL) {
        //1
        no *novo = (no *) malloc(sizeof(no));
        //2
        novo->valor = valor;
        novo->esq = NULL;
        novo->dir = NULL;
        //3
        return novo;
    } else {
        //casos recursivos
        if(valor > raiz->valor) {
                        //novo
            raiz->dir = inserir(raiz->dir, valor);
        } else {
            raiz->esq = inserir(raiz->esq, valor);
        }
        return raiz;
    }
}

void preorder(no* raiz) {
    //Caso base -> não fazer nada
    if(raiz == NULL) {

    } else {
        //Caso recursivo
        printf("[%d]", raiz->valor); //R
        preorder(raiz->esq); //E
        preorder(raiz->dir); //D
    }
}

int altura(no* raiz) {
    if(raiz == NULL) {
        return 0;
    } else {
        return 1 + max(altura(raiz->esq), altura(raiz->dir));
    }
}

int max(int a, int b) {
    if(a > b)
        return a;
    return b;
}

no* remover(no* raiz, int valor) {
    //Remover da sub-árvore vazia retorna uma sub-árvore vazia
    //Chega aqui quando se tenta remover um elemento que não existe
    if(raiz == NULL) 
        return NULL;

    //caso base da recursão
    if(raiz->valor == valor) {
        //caso 1 - zero filhos
        if(raiz->esq == NULL && raiz->dir ==NULL) {
            free(raiz);
            return NULL;
        }
        //caso 2a - exatamente um filho (dir)
        if(raiz->esq == NULL && raiz->dir != NULL) {
            no* retorno = raiz->dir;
            free(raiz);
            return retorno;
        }
            
        //caso 2b - exatamente um filho (esq)

    } else {
        //casos recursivos
        if(valor > raiz->valor) {
            raiz->dir = remover(raiz->dir, valor);
        } else {
            raiz->esq = remover(raiz->esq, valor);
        }
        return raiz;
    }
}



