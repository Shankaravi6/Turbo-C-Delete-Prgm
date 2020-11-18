#include<studio.h>
#include<conio.h>
void main()
{
char a[100];
clrscr();
printf("\nEnter the File Name:");
gets(a);
if(remove(a)==0);
printf("\nFile Deleted Successfully");
getch();
}
