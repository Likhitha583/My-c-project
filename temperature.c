#include <stdio.h>
int main()
{
float f,c;
printf("enter the value of fahrenheit:");
scanf("%f",&f);
c=((5.0/9.0)*(f-32.0));
printf("the temperature in celsius is %f",c);
}