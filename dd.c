#include<stdio.h>
#include<conio.h>
int main(){
int a,b;
printf("Enter the number\n");
scanf("%d",&a);
b=a%10;
printf("The Last digit number is %d\n",b);
while(a>=10)
{
a=a/10;
}
printf("The first digit number is %d\n",a);
getch();
return(0);
}
