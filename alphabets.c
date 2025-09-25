#include<stdio.h>
#include<ctype.h>
int main(){
	char sentence[1000];
	int alphabet=0,digits=0,specialchars=0;
	int i=0;
	printf("enter a sentence:");
	fgets(sentence,sizeof(sentence),stdin);
	while(sentence[i]!='\0')
	{
		if(isalpha(sentence[i]))
		{
		    alphabet++;
		}
		else if(isdigit(sentence[i]))
		{
			digits++;
		}
		else if(!ispace(sentence[i]))
		{
			specialchars++;
			}
		i++;
	}
	printf("\n alphabets:%d",alphabet);
	printf("\ndigits:%d",digits);
	printf("special characters:%d\n",specialchars);
	
	
	return 0;
}
