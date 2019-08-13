#include "tipos.h"

void inserir(TLista *p)
{
	if (p->tamanho < 10)
	{
		TCarro novoCarro;
		
		printf("\n Informe o modelo: ");
		fflush(stdin);
		gets(novoCarro.modelo);
		printf("\n Informe o valor: ");
		scanf("%f", &novoCarro.valor);
		
		//se lista vazia
		if (p->tamanho == 0)
		{
			p->carros[0] = novoCarro;
		}
		else
		{
		    //1o Localizar posição para inserir novo carro
			int indice;
			for (indice = 0; indice < p->tamanho; indice++)
			{
				if(strcmp(p->carros[indice].modelo, novoCarro.modelo) > 0)
				{
					break;
				}
			}
			//2o Deslocar elementos
			int j;
			for (j = p->tamanho; j > indice ; j--)
			{
				p->carros[j] = p->carros[j-1];
			}
			//3o Inserir novo elemento na posição
			p->carros[indice] = novoCarro;
		}
		p->tamanho++;
	}
	else
	{
		printf("\n Lista cheia!");
		getch();
	}
	
}
