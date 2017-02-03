/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Program:WAP to declare and print multidimenstional array
Lab Sheet No:25
Date:3 Feb,2017
*/
#include<stdio.h>
int main(){
int a[2][2]={1,2,3,4},i,j;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
printf("\n");
}
return(0);
			}
