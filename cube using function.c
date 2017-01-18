/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:20
Program:WAP to find cube of any number using function with no argument
Date:18,Jan2017
*/
#include<stdio.h>
void cube();
int main(){
	cube();
	return(0);
}
void cube(){
int n,result;
printf("Enter any number:\n");
scanf("%d",&n);
result=n*n*n;
printf("%d is cube number\n",result);
}
