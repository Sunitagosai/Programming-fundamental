#include<stdio.h>
void area();
int main(){
	int r;
		printf("Enter the radius:\n");
	scanf("%d",&r);
area(r);
return(0);
}
void area(int r){
	float a;
		
	a=3.14*r*r;
	printf("The area is %f",a);
}
