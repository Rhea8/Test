#include<stdio.h>
int cat(int a[15],int b[5]);
int ins(int a[15],int b[5]);
int add(int a[15]);
int stack(int a[15], int b[5]);
int main()
{
        int a[15], b[5], i, ret, ret1, ret2,e,o;
        printf("Enter 10 elemnts in array A\n");
                for(i=0;i<10;i++)
                {       scanf("%d", &a[i]);

                }

        printf("Enter 5 elements in array B \n");
                for(i=0;i<5;i++)
                {
                        scanf("%d", &b[i]);
                }
        ret=cat(a,b);
        printf("Array after concatenation\n");
        for(i=0;i<15;i++)
        {
                printf("%d \n", a[i]);
        }
        ret1=ins(a,b);
        printf("Array after inserting:\n");
        {
                for(i=0;i<15;i++)
                {
                printf("%d  \n", a[i]);
                }
        }
        ret2=add(a);
        printf("Even Addition: %d \n",e);
        printf("Odd Addition: %d\n", o);


}


int cat(int a[15], int b[5])
{
        int i,j;
        for(j=0;j<5;j++)
for(j=0;j<5;j++)
        {
                for(i=j+10;i<15;i++)
                {
                a[i]=b[j];
                }
        }
}


int ins(int a[15], int b[5])
{
        int i;

        for(i=0;i<5;i++)
        {
                a[i+5]=b[i];
        }

}

int add(int a[15])
{
int i,e=0,o=0;
for(i=0;i<15;i+=2)                                                                                                                                                                                        {
//if(a[i]%2==0)
{
e=a[i]+e;
}
}
return e;
for(i=1;i<15;i+=2)
{
o=a[i]+o;
}
  return o;
}