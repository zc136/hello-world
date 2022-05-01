#include<stdio.h>
int main()
{
	int n = 0;
	int m = 0;
	int k = 0;
	int i, j = 0;
	int matrix[100][100] = { 0 };
	scanf("%d %d %d", &n, &m, &k);
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < m; j++)
		{
			scanf("%d", &matrix[i][j]);//打印数组
		}
	}
	//查找数组
	i = 0, j = m - 1;//从数组的右上角开始进行查找
	while (i < n && j >= 0)//判断数组有界性
	{
		if (matrix[i][j] == k)//直接找到
		{
			printf("yes\n");
			return 0;
		}
		else if (matrix[i][j] < k)//如果找到的数小，则在下一行继续找
			i++;
		else//找到的数大，则在上一列继续找
			j--;
	}
	printf("no\n");
	return 0;
}
