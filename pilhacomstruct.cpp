#include <stdio.h>
#include <stdlib.h>

int topo;
int pilha[10];

void iniciaPilha(){
	topo=-1;
}

bool pilhaCheia(){
	if(topo==10){
		return true;
	}else{
		return false;
	}

}


bool pilhaVazia(){
	if(topo==-1){
		return true;
	}else{
		return false;
	}

}

void empilhar(int numero){
	if(!pilhaCheia()){
		pilha[topo]=numero;
		topo++;
	}else{
		printf("Nao da pra empilhar , pois pilha esta cheia \n");
	}
}

void desempilhar(){
	if(!pilhaVazia()){
		topo--;
	}else{
		printf("Nao da pra desempilhar , pois pilha esta vazia \n");
	}
}

void visualizaPilha(){
	for(int i=topo; i>=0;i--){
		printf("--------Posicao[%d]--------\n\n",i+1);
		printf("%d\n",pilha[i]);
		printf("\n\n");
	}
}


main(){
	iniciaPilha();
	empilhar(10);
	empilhar(10);
	empilhar(10);
	empilhar(10);
	empilhar(10);
	empilhar(10);
	empilhar(10);
	empilhar(10);
	empilhar(10);
	empilhar(10);
	desempilhar();
	desempilhar();
	desempilhar();
	desempilhar();
	desempilhar();
	
	visualizaPilha();
}
