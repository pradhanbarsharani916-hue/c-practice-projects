#include<stdio.h>
int main()
{
float m1,m2,m3,m4,m5,total,percentage;
printf("enter physics marks -m1:");
scanf("%f",& m1);
printf("enter maths marks -m2:");
scanf("%f",& m2);
printf("enter chemistry marks-m3:");
scanf("%f",& m3);
printf("enter botany marks-m4:");
scanf("%f",& m4);
printf("enter AI marks-m5:");
scanf("%f",& m5);
total=m1+m2+m3+m4+m5;
percentage=total/5;
if (percentage>=90)
   printf("grade A");
 else if (percentage>=75)
            printf("grade B");
   else
         printf("fail");
}