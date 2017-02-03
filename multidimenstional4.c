/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Program:WAP to add two matrices [3*3],ask input from user
Lab Sheet No:25
Date:3 Feb,2017
*/
#include<stdio.h>
int main(){
int a[3][3],b[3][3],c[3][3],d[3][3],i,j;
for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
		{
	printf("Enter the first number:\n");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<3;i++)
		{
	for(j=0;j<3;j++)
			{
			printf("Enter the second number:\n");
			scanf("%d",&b[i][j]);
			}
		}
	for(i=0;i<3;i++)
		{
	for(j=0;j<3;j++)
			{
			printf("Enter the third number:\n");
			scanf("%d",&d[i][j]);
			}
		}
		
	for(i=0;i<3;i++)
		{
	for(j=0;j<3;j++)
			{
		c[i][j]=a[i][j]+b[i][j]+d[i][j];
			}
		
		}
		printf("The sum of three matrices is:\n");
	for(i=0;i<3;i++)
			{
	for(j=0;j<3;j++)
				{
				printf("%d\t",c[i][j]);
				}
				printf("\n");
			}
		return(0);
			}
	
