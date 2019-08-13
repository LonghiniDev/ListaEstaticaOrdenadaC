#ifndef _tipos_
#define _tipos_

#include <stdio.h>
#include <conio.h>
#include <string.h>

typedef struct tipoCarro
{
	char modelo[30];
	float valor;
}TCarro;

typedef struct tipoLista
{
	TCarro carros[10];
	int tamanho;
}TLista;

void inicializar (TLista *p);
void apresentar (TLista *p);
void inserir (TLista *p);

#endif
