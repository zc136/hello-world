//创建一个整形数组，完成对应数组的操作
//1.实现函数init（）初始化数组权威0
//2.实现print()打印数组的每个元素
//3.实现reverse()函数完成数组的逆方向放置
#include <stdio.h>
void Init(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		arr[i]=0;
	}
}
void Print(int arr[],int sz)
{
	int i=0;
	for(i=0;i<sz;i++)
	{
		printf("%d ",arr[i]);
	
		
	}
}

void Reverse(int arr[],int sz)
{
	int left=0;
	int right=sz-1;
	while(left<right)
	{
		int tmp=arr[left];
		arr[left]=arr[right];
		arr[right]=tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9};
	int sz=sizeof(arr)/sizeof(arr[0]);
//Init(arr,sz);
Print(arr,sz);
Reverse(arr,sz);
Print(arr,sz);	
		return 0;
 } 
