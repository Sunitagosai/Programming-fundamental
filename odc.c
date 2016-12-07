/*
Student name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet no:11
Program:WAP to check the largest number
Date:7 Dec,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b,c;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
printf("Enter the third number:\n");
scanf("%d",&c);
if(a>=b && a>=c)
{
    printf("Largest is:%d\n",a);
}
else if (b>=a && b>=c)
{
    printf("Largest is:%d",b);
}
else
{
    printf("Largest is:%d",c);
}
getch();
return(0);
}
