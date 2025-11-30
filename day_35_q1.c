// Q69: Find the second largest element in an array.

/*
Sample Test Cases:
Input 1:
5
10 20 30 40 50
Output 1:
40

*/


#include <stdio.h>
#include <limits.h>
 
int main()
{
	int arr[50], i, Size;
	int first, second;
	
	printf("Please Enter the Number of elements in an array:  ");
	scanf("%d", &Size);
	
	printf("Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &arr[i]);
    }
	 
	first = second = INT_MIN;  
	   
	for (i = 0; i < Size; i++)
	{
		if(arr[i] > first)
		{
			second = first;
			first = arr[i];
		}
		else if(arr[i] > second && arr[i] < first)
		{
			second = arr[i];
		}	
	}
	printf("Second Largest Number in this Array =  %d", second);
	
	return 0;
}


