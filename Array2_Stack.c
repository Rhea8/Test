#include<stdio.h>
int a[10] = {1,2,3,4,5,6,7,8,9,10};
int b[5] = {11,12,13,14,15};
int top,i, stack[15];
int cat(int a[15],int b[5]);
int push();
int pop();

int main()
{
int ret1, ret2, ret3;
ret1=cat(a,b);
for(i=0;i<15;i++)
{
printf("%d \t",a[i]);
}
ret2= push();
ret3= pop();
}

int cat(int a[15], int b[5])
{
        int i,j=0;
        {
                   for(i=0;i<10;i++)
                {
                a[i];
                }
                for(j=0;j<5;j++)
                {
                        i=j+10;
                        a[i]=b[j];
                        i++;
                }
        }

}

int push()
{
top=0;
for(i=0;i<15;i++)
{printf("%d",a[i]);}
        for(i=0;i<15;i++)
        {
stack[top]=a[i];                                                                                                                                                                                          top++;
        printf("\n Push: %d \t",stack[top]);
        }
}

int pop()
{
top=15;
        for(i=15;i>0;i--)
        {
        stack[top]=a[i];
        top--;
        printf(" \n Pop: %d \t", stack[top]);
        }
        printf("\n Array B:\n");
        for(i=14;i>9;i--)
        { printf("%d \t",stack[i]);
        }
        printf("\n Array A: \n");
        for(i=9;i>=0;i--)
        {printf("%d \t", stack[i]);
        }
}