#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"portuguese");
	int pedido;
	printf("1-Big Mac\n");
	printf("2-Quarter�o\n");
	printf("3-Mac Chicken\n");
	printf("4-Cheddar MacMelt\n");
	printf("5-Mac Max\n");
	printf("Digite o numero dos lanches disponiveis no cardapio:\n");
	scanf ("%d",&pedido);
	switch(pedido) {
		case 1:printf("Big Mac est� sendo preparado, aguarde\n");
				break;
		case 2:printf("Quarter�o est� sendo preparado, aguarde\n");
				break;
		case 3:printf("Mac Chicken est� sendo preparado, aguarde\n");
				break;
		case 4:printf("Cheddar MacMelt est� sendo preparado, aguarde\n");
				break;
		case 5:printf("Mac Max est� sendo preparado, aguarde\n");
				break;	
		default:
			printf("O pedido � invalido, digite um pedido disponivel\n");
			break;
	}
	system("PAUSE");
	return 0;
}
