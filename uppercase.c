#include <stdio.h>
void main()
{
  char str[30];
  printf("Enter your String(Lower case):");
  scanf("%[^\n]", str);
  int i = 0;
  while (str[i] != '\0')
  {
    if(str[i]>='a' && str[i]<='z')
      str[i] = str[i]-32;
    i++;
  }
  printf("Upper case String is:%s", str);
}
