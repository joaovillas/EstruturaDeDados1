#include <stdio.h>
#include <stdlib.h>

int frente , fundo ;
int fila[100];

void iniciaFila(){
	frente =0;
	 fundo =0;
	 
}

bool filaVazia(){
	if(fundo==0 || frente>=fundo){
		
		return true;
	}else{
		return false;
	
	}
}

bool filaCheia(){
	if(fundo==100){
		return true;
	}else{
		return false;
		
	
	}
}



void enfileirar(int numero){
	if(!filaCheia()){

	fila[fundo]=numero;
	fundo++;
	}else{
		printf("Incapaz de enfileirar pois fila esta cheia\n");
	}
}


void chamarFila(){
	if(!filaVazia()){
	
	printf("----------------------------------------\n");
	printf("Chamando numero :%d\n",fila[frente]);
	frente++;
	}else{
	printf("incapaz de chamar , fila vazia\n");
	}
}


void visualizarFila(){
	if(!filaVazia()){
	printf("VIZUALIZADOR DE FILA --------------\n");
	for(int i=frente ; i<fundo ; i++){
		printf("[%d] -> %d\n",i+1, fila[i]);
	}
}else{
	printf("NAO TEM OQUE MOSTRAR , A FILA ESTA VAZIA\n");
}
system("pause");

}


main(){
for(int i=0 ; i<102 ; i++){
	enfileirar(i);
}
for(int i=0 ; i<100 ; i++){
	chamarFila();
}

visualizarFila();
visualizarFila();
visualizarFila();
}






