/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:04
Program:WAP to print area of triangle
Date:21 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,b,c,s,area,e;
printf("Enter the first side of triangle:");
scanf("%f",&a);
printf("Enter the second side of triangle:");
scanf("%f",&b);
printf("Enter the third side of triangle:");
scanf("%f",&c);
s=(a+b+c)/2;
e=s*(s-a)*(s-b)*(s-c);
area=pow(e,0.5);
printf("area of triangle is:%f",area);
getch();
return(0);
}
