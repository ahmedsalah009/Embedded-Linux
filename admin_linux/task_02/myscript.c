#include <stdio.h>


int binary_search(int *ptr,int size,int num)
{

	int i;
	int lo=0;
	int hi=size-1;
	int mid;

	mid=(hi+lo)/2 ;

	while(hi>=lo)
	{

		mid = (hi+lo)/2 ;
		if(ptr[mid]>num)
			hi=mid-1;
		else if(ptr[mid]<num)
			lo=mid+1;
		else
			return mid ;


	}
	return -1 ;


}


int main(void)
{
	int index ;
	int arr[10]={10,20,30,40,50,60,70,80,90,99} ;
	
	index= binary_search(arr,10,70) ;
	
	printf("The index for the item is : %i ",index) ;

	return 1 ;
}
