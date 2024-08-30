#include <stdio.h>

int main ()
{
	//variável que armazena a flag
	char pare;

	while (pare != 's') // <-- (flag) condição de parada da estrutura de repetição
	{
		//Estrutura for, já estudada antes, executa 3 vezes, [0,1,2] 
		for (int i = 0; i < 3; i++)
		{
			//printa Hello World! na tela
			printf("Hello World!\n");
		}
		//Escaneia a condição de parada do while
		scanf(" %c",&pare);
	}

	return 0;
}
