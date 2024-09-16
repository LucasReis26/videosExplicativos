/*
	um ponteiro, nada mais é do que uma variável que aponta para outro endereço de memória
	seja uma outra variável ou uma memória alocada dinâmicamente.

	sintaxe de ponteiros

	declaração

	tipo *nome;

	quando utilizar o asterisco?

	- quando estamos declarando um ponteiro;
	- quando queremos utilizar o CONTEÚDO da variável que estamos apontando;

	quando não utilizar o asterisco?

	- quando queremos linkar uma outra variável ao ponteiro (não conta na declaração);
	- quando queremos imprimir o endereço de memória da variável que o nosso ponteiro está apontando;
*/

#include <stdio.h>

void inverte(int *n1, int *n2)
{
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

int main()
{
	int x, z;
	int *y = &x;

	scanf("%d",&x);

	printf("X = %d\n",x);

	printf("X(P) = %d\n",*y);

	*y = 6;

	printf("X = %d\n",x);

	printf("Endereco de memoria de X = %p\n",&x);

	printf("Endereco de memoria de X (P) = %p\n",y);

	printf("Endereco de memoria do nosso ponteiro = %p\n",&y);

	y = &z;

	z = 10;

	printf("O conteúdo da nossa variavel ponteiro eh: %d\n",*y);

	printf("\nVamos trocar X e Z de Lugar\n");

	inverte(&x,&z);

	printf("Valor de X = %d\n",x);
	printf("Valor de Z = %d\n",z);

	return 0;
}
