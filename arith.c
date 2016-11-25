/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:06
Program:WAP to print arithmetic operation
Date:25 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a,b,Add,Sub,Multi,Div,Modulus;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
Add=a+b;
Sub=a-b;
Multi=a*b;
Div=a/b;
Modulus=a%b;
printf("The Add number is:%d\n",Add);
printf("The Sub number is:%d\n",Sub);
printf("The Multi number is:%d\n",Multi);
printf("The Div number is:%d\n",Div);
printf("The Modulus number is:%d\n",Modulus);
getch();
return(0);
}
