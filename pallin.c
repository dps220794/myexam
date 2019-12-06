#include<stdio.h>
int main()
{
int s=0,a,d,k;
a=12321;
printf("Number-%d",a);
k=a;
while(a!=0)
{
d=a%10;
s=s*10+d;
a=a/10;
}
if(k==s)
printf("pallindrome...%d",k);
else
printf("Not a pallindrome...! %d",k);
return 0;
}
