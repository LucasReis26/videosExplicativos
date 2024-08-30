#include <stdio.h>

int main ()
{	//Declaração da variável que contém a condição de parada
	char pare = 's';

	do // <- Garante a primeira execução do nosso programa
	{	//for estudado anteriormente
		for (int i = 0; i < 300; i++)
			printf("Hello World!\n");// <- Printa 300 vezes na tela
		scanf(" %c",&pare);// <- Escaneamento para a condição de parada
	}
	while(pare != 's');// <- (flag) condição de parada do nosso while, \
	do-while verifica a flag após a execução;

	return 0;
}
