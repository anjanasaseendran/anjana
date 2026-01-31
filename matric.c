#include<stdio.h>
void main()
{
int a[50][50];
int m,n,i,j;
printf("enter the number of rows\n");
scanf("%d",&m);
printf("enter the number of columns\n");
scanf("%d",&n);
printf("enter elements:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("elements are:\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
}
