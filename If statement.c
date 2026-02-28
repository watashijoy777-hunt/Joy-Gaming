#include<stdio.h>

void main()
{
    int cube,number;

    printf("Enter The number ");
    scanf("%d",&number);

    if(number<0)
    {
        number=0-number;
        printf("Convert the number nagative into positive");
    }
    cube=number*number*number;
    printf("cube:%d",cube);
}

