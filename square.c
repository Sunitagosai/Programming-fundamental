/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:07
Program:WAP to enter any number and calculate its square
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
int a,square;
printf("Enter the first number:\n");
scanf("%d",&a);
square=pow(a,2);
printf("The square of this number is:%d\n",square);
getch();
return(0);
}
