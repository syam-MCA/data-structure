#include<stdio.h>
void main()
{
int a[10],b[10],c[20],m,n,i,j,k,p;
printf("enter the no.of elements in the first array\n");
scanf("%d",&m);
printf("enter the no.of elements in the second array\n");
scanf("%d",&n);
printf("enter the elements in the first array\n");
for(i=0;i<m;++i)
{
scanf("%d",&a[i]);
}
printf("enter the elements in the second array\n");
for(j=0;j<n;++j)
{
scanf("%d",&b[j]);
}
i=0;
j=0;
k=0;
while(i<m && j<n)
{
if(a[i]<b[j])
{
c[k]=a[i];
i++;
k++;
}
else if(b[j]<a[i])
{
c[k]=b[j];
j++;
k++;
}
else
{
c[k]=a[i];
i++;
j++;
k++;
}
}
while(i<m)
{
c[k]=a[i];
i++;
k++;
}
while(j<n)
{
c[k]=b[j];
j++;
k++;
}
p=k;
printf("the array is\n");
for(k=0;k<p;++k)
printf("%d",c[k]);
}



