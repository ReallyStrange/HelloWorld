#include<stdio.h>
int main()
{
	int n,a[20][20];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++)
	{
		int count=0;
		for(int j=0;j<n;j++)
		{
			if(i!=j)
			{				
				count+=a[j][i];
			}									
		}									
		if(count>=n/2)
		{
			printf("%d ",i+1);
		}
	}
	return 0;
} 
