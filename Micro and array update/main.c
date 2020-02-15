#include<stdio.h>
#include<stdlib.h>
int main()

{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,k,small;
		scanf("%d %d",&n,&k);
		int arr[n];
		for(int i=0;i<n;i++)
		{
			scanf("%d",&arr[i]);
		}
		small=arr[0];
		for(int i=0;i<n;i++)
		{
			if(arr[i]<small)
			{
				small=arr[i];

			}}
			int count=k-small;
			if(count>0)
			{
		printf("%d\n",count);}
		else
		{
		    printf("0\n");
		}
	}
	return 0;
               }
