/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:11
Program:WAP to use logical operator
Date:7 Dec,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter the first number:\n");
scanf("%d",&n);
if(n>=80)
{
    printf("Distinction");
}
else if(n>=60 && n<80)
{
    printf("First");
}
else if(n>=50 && n<80)
{
    printf("Second");
}
else if(n>=35 && n<80)
{
    printf("Third");
}
else
{
    printf("Fail");
}
getch();
return(0);
}
