#include <stdio.h>
main(){
int a,b,c,d;
printf(enter the values of a,b,c,d);
scanf("%d %d %d %d", &a,&b, &c, &d);
if(a>b)
  if(a>c)
    if(a>d)
      printf("a is big"); 
    else 
     printf("d is big");
  else
   if (c>d) 
    printf("c"); 
   else 
    printf("d");
else
  if(b>c)
    if(b>d)
     printf("b");
    else
     printf("d");
   else
     if(c>d)
      printf("c");
     else
      printf("d");
}
