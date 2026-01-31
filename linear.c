#include<stdio.h>
void main()
{
int a[10],n,i,k,count;
printf("enter the size of the array\n");
scanf("%d",&n);
printf("enter the elements\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("enter the element to be searched\n");
scanf("%d",&k);
count=0;
for(i=0;i<n;i++)
{
if(a[i]==k)
{
count++;
}
}


printf("number of the occurance of the element=%d\n",count);

}
