#include<stdio.h>
int main()
{
int n,a[5],b[5],i,j,k=0,c[10],t;
printf("\n Enter size");
scanf("%d",&n);
printf("\n Enter A array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\n Enter B array elements");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
for(i=0;i<n;i++)
{
c[k]=a[i];
k=k+1;
}
for(i=0;i<n;i++)
{
c[k]=b[i];
k=k+1;
}
printf("\n Array A elements \t");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
printf("\n Array B elements \t");
for(i=0;i<n;i++)
printf("%d\t",b[i]);
printf("\n Array C elements \t");
for(i=0;i<=k;i++)
printf("%d\t",c[i]);
//sorting
for(i=0;i<k;i++)
{
for(j=i+1;j<k;j++)
{
if(c[i]>c[j])
{
t=c[i];
c[i]=c[j];
c[j]=t;
}
}
}
printf("\n Sorted Array \t");
for(i=0;i<k;i++)
printf("%d\t",c[i]);
return 0;
}

