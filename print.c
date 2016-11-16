/*Student Name:Sunita Gosai
Subject:Programming fundamental
Lab sheet no:1
Program:Write a C program to print sum of two numbers asked from users
Date:16 Nov,2016
*/

#include<stdio.h>
#include<conio.h>
int main(){
int a,b,sum;
printf("Enter first Number:\n");
scanf("%d",&a);
printf("Enter Second Number:\n");
scanf("%d",&b);
sum=a+b;
printf("Sum of two numbers is:%d",sum);
getch();
return(0);
}
