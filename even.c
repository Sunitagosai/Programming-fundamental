/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:14
Program:WAP to check no. is odd/even using while loop
Date:2 Jan,2016
*/
#include<stdio.h>
int main(){
int n;
printf("Enter the first number:\n");
scanf("%d",&n);
while(n%2==0)

{
	printf("No. is even",n);
	n--;
}
return(0);
}
