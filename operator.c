/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:07
Program:WAP to enter marks of seven subjects
Date:28 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
int main(){
float a,b,c,d,e,f,g,Total,Average,Percentage;
printf("Enter the computer architecture:\n");
scanf("%f",&a);
printf("Enter the organization management:\n");
scanf("%f",&b);
printf("Enter the algebra:\n");
scanf("%f",&c);
printf("Enter the discrete mathematics:\n");
scanf("%f",&d);
printf("Enter the interactive skill:\n");
scanf("%f",&e);
printf("Enter the software engineering:\n");
scanf("%f",&f);
printf("Enter the programming fundamental:\n");
scanf("%f",&g);
Total=a+b+c+d+e+f+g;
Average=Total/7;
Percentage=(Total/700)*100;
printf("The Total marks of seven subject is:%f\n",Total);
printf("The Average marks of seven subject is:%f\n",Average);
printf("The Percentage marks of seven subject is:%f\n",Percentage);
getch();
return(0);
}
