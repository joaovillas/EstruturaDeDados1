#include <stdio.h>
#include <stdlib.h>
#include "mylibrary.h"
#define lim 100






main()
{
    REGISTRO aux;
    TPILHA p1, p2;
    int op;

    InicializarPilha(&p1);
    InicializarPilha(&p2);

    do{
         printf(" Menu \n");
         printf(" (1) Empilhar em P1 \n");
         printf(" (2) Empilhar em P2 \n");
         printf(" (3) Desempilhar de P1 \n");
         printf(" (4) Desempilhar de P2 \n");
         printf(" (5) Tranferir de P1 -> P2 \n");
         printf(" (6) Tranferir de P2 -> P1 \n");
         printf(" (7) Visualizar     \n");
         printf(" Opcao : ");
         scanf("%d", &op);
         
         switch(op)
         {
            case 1:
                 {
                     printf(" Digite codigo: ");
                     scanf("%d", &aux.chave);                  
                     printf(" Digite descricao: ");
                     scanf("%s", &aux.descricao);                  
                 
                     Empilhar(&p1, aux);                 
                 }break;          
            case 2:
                 {
                     printf(" Digite codigo: ");
                     scanf("%d", &aux.chave);                  
                     printf(" Digite descricao: ");
                     scanf("%s", &aux.descricao);                  
                 
                     Empilhar(&p2, aux);                 
                 }break;          
            case 3:
                 {
                     aux = Desempilhar(&p1);                 
                     printf(" \n %d Desempilhado.\n ", aux.chave); 
                 }break;          
            case 4:
                 {
                     aux = Desempilhar(&p2);                 
                     printf(" \n %d Desempilhado.\n ", aux.chave); 
                 }break;          
            case 5:
                 {
                   if ( (!PilhaVazia(p1)) && (!PilhaCheia(p2)) )
                   { aux = Desempilhar(&p1);                 
                     Empilhar(&p2, aux);                 
                   }
                   else
                   { printf(" Impossivel movimentar."); }
                 }break;          
            case 6:
                 {
                   if ( (!PilhaVazia(p2)) && (!PilhaCheia(p1)) )
                   {
                     aux = Desempilhar(&p2);                 
                     Empilhar(&p1, aux);                 
                   }
                   else
                   { printf(" Impossivel movimentar."); }
                 }break;          
            case 7:                   
                 {
                     VisualizarPilha(p1);               
                     VisualizarPilha(p2);               
                 }          
         }
         
         system("pause");                          
         system("cls");                          
    }while (op != 9);

    system("pause");
}

