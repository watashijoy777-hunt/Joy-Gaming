#include<stdio.h>

struct studinfo 
{
    char name[30];
    char gender;
    int age;
    float weight;
};

void main ()
{
    struct studinfo s;

     printf("\n Enter your name :");
     gets(s.name);

     fflush(stdin);

     printf("Enter a gender:");
     scanf(" %c",&s.gender);

      printf("Enter a age:");
     scanf("%d",&s.age);

      printf("Enter a weight");
     scanf("%f",&s.weight);

     printf("The studentinfo is : \n name : %s \n Gender : %c\n  weight  : %.2f\n age : %d",s.name,s.gender,s.weight,s.age);


}


   