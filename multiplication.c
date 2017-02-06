/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Program:WAP to create a structure with 3 float value to them in main method and perform
multiplication in a function multiply() passing structure data as argument
Lab Sheet No:26
Date:6 Feb,2017
*/
#include<stdio.h>
struct multiplication{
	float a;
	float b;
	float c;
};
void multiply(float x,float y,float z);
int main(){
	struct multiplication mul;
		printf("Enter the first number:\n");
		scanf("%f",&mul.a);
			printf("Enter the  second number:\n");
			scanf("%f",&mul.b);
				printf("Enter the third number:\n");
				scanf("%f",&mul.c);
					multiply(mul.a,mul.b,mul.c);
					return(0);
					}
			void multiply(float x,float y,float z){
			float result;
			result=x*y*z;
			printf("The multiplication number is %f\n",result);
		}
