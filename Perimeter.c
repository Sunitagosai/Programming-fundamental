/*
Student Name:Sunita gosai
Subject:Programming Fundamental
Lab Sheet No:04
Program:WAp to print area and perimeter of rectangle
Date:21 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
int main (){
float area,l,b,perimeter;
printf("Enter the first side of rectangle:\n");
scanf("%f",&l);
printf("Enter the second side of rectangle:\n");
scanf("%f",&b);
area=l*b;
perimeter=2*(l+b);
printf("Area of rectangle is:%f\n",area);
printf("Perimeter of rectangle is:%f",perimeter);
getch();
return(0);
}
