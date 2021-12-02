#include <stdio.h>
void main()
{
char str1[100],str2[100],str3[200];
int i,j;
printf("Enter the First String :");
scanf("%s",str1);
printf("Enter the Second String:");
scanf("%s",str2);
while (str1[i]!='\0')
{
str3[j]=str1[i];
i++;
j++;
}
i=0;
while (str2[i]!='\0')
{
str3[j]=str2[i];
i++;
j++;
}
printf("concatenated string  is %s",str3);
}
