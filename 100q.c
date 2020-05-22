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

    
}