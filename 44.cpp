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
			scanf("%d", &matrix[i][j]);//��ӡ����
		}
	}
	//��������
	i = 0, j = m - 1;//����������Ͻǿ�ʼ���в���
	while (i < n && j >= 0)//�ж������н���
	{
		if (matrix[i][j] == k)//ֱ���ҵ�
		{
			printf("yes\n");
			return 0;
		}
		else if (matrix[i][j] < k)//����ҵ�����С��������һ�м�����
			i++;
		else//�ҵ�������������һ�м�����
			j--;
	}
	printf("no\n");
	return 0;
}
