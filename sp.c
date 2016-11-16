/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab sheet no:02
Program:WAP to print product & sum ask from user
Date:16 Nov,2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
float a,b,c,product,sum;
printf("enter first number:\n");
scanf("%f",&a);
printf("enter second number:\n");
scanf("%f",&b);
printf("enter third number:\n");
scanf("%f",&c);
product=a*b*c;
sum=a+b+c;
printf("product of three numbers is:%f\n",product);
printf("sum of three numbers is:%f",sum);
getch();
return(0);
}
