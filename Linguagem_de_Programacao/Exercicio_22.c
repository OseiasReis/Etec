#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
	setlocale(LC_ALL,"portuguese");
	float peso, alt, IMC;
	printf("Digite o seu peso:\n");
	scanf ("%f",&peso);
	printf("Digite sua altura:\n");
	scanf ("%f",&alt);
	IMC = peso/(pow(alt,2));
		if (IMC<18)
			printf("Sua classifica��o � Magreza.\n");
		else {
			if (IMC>=18&&IMC<25)
				printf("Sua classifica��o � Saudavel.\n");
			else 
				{
				if (IMC>=25&&IMC<30)
					printf("Sua classifica��o � Sobrepeso.\n");
				else
					printf("Sua classifica��o � Obesidade.\n");
				}
			}
	system("PAUSE");
	return 0;
}
