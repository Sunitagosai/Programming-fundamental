/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Lab Sheet no:11
Program:WAP to find largest two number using ternary operator
Date:12 Dec,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
(a>b && b>a)?printf("%d is largest number",a):printf("%d is the largest number",b);
getch();
return(0);
}
