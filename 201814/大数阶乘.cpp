#include<stdio.h>
int s[100000]={0};
int main()
{
	int n,i,j,temp=0,h=0,l;
	s[0]=1;
	l=1;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		for(j=0;j<l;j++)
		{
			temp=s[j]*i+h;
			s[j]=temp%10;
			h=temp/10;
		}
		while(h)
		{
			l++;
			s[l-1]=h%10;
			h/=10;
		}
	}
	for(i=l-1;i>=0;i--)
	{
		printf("%d",s[i]);
	}
	return 0;
 } 
