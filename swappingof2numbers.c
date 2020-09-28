#include<stdio.h>

int main()
{
/*Swapping of 2 numberes without using temporary variable */
int a=4,b=26;
printf("Before swapping a=%d and b=%d",a,b);
a=a+b; //a=4+26=30
b=a-b; //b=30-26=4
a=a-b; //a=30-4=26
printf("After swapping a=%d and b=%d",a,b);
}
