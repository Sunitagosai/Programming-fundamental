#include<stdio.h>
#include<conio.h>
int main(){
int a;
printf("Enter the year:\n");
scanf("%d",&a);
(a%4==0)?printf("The year is leap year"):
(a%400==0)?printf("The year is leap year"):
(a%100!=0)?printf("The year isn't leap year"):printf("The year is a leap year");
getch();
return(0);
}

