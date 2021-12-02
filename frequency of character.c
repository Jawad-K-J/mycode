#include <stdio.h>
#include <string.h>
void printFrequency(int freq[])
{
	for (int i = 0; i < 26; i++)
        {
		if (freq[i] != 0)
		{
         printf("%c - %d\n",i + 'a', freq[i]);
		}
	    }
}

void findFrequncy(char S[])
{
	int i = 0;
	int freq[26] = { 0 };

	while (S[i] != '\0')
    {
        freq[S[i]-'a']++;
		i++;
	}
	printFrequency(freq);
}
void main()
{
	char str[100];
    printf("Enter your String:");
	scanf("%[^\n]", str);
	findFrequncy(str);
}
