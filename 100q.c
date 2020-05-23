#include<stdio.h>
#include<stdlib.h>

//Considere o seguinte tipo para representar listas ligadas de inteiros//////////////////////////

typedef struct lligada {
int valor;
struct lligada *prox;
} *LInt;

//Questão 1
LInt newLInt (int v, LInt t){
    LInt new = (LInt) malloc (sizeof (struct lligada));
    
    if (new!=NULL) {
        new->valor = v;
        new->prox  = t;
    }
    return new;
}

int length(LInt l){
    if(l==NULL) return 0;
    else return(1+length(l->prox));
}

//Questao 2

void freeL(LInt l){
    while(l!=NULL){
        LInt tmp = l;
        l = l->prox;
        free(tmp);
    }    
}

//Questao 3

void imprimeL (LInt l){
    while(l!=NULL){
        printf("%d\n",l->valor);
        l = l->prox;
    }
}

//Questao 4

LInt reverseL(LInt l) {
    LInt prox = l->prox;
    l->prox = NULL;
    while(l!=NULL) {
        LInt temp = prox->prox;
        prox->prox = l;
        l = prox;
        prox = temp;
    }
    return l;
}
