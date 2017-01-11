#include<stdio.h>
#include<conio.h>
int main(){
int a,count=1;
printf("Enter the digit number\n");
scanf("%d",&a);
do
{
    a=a/10;
    count=count+1;
}
while(a>=10);
printf("The count digit number is%d\n",count);
getch();
return(0);
}
