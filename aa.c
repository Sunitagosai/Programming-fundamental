#include<stdio.h>
#include<conio.h>
int main(){
int a,b,temp;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
printf("Before swap value of a&b is:%d & %d\n",a,b);
temp=a;
a=b;
b=temp;
printf("After swap value of a&b is:%d & %d\n",a,b);
getch();
return(0);
}
