/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:20
Program:WAP to find diameter,circumference and area of circle using function
Date:18,Jan2017
*/
#include<stdio.h>
#include<stdlib.h>


void diameter(float e);
void circumference(float f);
void area(float g);

int main(){
	float r;
	printf("Enter the radius:\n");
	scanf("%f",&r);
	
diameter(r);
circumference(r);
area(r);
return(0);
}
void diameter(float e){
	
	printf("%f is diameter of circle\n",2*e); 
}
void circumference(float f){
	float circumference;
	circumference=2*(3.14)*f;
	printf("%f is circumference of circle\n",circumference);
}
void area(float g){
	float area;

	area=(3.14)*g*g;
	printf("%f is area of circle\n",area);
} 
