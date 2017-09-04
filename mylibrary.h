#ifndef LIBRARY_H
#define LIBRARY_H
#define lim 100 
#include <stdio.h>



typedef struct
{
       int   chave;
       char  descricao[30];
}REGISTRO;

typedef struct 
{
       REGISTRO itens[lim];      
       int      topo;
}TPILHA;

void InicializarPilha(TPILHA *pPilha)
{
     (*pPilha).topo = -1;
}

void Empilhar(TPILHA *pPilha, REGISTRO pReg)
{
     int novo;
     
     (*pPilha).topo++;
     novo = (*pPilha).topo;
     (*pPilha).itens[novo] = pReg;
}

REGISTRO Desempilhar(TPILHA *pPilha)
{
     REGISTRO aux;
     int t;
     
     t = (*pPilha).topo;
     aux = (*pPilha).itens[t];
     
     (*pPilha).topo--;     
     
     return aux;
}

int PilhaVazia(TPILHA pPilha)
{
    return (pPilha.topo == -1);   
}

int PilhaCheia(TPILHA pPilha)
{
    return (pPilha.topo == (lim-1));   
}

void VisualizarPilha(TPILHA pPilha)
{
     int i;
     REGISTRO a;
     
     printf(" \n Pilha \n");
     for(i=pPilha.topo; i>=0; i--)
     {
         a = pPilha.itens[i];
         printf("\n Cod  : %d \n", a.chave);                  
         printf(" Desc : %s \n", a.descricao);                  
     }   
     printf(" \n ------- \n ");
}

#endif
