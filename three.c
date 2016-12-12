/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Lab Sheet no:11
Program:WAP to find largest three number using ternary operator
Date:12 Dec,2016
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
(a>b && a>c)?printf("%d is the largest number",a):
(b>a && b>c)?printf("%d is the largest number",b):printf("%d is the largest number",c);
getch();
return(0);
}
