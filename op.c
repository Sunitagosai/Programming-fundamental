/*
Student Name:Sunita Gosai
Subject:Programming fundamental
Lab Sheet No:08
Program:WAP to use assignment operator
Date:30 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
int main (){
int a,b;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
a+=b;
a-=b;
a*=b;
a/=b;
printf("The Assignment Operator is:+=%d\n",a);
printf("The Assignment Operator is:-=%d\n",a);
printf("The Assignment Operator is:*=%d\n",a);
printf("The Assignment Operator is:/=%d\n",a);
getch();
return(0);
}
