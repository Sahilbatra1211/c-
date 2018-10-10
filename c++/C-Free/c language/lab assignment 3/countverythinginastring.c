#include<stdio.h>
int main()
{
	char a[100];
	int length=0,alphabet=0,vowel=0,consonant=0,word=1,i;
	printf("enter any line");
	
	gets(a);
	
	for( i=0;a[i]!='\0';i++)
	{
		length++;
		
		if(a[i]>=65 && a[i]<=90 || a[i]>=97 && a[i]<=119)
		{
			alphabet++;
		
		
		switch(a[i])
		{
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u': vowel++;
				break;
			default :consonant++;
		}
		if(a[i+1]==' ')
		{
			word++;
		}
		
		
		
		}
	}
	
	printf("alphabet%d",alphabet);
	printf("word%d",word);
	printf("vowels%d",vowel);
	printf("length%d",length);
}