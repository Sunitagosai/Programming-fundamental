/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab sheet no:02
Program:WAP to print simple interest ask from users
Date:18 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
float P,T,R,Interest;
printf("enter the principal:");
scanf("%f",&P);
printf("enter the time:");
scanf("%f",&T);
printf("enter the rate:");
scanf("%f",&R);
Interest=(P*T*R)/100;
printf("simple interest is :%f",Interest);
getch();
return(0);
}
