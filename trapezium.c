/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:04
Program:WAP to print area of trapezium of triangle
Date:21 Nov 2016
*/
#include<stdio.h>
#include<conio.h>
int main (){
float a,b,h,area;
printf("Enter the first side of triangle:");
scanf("%f",&a);
printf("Enter the second side of triangle:");
scanf("%f",&b);
printf("Enter the third side of triangle:");
scanf("%f",&h);
area=0.5*(a+b)*h;
printf("Area of trapezium is:%f",area);
getch();
return(0);
}
