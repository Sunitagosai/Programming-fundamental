#include<stdio.h>
#include<conio.h>
int main(){
int a,b,i;
printf("Enter the number\n");
scanf("%d",&a);
b=a%10;
printf("The fourth digit number is %d\n",b);
for(i=1;i<4;i++)
{
a=a/10;
}
printf("The first digit number is %d\n",a);
getch();
return(0);
}
