#include "tipos.h"

void apresentar (TLista *p)
{
	if (p->tamanho > 0)
	{
		for (int i=0; i < p->tamanho; i++)dfdddd
		{
			printf("\n Modelo: %s", p->carros[i].modelo);
			printf("\n Valor: %.2f", p->carros[i].valor);
			printf("\n--------------------");
		}
	}
	else
	{
		printf("Lista vazia!");
	}
	getch();
}
