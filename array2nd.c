/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Program:WAP 
Lab Sheet No:24
Date:1 Feb,2017
*/
#include<stdio.h>
int main(){
	int a[10],i;
	for(i=0;i<10;i++)
		{
			printf("Enter a number:\n");
			scanf("%d",&a[i]);
		}
	for(i=0;i<10;i++)
		{
			printf("a[%d]=%d\n",i,a[i]);
		}
		return(0);
	}

