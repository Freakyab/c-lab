#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while (t--)
	{
	    int i,arr[100],j,len,same=0,count=0;
	    scanf("%d",&len);
	    for(i=0;i<len;i++)
	    {
	        printf("Enter the no. ");
	        scanf("%d",&arr[i]);
	    }
	    for(i=0;i<len;i++)
	    {
    	    for(j=i+1;j<len;j++)
    	    {
    	        if(arr[i]==arr[j])
    	            same++;
    	    }
	    }
	    if (same == len)
	    {
	        
	    printf("%d",0);
	    }
	    else if(same>len/2)
	    {
	        for(i=0;i<len;i++)
	        {
                if(arr[same]!=arr[i])
                {
                    count++;
                }
	        }
	        printf("%d",count);
	    } 
	    else
	    {
	        for(i=0;i<len;i++)
	        {
                if(arr[same]!=arr[i])
                {
                    count++;
                }
	        }
	        printf("%d",count);
	    }
	   // printf("%d",same);
	}
	return 0;
}
// 4
// 3
// 1 2 3
// 4
// 5 5 5 5
// 4
// 2 2 1 1
// 3
// 1 1 2
