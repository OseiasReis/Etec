#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	setlocale(LC_ALL,"portuguese");
	int mam, qua, car, her, aqua, gran, escolha;
	do {
	printf("Escolha um animal da lista:\n\n");
	printf(" ----------------------------------------------\n");
	printf("| Le�o  | Cavalo | Crocodilo | Morcego | Homem |\n");
	printf("|----------------------------------------------|\n");
	printf("| �guia |  Cobra | Avestruz  | Pinguim |       |\n");
	printf("|----------------------------------------------|\n");
	printf("| Pato  | Baleia | Tartaruga | Macaco  |       |\n");
	printf(" ----------------------------------------------\n\n\n");
	printf("Depois de escolher, responda as seguintes quest�es com '1' para Sim ou '2' para N�o, de acordo com a sua escolha e de acordo com a maior quantidade do mesmo:\n\n");
	printf("1) � Mam�fero?\nR:");
	scanf ("%d",&mam);	
	printf("2) � Quadr�pede?\nR:");
	scanf ("%d",&qua);
	printf("3) � Carn�voro?\nR:");
	scanf ("%d",&car);
		if (mam==1&&qua==1&&car==1)
		printf("O animal escolhido � o Le�o!\a\a\n\n");
		else {
			if (mam==1&&qua==1&&car==2)
			printf("O animal escolhido � o Cavalo!\a\a\n\n");
			else {
				if (mam==2&&qua==1&&car==1)
				printf("O animal escolhido � o Crocodilo!\a\a\n\n");
				else {
					if (mam==2&&qua==1&&car==2)
					printf("O animal escolhido � a Tartaruga!\a\a\n\n");	
					else {
						printf("4) � Herb�voro?\nR:");
						scanf ("%d",&her);
							if (mam==1&&qua==2&&car==1&&her==1)
							printf("O animal escolhido � o Homem!\a\a\n\n");
							else {
								if (mam==1&&qua==2&&car==2&&her==1)
								printf("O animal escolhido � o Macaco!\a\a\n\n");
								else {
									if (mam==1&&qua==2&&car==2&&her==2)
									printf("O animal escolhido � o Morcego!\a\a\n\n");
									else {
										if (mam==1&&qua==2&&car==1&&her==2)
										printf("O animal escolhido � a Baleia!\a\a\n\n");
										else {
											if (mam==2&&qua==2&&car==1&&her==1)
											printf("O animal escolhido � a �guia!\a\a\n\n");
											else {
												printf("5) � Aqu�tico?\nR:");
												scanf ("%d",&aqua);
													if (mam==2&&qua==2&&car==1&&her==2&&aqua==1)
													printf("O animal escolhido � o Pinguim!\a\a\n\n");
													else {
														if (mam==2&&qua==2&&car==1&&her==2&&aqua==2)
														printf("O animal escolhido � a Cobra!\a\a\n\n");
														else {	
															printf("6) � Grande?\nR:");
															scanf ("%d",&gran);
																if (mam==2&&qua==2&&car==2&&her==1&&aqua==2&&gran==1)
																printf("O animal escolhido � o Avestruz!\a\a\n\n");
																else {
																	if (mam==2&&qua==2&&car==2&&her==1&&aqua==2&&gran==2)
																	printf("O animal escolhido � o Pato!\a\a\n\n");
																	else
																		printf("\nO animal descrito n�o esta na lista, tente outro.\n\n\n");
																																		
																	}
															}
														}
												}
											}
										}
									}
								}
						}
					}
				}
			}
		printf("Deseja repetir, digite '1' para Sim ou '2' para N�o.\n");
		scanf ("%d",&escolha);
	} while (escolha==1);
	system("PAUSE");
	return 0;
}
