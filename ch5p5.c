#include<stdio.h>

int main()
{
 int a;
 scanf("%d",&a);

 if(a%30==0)
 printf("A");
 else if(a%6==0)
 printf("B");
 else if(a%10==0)
 printf("C");
 else if(a%15==0)
 printf("D");
 else if(a%2==0 || a%3==0 || a%5==0)
 printf("E");
 else
 printf("N");
 return 0;


}
