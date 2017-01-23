/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Program:WAP to print armstrong number between 1 to 100
Lab Sheet No:22
Date:23,Jan 2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
int  i,n,rem,rev=0;
printf("Enter the number:\n");
scanf("%d",&n);
i=n;
while(n>0)
{
    rem=n%10;
    rev=rev+rem*rem*rem;
    n=n/10;
}
if(i==rev)
{
    printf(" Arm strong number");
}
else
{
    printf("Not arm strong");
}
getch();
return(0);

}
