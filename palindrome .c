#include <math.h>
int main()
{
int num,rev=0,r,i;
printf("enter the value of num");
scanf("%d",&num);
i=num;
while(num>0)
 {
 r=num%10;
 rev=rev*10+r;
 num=num/10;
 }
 if(num>=0&&num<=9)
 printf("invalid input");
 else if(i==rev)
 {
 printf("\n%d is a palindrome number",i);
 }
 else
 printf("\n%d is not a palindrome number",i);
 
 
}