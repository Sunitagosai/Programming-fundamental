/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Program:WAP to declare and print multidimenstional array
Lab Sheet No:25
Date:3 Feb,2017
*/
#include<stdio.h>
int main(){
int a[3][3]={1,2,3,4,5,6,7,8,9},i,j;
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
		{
			printf("%d\t",a[i][j]);
		}
printf("\n");
}
return(0);
			}
