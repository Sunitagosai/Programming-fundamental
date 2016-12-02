/*
StudentName:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:09
Program:WAP to demonstration the working of increment & decrement operators
Date:2 Dec,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int a;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("The increment post is:%d\n",a++);
printf("The increment pre is:%d\n",++a);
printf("The decrement post is:%d\n",a--);
printf("The decrement pre is:%d\n",--a);
getch();
return(0);
}
