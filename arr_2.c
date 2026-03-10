


#include<stdio.h>

void main ()
{
    int age[5];
    int i;

    for(i=0;i<=4;i++)

    {
        printf("enter %d student age ",i+1);
        scanf("%d",&age[i]);
    }

   for(i=0;i<=4;i++)
   {
       printf("%d student age %d\n",i+1,age[i]);
   }


}