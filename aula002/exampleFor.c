#include <stdio.h>

int main ()
{	//for de fora roda 3 vezes
	for (int i = 1; i <= 3; i++)
	{	
		//anuncia quantas vezes o for de fora roda
		printf("I esta rodando pela %d vez\n",i);

		//for de dentro roda duas vezes
		for(int j = 1; j <= 2; j++)
		{	
			//anuncia quantas vezes o for de dentro roda
			printf("J esta rodando pela %d vez\n",j);
		}
	}
	return 0;
}
