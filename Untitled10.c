#include<stdio.h>

int main()
{
 int m;
 scanf("%c",&m);

 if(m>='A' && m<='Z'){
  m=m+32;
  printf("This is %c",m);
 }
 else if (m>='a' && m<='z'){
        m=m-32;
    printf("%c",m);
 }
   else {
        printf("none");

   }

 return 0;

}
