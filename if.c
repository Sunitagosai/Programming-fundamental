#include<stdio.h>
#include<conio.h>
int main(){
int a;
printf("Enter the year:\n");
scanf("%d",&a);
if(a%4==0)
{printf("Leap year\n");}
else if(a%400==0)
{printf("Leap year\n");}
else if(a%100!=0)
{printf("Not leap year\n");}
getch();
return(0);
}
