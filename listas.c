#include <stdio.h>
#include <stdlib.h>

struct nodo{
    int val;
    struct nodo *next;
};

void add(struct nodo *, int);
void imprimir(struct nodo *);
void eliminar(struct nodo *, int);

struct nodo * crearLista() {
    struct nodo *cabeza = malloc(sizeof(struct nodo));
    cabeza->val = 1;
    struct nodo* cur = cabeza;
	int i;
    for(i = 2; i<=15; i++){
        struct nodo *newNodo = malloc(sizeof(struct nodo));
        newNodo-> val = i;
        cur-> next = newNodo;
        cur = newNodo;
    }
    cur-> next = NULL;
    return cabeza;
}

int main()
{
    struct nodo *cabeza = crearLista();

    imprimir(cabeza);

    return 0;
}

void add(struct nodo *cur, int n)
{
    struct nodo *nodomas = malloc(sizeof(struct nodo));
    nodomas-> val = n;
    nodomas-> next = NULL;
    cur->next = nodomas;
}

void imprimir(struct nodo *cabeza)
{
    struct nodo *cur;
    for(cur = cabeza; cur != NULL; cur = cur->next){
        printf("%d -> ", cur->val);
    }
    printf("\n");
}

void eliminar(struct nodo *cabeza, int n)
{

    struct nodo *cur = cabeza;
    struct nodo *prev = cabeza;
    printf("%d\n",cabeza->val);
    if (cabeza-> val == n){
        cabeza = cabeza->next;
        free(prev);
    }

}
