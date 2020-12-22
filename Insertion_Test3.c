
#include<stdio.h>
int main()
{
int i,j,ret2,a[50],b[50],m,n,c[50],d[50];

printf("Enter values for A:\t");
for(i=0;i<10;i++)
{
 scanf("%d",&a[i]);
}
printf("Enter values for B:\n");
for(i=0;i<5;i++)
 {
  scanf("%d",&b[i]);
 }
printf("Array A after insertion: \n");
 for(i=0;i<15;i++)
{
  d[i]=a[i];

}
 for(i=0;i<10;i++)
 {
  a[i+5]=b[i];
  c[i]=a[i];
 printf("%d\t",c[i]);
}

 for(i=0;i<15;i++)
 {
  a[i]=d[i];
 }
 for(i=5;i<10;i++)
 {
  a[i+5]=a[i];
 printf("%d\t",a[i]);
 }
}