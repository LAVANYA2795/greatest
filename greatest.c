#include<stdio.h>
int main()
{
int a,b,c;
printf("Enter the values of a,b,&c\n");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
printf("\n a is greatest");
if((b>c)&&(b>a))
printf("\n b is greatest");
if((c>a)&&(c>b))
printf("\n c is greatest");
return 0;
getch();
}
