#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],a1[10],a2[10];
int i,j,m,n,p;
clrscr();
printf("enter the size of the array");
scanf("%d%d",&m,&n);
printf("enter the element of first array");
for(i=1;i<=m;i++)
{
scanf("%d",&a1[i]);
}
printf("enter the element of second array");
for(i=1;i<=n;i++)
{
scanf("%d",&a2[i]);
}
p=m+n;
for(i=1;i<=m;i++)
{
a[i]=a1[i];
}
j=1;
for(i=m+1;i<=p;i++)
{
a[i]=a2[j];
j++;
}
printf("the resultant array is");
for(i=1;i<=p;i++)
printf("%d\t",a[i]);
getch();
}