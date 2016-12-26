#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("Enter the first number:\n");
scanf("%d",&a);
printf("Enter the second number:\n");
scanf("%d",&b);
printf("The values of a and b before swap is %d and %d\n",a,b);
a=a-b;
b=a+b;
a=b-a;
printf("The values of a and b after swap is %d and %d",a,b);
getch();
return(0);
}
