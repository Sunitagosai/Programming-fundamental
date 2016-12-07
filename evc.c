/*
Student name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet no:11
Program:WAP to check no. odd or even
Date:7 Dec,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int x;
printf("Enter the first number:\n");
scanf("%d",&x);

if(x%2==0)
{
    printf("Even");
}
else
{
    printf("Odd");
}
getch();
return(0);
}
