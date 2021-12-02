#include<stdio.h>
int strlen (char str[]);

void main()
{
int len;
char str[100];

printf("Enter the String:");
scanf("%s", str);

len= strlen(str);
printf(" length of string = %d",len);
}
int strlen (char str[])
{
int i=0;
while (str[i] != '\0')
{
i++;
}
return i;
}
