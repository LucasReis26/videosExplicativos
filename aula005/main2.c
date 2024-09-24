#include <stdio.h>

int fibonacci(int termo)
{
	if (termo == 0)
		return 0;
	else if (termo == 1)
		return 1;
	else if (termo > 1)
		return fibonacci(termo - 1) + fibonacci (termo - 2);
}

int main()
{
	int x;

	scanf("%d",&x);

	printf("%d\n",fibonacci(x));

	return 0;
}
