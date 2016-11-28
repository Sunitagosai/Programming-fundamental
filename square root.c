/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:07
Program:WAP to enter any number and calculate its square root
Date:28 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
float a,sq;
printf("Enter the first number:\n");
scanf("%f",&a);
sq=pow(a,0.5);
printf("The square root of this number is:%f",sq);
getch();
return(0);
}
