/*
Student Name:Sunita Gosai
Subject:Programming Fundamental
Lab Sheet No:06
Program:WAP to enter P,T,R and calculate compound Interest
Date:25 Nov,2016
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
    float P,T,R,CI,E;
    printf("Enter the Principle:\n");
    scanf("%f",&P);
    printf("Enter the Time:\n");
    scanf("%f",&T);
    printf("Enter the Rate:\n");
    scanf("%f",&R);
    E=1+R/100;
    CI=(P*pow(E,T)-1);
    printf("Compound Interest is:%f\n",CI);
    getch();
    return(0);
}
