#include "lista.h"

void Swap(Item *a, Item *b)
{
	Item aux;
	aux = *a;
	*a = *b;
	*b = aux;
}

void FLVazia(Lista *l, int tamanho)
{
	l->vet = (Item *)malloc(sizeof(int) * tamanho);
	l->first = 0;
	l->last = 0;
}

void LInsert(Lista *l, Item d, int tamanho)
{
	if (l->last >= tamanho)
	{
		printf("LISTA CHEIA!\n");
	}
	else
	{
		l->vet[l->last] = d;
		l->last++;
	}
}

void LRemove(Lista *l, Item d)
{
	bool ok = false;

	if (l->first == l->last)
		printf("LISTA VAZIA!\n");
	else
	{
		for (int i = l->first; i < l->last; i++)
			if (l->vet[i].val == d.val)
			{
				Swap(&l->vet[i], &l->vet[i + 1]);
				ok = true;
			}

		if (ok)
			l->last--;
	}
}

void LImprime(Lista *l)
{
	printf("\n");
	for (int i = l->first; i < l->last; i++)
		printf("%d\t", l->vet[i].val);
	printf("\n");
}

void SomaMaxima(Lista *l, int tamanho)
{

	int i = 0, j = 0, soma = 0, maior = 0, count = 0, verifica = 0;

	for (i = l->last-1; i > l->first; i--)
	{
		for (j = l->first; j < l->last; j++)
		{
			if (i != j)
			{
				soma = (l->vet[j].val + (l->vet[i].val));
				if (count == 0)
				{
					maior = soma;
				}
				if (soma > maior)
				{
					maior = soma;
				}
				else
				{
					maior = maior;
				}
				count++;
			}
		}
	}
	verifica = (tamanho*tamanho-(tamanho));
	if((count+(tamanho-1)) == verifica){ //Verifica se todos os números foram somados olhando o número de possibilidades com o contador
		printf("\nA maior soma é: %d\n", maior);
	}

}
