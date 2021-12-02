#include <stdio.h>
void main()
{
  char str[30];
  printf("Enter your String(Upper case):");
  scanf("%[^\n]", str);
  int i = 0;
  while (str[i] != '\0')
  {
    if(str[i]>='A' && str[i]<='Z')
      str[i] = str[i]+32;
    i++;
  }
  printf("Lower case String is:%s", str);
}
