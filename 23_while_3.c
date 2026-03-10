#include<stdio.h>
void main()
{
    int number,factorial=1;
    printf("enter number:");
    scanf("%d",&number);
   
    while(number>1)
    {

        factorial=factorial*number;
        number--;
    }
    printf("%d",factorial);
}