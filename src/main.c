#include "lista.h"

int main(){

	Lista l;
	Item aux;
	int tamanho;

	printf("\nInforme o tamanho da lista em que deseja adicionar os elementos: ");
	scanf("%d", &tamanho);

	FLVazia(&l, tamanho);

	printf("\n");
	for(int i=0; i<tamanho; i++){
		printf("Informe o %dº elemento do vetor: ", i+1);
		scanf("%d", &aux.val);
		LInsert(&l, aux, tamanho);
	}
	
	LImprime(&l);

	SomaMaxima(&l, tamanho);

	return 0;
}
