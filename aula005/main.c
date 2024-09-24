#include <stdio.h>

int function(int termo)
{
	int resp;

	if(termo == 1)
		resp = 1;
	else if (termo > 1)
		resp = termo * function(termo - 1);

	return resp;

}

int main()
{
	int n;

	scanf("%d",&n);

	printf("%d\n",function(n));

	printf("É muito legal aprender recursividade de forma simplificada!\n");

	return 0;
}
