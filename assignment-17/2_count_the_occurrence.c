#include <stdio.h>
#include <string.h>
 
int main()
{
  	char str[100], ch;
  	int i, count;
  	count = 0;
 
  	printf("Enter String ");
  	fgets(str,100,stdin);
  	
  	printf("Enter Character ");
  	scanf("%c", &ch);
  	
  	for(i = 0; i <= strlen(str); i++)
  	{
  		if(str[i] == ch)  
		{
  			count++;
 		}
	}
	printf("%d", count);
	
  	return 0;
}