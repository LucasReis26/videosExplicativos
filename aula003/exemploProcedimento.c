#include <stdio.h>

void menu()
{
	int opcao,
	    n1,
	    n2;

	printf("Digite um numero para selecionar!\n");
	printf("1 - Soma\n");
	printf("2 - Subtrai\n");
	printf("3 - Muliplica\n");
	printf("4 - Divide\n");
	printf("0 - Sai do Programa\n");
	printf("Digite a sua opcao: ");

	scanf("%d",&opcao);

	if(opcao > 0 && opcao < 5)
	{
		printf("Digite o primeiro numero: ");
		scanf("%d",&n1);
		printf("Digite o segundo numero: ");
		scanf("%d",&n2);
	}

	switch(opcao)
	{
		case 1:
			printf("%d + %d = %d\n",n1,n2,(n1 + n2));
			break;
		case 2:
			printf("%d - %d = %d\n",n1,n2,(n1 - n2));
			break;
		case 3:
			printf("%d x %d = %d\n",n1,n2,(n1 * n2));
			break;
		case 4:
			printf("%d / %d = %d\n",n1,n2,(n1 / n2));
			break;
		default:
			printf("Saindo do programa!\n");
			break;
	}
}

int main()
{

	menu();

	return 0;
}
