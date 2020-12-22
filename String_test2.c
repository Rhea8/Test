
#include<stdio.h>
#include<string.h>
int main()
{
char s[5], r[5];
int i,j=0;
printf("Enter string\n");
scanf("%s",s);
printf("Reverse \n");
for(i=4;i>=0;i--)
{
printf("%c",s[i]);
}
return 0;

}
