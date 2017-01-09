#include<stdio.h>
#include<conio.h>
int main(){
int ASCII;
char c;
printf("Enter the character:\n");
scanf("%c",&c);
ASCII=c;
(ASCII>=65&&ASCII<=90)||(ASCII>=97&&ASCII<=122)?printf("Character is alphabet"):printf("Character isn't alphabet");
getch();
return(0);
}


