#include <stdio.h> 
#include <conio.h> 
#include <stdlib.h> 
void main()
{
char cletter;
printf("Enter a letter from VIBGYOR :");
scanf("%c",&cletter);
switch(cletter)
{
case 'V':
printf("Violet");
break;
case 'I':
printf("Indigo");
break;
case 'B':
printf("Blue");
break;
case 'G':
printf("Green");
break;
case 'Y':
printf("Yellow");
break;
case 'O':
printf("Orange");
break;
case 'R':
printf("Red");
break;
default:
printf("Not a color letter from VIBGYOR");
}
getch();
}
