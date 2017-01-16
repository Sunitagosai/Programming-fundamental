#include<stdio.h>
int main(){
int i,n,rev=0,rem=0;

	printf("Enter the numberof rows:\n");
	scanf("%d",&n);

i=n;
while(n>0)
{
	rem=n%10;
	rev=rev*10+rem;
	n=n/10;
}
if(i==rev)
{
printf("Pallindrome:\n");
}
else
{printf("Not pallindrome:\n");}

return(0);
}
