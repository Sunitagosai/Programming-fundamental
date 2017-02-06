/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Program:WAP to create a structure with two integer number & call the structure in main method and add 
both integer value and display the result.
Lab Sheet No:25
Date:3 Feb,2017
*/
#include<stdio.h>
struct addition{
	int student_id;
	int registration_number;
	float fee;
				};
				int main(){
					int sum=0;
					struct addition sunita;
						sunita.student_id=101;
						sunita.registration_number=1005;
						sunita.fee=10000.50;
					printf("sunita id=%d\n",sunita.student_id);
					printf("sunita registration number=%d\n",sunita.registration_number);
					printf("sunita fee=%f\n",sunita.fee);
		printf("\n");
					struct addition swikriti;
						swikriti.student_id=102;
						swikriti.registration_number=555;
						swikriti.fee=666.98;
					printf("swikriti id=%d\n",swikriti.student_id);
					printf("swikriti registration number=%d\n",swikriti.registration_number);
					printf("swikriti fee=%f\n",swikriti.fee);
					sum=sunita.student_id+sunita.registration_number+sunita.fee+swikriti.student_id+swikriti.registration_number+
					swikriti.fee;
					printf("the addition of two integer is %d",sum);
					return(0);
				}
