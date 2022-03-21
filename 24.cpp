#include <stdio.h>

long long int Facl(int n)
{
	int i = 0;
	int ret = 1;
	for (i = 1; i <= n; i++)
	{
		ret = ret * i;
	}
	return ret;
}
int main()
{
	int n = 0;
	long long ret = 0;
	scanf("%d", &n);
	ret = Facl(n);
	printf("%d\n", ret);
	return 0;
}
 

