/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Program:WAP to find sum of elements ofan array containing 10 elements
Lab Sheet No:24
Date:1 Feb,2017
*/
#include<stdio.h>
int main(){
	int a[10],i,sum=0;
	for(i=0;i<10;i++)
		{
			printf("Enter a number:\n");
			scanf("%d",&a[i]);
		}
		for(i=0;i<10;i++)
			{
		sum=sum+a[i];
			}
			printf("The sum of elements of array:%d",sum);
		return(0);
		}
