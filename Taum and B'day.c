#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
long int min(long int a, long int b, long int c);
int main() {
int t;
long int b,w,x,y,z;
scanf("%d",&t);
while(t--)
{
long int sum=0;
long int sum1=0,sum2=0;
scanf("%ld%ld",&b,&w);
scanf("%ld%ld%ld",&x,&y,&z);
sum=b*x+w*y;
sum1=(b+w)*x+w*z;
sum2=(b+w)*y+b*z;
printf("%ld\n",min(sum,sum1,sum2));
}
/* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
return 0;
}
long int min(long int a,long int b, long int c)
{
if(a<=b&&a<=c)
return a;
if(b<=a&&b<=c)
return b;
return c;
}s