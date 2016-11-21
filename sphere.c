/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:04
Program:WAP to print area and volume of sphere
Date:21 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
float r,area,volume;
printf("Enter the first side of sphere:\n");
scanf("%f",&r);
area=4*3.14*r*r;
volume=4/3*(3.14)*r*r*r;
printf("Area of sphere is:%f\n",area);
printf("Volume of sphere is:%f\n",volume);
getch();
return(0);
}
