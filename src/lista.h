#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

#define MAXTAM 10

typedef struct Item{
	int val;
}Item;

typedef struct Lista{
	Item *vet;
	int first;
	int last;
}Lista;


void FLVazia(Lista *l, int tamanho);
void LInsert(Lista *l, Item d, int tamanho);
void LRemove(Lista *l, Item d);
void Swap(Item *a, Item *b);
void LImprime(Lista *l);
void SomaMaxima(Lista *l, int tamanho);

#endif