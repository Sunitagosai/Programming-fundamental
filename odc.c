/*Student Name:Sunita Gosai
Subject:programming Fundamental
Lab Sheet no:11
Program:WAP to find the number is odd or even using ternary operator
Date:12 Dec,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int n;
printf("Enter the first number:\n");
scanf("%d",&n);
(n%2==0)?printf("%d is even",n):printf("%d is odd",n);
getch();
return(0);
}
