#include <stdio.h>
#include <stdlib.h>

int main()
{
    char h;
    char b[15];
    int a;
    int e;
    int i;
    int data[5];
    int sum=0;
    float avg;
   printf("press any button  to start\n");
   scanf("%c",&h);
   printf("what is your name\n");
   scanf("%s",&b);
   printf("hi %s",b);
   printf("\nhow old are you");
   scanf("%d",&a);
   if(a>16)
   {
       printf("you are eligible");
   }
   else
   {
       printf("sorry you are not eligible");
       return 0;
   }
   printf("\nwe need to ensure that you are not a robot. please rewrite this below '100'\n");
   scanf("%d",&e);
   if(e=100)
   {
       printf(".....");
   }

       else
       {
           printf("you cannot proceed further");
       }




   printf("enter your marks  in the following order to evaluate your performance\n english\n economics\n enterpreneurship\n accountancy\n hindi");
   for(i=0;i<5;i++)
   {
       scanf("%d",&data[i]);
   }
   for(i=0;i<5;i++)
   {
       sum=sum+data[i];
   }
   avg=sum/5;

   printf("the percentage of your marks is %f\n",avg);

   if(avg>85)
   {
       printf("congragulations you have performed well");
   }
   else
   {
       printf("you could do better");
   }

}

