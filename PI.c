/*
Student Name:Sunita Gosai
Subject :Programming Fundamental
Lab sheet no:03
Program:WAP to calculate area and circumference of circle having radius
Date:18 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
#define PI 3.14
int main(){
float r,area,circumference;
printf("Enter the radius:\n");
scanf("%f",&r);
area=PI*r*r;
circumference=2*PI*r;
printf("Area of circle is:%f\n",area);
printf("Circumference of circle is:%f",circumference);
getch();
return(0);
}
