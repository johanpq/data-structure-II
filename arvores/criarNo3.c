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

    struct No* inserir(struct No* raiz, int info){
        if(raiz == 0){
            return criarNo(info);
        }else if(info > raiz->info){
            raiz->dir = inserir(raiz->dir, info);
        }else if(info < raiz->info){
            raiz->esq = inserir(raiz->esq, info);
        }
        return raiz;
    }

    int main(){
        // struct No *raiz = criarNo(20);
        // raiz->dir = criarNo(30);
        // raiz->dir->dir = criarNo(35);
        // raiz->esq = criarNo(10);
        // raiz->dir->esq = criarNo(25);
        struct No *raiz = 0;
        raiz = inserir(raiz, 20);
        raiz = inserir(raiz, 10);
        raiz = inserir(raiz, 30);
        raiz = inserir(raiz, 35);
        raiz = inserir(raiz, 28);
        raiz = inserir(raiz, 25);
        
    }




