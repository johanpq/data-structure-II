    #include<stdio.h>
    #include<stdlib.h>

    struct No{
        int info;
        struct No* esq;
        struct No* dir;
    };

    struct No* criarNo(int info){
        struct No* novo = (struct No*)malloc(sizeof(struct No));
        novo->info = info;
        novo->esq = 0;
        novo->dir = 0; 
        return novo;
    }

int main(){
    struct No *raiz = criarNo(20);
    raiz->dir = criarNo(30);
    raiz->dir->dir = criarNo(35);
    raiz->esq = criarNo(10);
    raiz->dir->esq = criarNo(25);

    return 0;
}




