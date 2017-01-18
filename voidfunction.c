#include<stdio.h>
void function1(int num);
int main(){
	int num;
	printf("Enter the number:\n");
	scanf("%d",&num);
function1(num);
return(0);
}
void function1(int num){
	int mul;
	mul=num*10;
	printf("The number is %d",mul);
}
