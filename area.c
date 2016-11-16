/*
Students Name:Sunita Gosai
Subject:Programming Fundamental
Lab sheet no:02
Program:WAP to print area of triangle,base & height are asked from users
Date:16 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
float b,h,area;
printf("enter first number:");
scanf("%f",&b);
printf("enter second number:");
scanf("%f",&h);
area=0.5*b*h;
printf("area of triangle is:%f",area);
getch();
return(0);
}
