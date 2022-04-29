#include <stdio.h>
int main()
{
	int n = 0;
	int i = 0;
	int m = 0;
	int arr[1000] = { 0 };
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}
	scanf("%d", &m);
	for (i=n-1;i>=0;i--)//从后面开始插入
		
	{
		if (arr[i] < m)
		{
			arr[i + 1] = m;
			break;
		}
		else
		{
			arr[i + 1] = arr[i];
		}
	}
	printf("%d", m);
	for (i = 0; i <= n; i++)
	{
		printf("%d ",arr[i]);
	}
	return 0;
}
