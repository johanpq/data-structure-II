#include<stdio.h>
#include<stdlib.h>

struct No{
    int info;
    struct No* esq;
    struct No* dir;
};

int main(){
    struct No *raiz = (struct No*)malloc(sizeof(struct No));
    raiz->info = 20;
    raiz->esq = 0;
    raiz->dir = 0;
}


