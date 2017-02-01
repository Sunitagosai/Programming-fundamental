/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Program:WAP to find maximum value in an array of 10 elements
Lab Sheet No:24
Date:1 Feb,2017
*/
#include<stdio.h>
int main(){
int a[10],i,max=0;
for(i=0;i<10;i++)
	{
		printf("Enter a number:\n");
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		if (max<a[i])
		{
			max=a[i];
		}
		
		
	}
	printf("The maximum value is:%d",max);
	return(0);
}
