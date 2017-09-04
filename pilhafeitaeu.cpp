#include <stdio.h>
#include <stdlib.h>
#define lim 100



typedef struct {
	REGISTRO itens[lim]		
	int topo;
}PILHA;

typedef struct{
	
	int codigo;
	char descricao[30];
	
}REGISTRO;

void inicializarPilha(PILHA *tPilha){
	(*pPilha).topo = -1;
	
}

void empilhar(PILHA *pPilha , REGISTRO pReg){
	int novo;
	
	*pPilha.topo++;
	novo = (*pPilha).topo;
	*pPilha.itens[novo] =pReg;
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


main(){
 
 REGISTRO aux;
    TPILHA p1;

    inicializarPilha(&p1);

    aux.chave = 10;
    strcpy(aux.descricao, "Teclado");
    Empilhar(&p1, aux);

    aux.chave = 15;
    strcpy(aux.descricao, "Mouse");
    empilhar(&p1, aux);

    aux.chave = 19;
    strcpy(aux.descricao, "Monitor");
    empilhar(&p1, aux);

    aux.chave = 21;
    strcpy(aux.descricao, "Gabinete");
    empilhar(&p1, aux);

    VisualizarPilha(p1);

    system("pause");
}
}

