/*
Student Name:Sunita Gosai
Subject: Programming Fundamental
Lab sheet No:05
Program:WAP to find sum of digits of there digits number
Date:23 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
float a,b,c,sum;
printf("Enter the first digit of number:");
scanf("%f",&a);
printf("Enter the second digit of number:");
scanf("%f",&b);
printf("Enter the third digit of number:");
scanf("%f",&c);
sum=a+b+c;
printf("Sum of three digit number is:%f",sum);
getch();
return(0);
}
