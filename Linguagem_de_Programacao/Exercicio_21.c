#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"portuguese");
	float turno;
	printf("Informe o horario de entrada  no trabalho:\n");
	printf("Exemplos: 10:00 -> 10,00:\n");
	scanf ("%f",&turno);
		if (turno>=5 && turno<=12,59)
			printf("O seu turno � manh�.\n");
		else {
			if (turno>=13 && turno<=20,59)
				printf("O seu turno � tarde.\n");
			else 
				{
				if (turno>=21 && turno<=23,59 || turno>=0 && turno<=4.59)
					printf("O seu turno � noite.\n");
				else
					printf("Voc� digitou um horario invalido.\n");
				}
			}
	system("PAUSE");
	return 0;
}
