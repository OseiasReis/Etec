#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"portuguese");
	float A, B, C;
	printf("Digite um lado do triangulo:");
	scanf ("%f",&A);
	printf("Digite outro lado do trinagulo:");
	scanf ("%f",&B);
	printf("Digite outro lado do triangulo:");
	scanf ("%f",&C);
		if ((A<B+C)&&(B<A+C)&&(C<A+B))
		{
			if ((A==B)&&(B==C))
				printf("O trinagulo � equil�tero");
			else {
				if ((A==B)||(A==C)||(B==C))
					printf("O triangulo � isoceles");
				else
					printf ("O triangulo � escaleno");
				}
		}
		else
			printf("Estes valores n�o formam um triangulo");
	return 0;
}
