/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Program:WAP to create a structure,assign value to it and display the value
Lab Sheet No:25
Date:3 Feb,2017
*/
#include<stdio.h>
struct student{
	int student_id;
	int registration_number;
	float fee;
				};
				int main(){
					struct student sunita;
						sunita.student_id=101;
						sunita.registration_number=1005;
						sunita.fee=10000.50;
					printf("sunita id=%d\n",sunita.student_id);
					printf("sunita registration=%d\n",sunita.registration_number);
					printf("sunita fee=%f\n",sunita.fee);
					return(0);
				}
	
