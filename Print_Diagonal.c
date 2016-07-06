/*
Print the word with odd letters as

P         M
 R      A
   O  R
     G
  O    R
 R       A
P          M 
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	char a[20];
	int len,i,j,tmp;
	printf("Enter a odd length string:::");
	gets(a);
	len = strlen(a);
	tmp=len-1;
	for(i=0;i<len;i++)
	{
	    for(j=0;j<len;j++)
	    {
	        if(i==j)
	        {
	            printf("%c",a[i]);
	        }
	        else if(i+j == tmp )
	        {
	            printf("%c",a[j]);
	        }
	        else
	        {
	            printf(" ");
	        }

	    }
	    printf("\n");
	}

	return 0;
}
