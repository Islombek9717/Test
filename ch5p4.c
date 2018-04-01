#include <stdio.h>

int main()
{
 int a,b,c,max,min;

 scanf("%d%d%d",&a,&b,&c);
 max=a>=b ? a:b;
 min=a<=b ? a:b;
 max=c>max ? c:max;
 min=c<max ? c:min;
 printf("%d %d",max,min);
 return 0;



}
