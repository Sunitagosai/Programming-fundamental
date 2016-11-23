/*
Student Name:Sunita Gosai
Subject: Programming Fundamental
Lab sheet No:05
Program:WAP to find sum of digits of there digits number
Date:23 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float x,y,a,b,c,Dis;
printf("Enter the first number:");
scanf("%f",&a);
printf("Enter the second number:");
scanf("%f",&b);
printf("Enter the third number:");
scanf("%f",&c);
Dis=(b*b)-(4*a*c);
//printf("%f", Dis);
x=pow(Dis,0.5)/(2*a);
y=-pow(Dis,0.5)/(2*a);
printf("Quadratic equation is:%f\n",x);
printf("Quadratic equation is:%f\n",y);
getch();
return(0);
}
