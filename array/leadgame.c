#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,j;
	int static arr[100],arr1[100],arr2[100];
	int max = arr1[0];
	int max1;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
	    for(i=0;i<2;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	   for(i=0;i<1;i++)
	   {
	   if(arr[i]>arr[i+1])
            {
                arr1[j]=arr[i]-arr[i+1];
                arr2[j]=1;
                // arr1[i+1]=1;
            }
        else if(arr[i]<arr[i+1])
            {
                arr1[j]=arr[i+1]-arr[i];
                arr2[j]=2;
                // arr1[i+1]=2;
            }
	    }
	}
	for(i=0;i<1;i++)
	   {
	    if (max<arr1[i])
	    {
            max = i;   
	    }
	    printf("%d %d",arr2[max],arr1[max]);
	   }
	return 0;
}

