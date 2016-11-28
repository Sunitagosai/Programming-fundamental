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
float a,sqrt;
printf("Enter the first number:\n");
scanf("%f",&a);
sqrt=pow(a,0.5);
printf("The square root of this number is:%f",sqrt);
getch();
return(0);
}
