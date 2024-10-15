#include<stdio.h>
 main()
{
int decimal,rem,i=1,bin=0;
printf("the decimal number is:");
scanf("%d",&decimal);
while(decimal!=0)
{
rem=(decimal%2);
decimal/=2;
bin=bin+rem*i;
i=i*10;
}
printf("binary number is %d:",bin);
}
    