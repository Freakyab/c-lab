#include <stdio.h>
int main(void) {

	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int num,num1,i,sum=0,sum1=0,r=0;
	    int arr[10]={0,1,2,3,4,5,6,7,8,9},arr1[10]={6,2,5,5,4,5,6,3,7,6};
	   scanf("%d",&num);
	   scanf("%d",&num1);
	   //print(num,2*t);
	   sum = num+num1;
	   while(sum>0)
	   {
	       sum1=sum%10;
	    for(i=0;i<10;i++)
	       if(sum1==arr[i])
	       {
	           r=r+arr1[i];
	       }
	   sum=sum/10;
	   }
	   printf("%d\n",r);
	
	}
	return 0;
}

