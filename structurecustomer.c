/*
Student Name:Sunita Gosai
Subject:programming Fundamental
Program:WAP to store customer details(customer-id,no. of product-purchased,total-payment
Lab Sheet No:25
Date:3 Feb,2017
*/
#include<stdio.h>
struct customer{
	int customer_id;
	int product_purchased;
	float total_payment;
				}sunita;
	int main(){
		struct customer sunita;
			printf("Enter the sunita id:\n");
			scanf("%d",&sunita.customer_id);
			printf("Enter the total product purchased id:\n");
			scanf("%d",&sunita.product_purchased);
			printf("Enter the total payment:\n");
			scanf("%f",&sunita.total_payment);
	
		printf("sunita id=%d\n",sunita.customer_id);
			printf("sunita product purchased=%d\n",sunita.product_purchased);
				printf("sunita total payment=%f\n",sunita.total_payment);
				return(0);
			}
				
