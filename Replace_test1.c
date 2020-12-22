#include<stdio.h>
int i,j;
int ex(int a[10],int b[5]);
int ins(int a[10],int b[5]);
int main()
{
 int j,i,a[5], b[5], ret1, ret2;

 printf("Enter values in A:\n");
 {
  for(i=0;i<5;i++)
 scanf("%d",&a[i]);
 }
 printf("Enter values in B:\n");
 {
  for(i=0;i<5;i++)
 scanf("%d",&b[i]);
 }
 ret1=ex(a,b);
 printf("Modified A:\n");
 for(i=0;i<5;i++)
 {
  printf("%d\t",a[i]);
 }
 printf("\nModified B:\n");

  for(i=0;i<5;i++)
 {
  printf("%d\t",b[i]);
 }
 ret2=ins(a,b);
printf("\nAfter insertion:\n");
 for(i=0;i<10;i++)
 {
  printf("%d\t",a[i]);
 }
}

 int ex(int a[10],int b[5])
{
 for(i=0;i<5;i+=2)
{
  a[i]=b[i+1];
int ins(int a[10], int b[5])
{                                                                                                                                                                                                          for(i=0;i<5;i++)
 {
  a[i+3]=b[i];
 }
}