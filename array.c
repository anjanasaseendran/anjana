#include<stdio.h>
void main()
{
	int a[50];
	int n,i;
	printf("enter the size of the array\n");
	scanf("%d",&n);
	printf("enter elements: \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("elements are: \n");
	for(i=0;i<n;i++)
	{
		printf("%d\n",a[i]);
	}
}
