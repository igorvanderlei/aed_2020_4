#ifndef _BST_H
#define _BST_H

typedef struct no {
    struct no *esq, *dir;
    int valor;
} no;

no* inserir(no* raiz, int valor);

#endif
