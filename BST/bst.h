#ifndef _BST_H
#define _BST_H

typedef struct no {
    struct no *esq, *dir;
    int valor;
} no;

no* inserir(no* raiz, int valor);
no* remover(no* raiz, int valor);

void preorder(no* raiz);

int altura(no* raiz);
int max(int a, int b);

#endif
