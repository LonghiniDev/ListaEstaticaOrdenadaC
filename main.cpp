#include "tipos.h"

int main()
{
	int opcao;
	
	TLista L;
	
	inicializar(&L);
	
	do
	{
		printf("\n 1 - Inserir veiculo");
		printf("\n 2 - Apresentar veiculos");
		printf("\n 0 - Sair");
		printf("\n Escolha uma opcao: ");
		scanf("%d", &opcao);
		switch (opcao)
		{
			case 1: inserir(&L); break;
			case 2: apresentar(&L); break;
		}
	}while(opcao != 0);
}
