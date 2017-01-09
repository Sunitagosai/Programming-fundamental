#include<stdio.h>
#include<conio.h>
int main(){
int n,i;
printf("Enter the number:\n");
scanf("%d",&n);
i=n;
while(i>=1)
{
    printf("%d\n",i);
    i--;
}
getch();
return(0);
}
