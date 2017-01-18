/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:20
Program:WAP to enter length and breadth and display area of rectangle using function
Date:18,Jan2017
*/
#include<stdio.h>
#include<math.h>
void area();
int main(){
area();
return(0);
}
void area(){
int l,b,area;
printf("Enter length of rectangle:\n");
scanf("%d",&l);
printf("Enter breadth of rectangle:\n");
scanf("%d",&b);
area=l*b;
printf("Area of rectangle is :%d\n",area);
}
