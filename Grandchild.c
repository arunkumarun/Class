/*
Given a two dimensional array of string like
  <”luke”, “shaw”>
  <”wayne”, “rooney”>
  <”rooney”, “ronaldo”>
  <”shaw”, “rooney”> 
Where the first string is “child”, second string is “Father”. 
And given “ronaldo” we have to find his no of grandchildren 
Here “ronaldo” has 2 grandchildren. So our output should be 2.
*/

#include <stdio.h>
#include <string.h>

int main(void) {
	// your code goes here
	char *a[4][2] = {{"luke","shaw"},{"wayne","rooney"},{"rooney","ronaldo"},{"shaw","rooney"}};
	int i,j,count=0;
	char key[10],res[10]={};
	
	for(i=0;i<4;i++)
	{
	    for(j=0;j<2;j++)
	    {
	        printf("%s ",a[i][j]);
	    }
	    printf("\n");
	}
	
  scanf("%s",key);
	
	for(i=0;i<4;i++)
	{
	    if(!strcmp(a[i][1],key))
	    {
	        strcpy(res,a[i][0]);
	        printf("\n%s\n",res);
	        for(j=0;j<4;j++)
	        {
	            if(!strcmp(res,a[j][1]))
	            {
	                count++;
	            }
	        }
	    }
	}
	
	
	printf("\n%s's Toltal GrandChild Are :%d",key,count);
	
	return 0;
}

