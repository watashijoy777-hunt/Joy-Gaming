#include<stdio.h>

void main ()

{
    int length,width;
    
    printf("Enter The length");
    scanf("%d",&length);
    
    printf("Enter The width");
    scanf("%d",&width);
    
    if(length>width)
    {
        printf("Shape is portrait");
    }
      if(length<width)
    {
        printf("Shape is landscape");
    }
      if(length==width)
    {
        printf("Shape is square");
    }
    
}
