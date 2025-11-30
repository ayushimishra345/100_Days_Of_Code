// Q66: Insert an element in a sorted array at the appropriate position.

/*
Sample Test Cases:
Input 1:
5
1 2 4 5 6
3
Output 1:
1 2 3 4 5 6

*/


#include <stdio.h>
    void main()
    {
        int array[10];
        int i, j, n, m, temp, key, pos;
 
        printf("Enter how many elements:\n");
        scanf("%d", &n);
        printf("Enter the elements:\n");
 
        for (i = 0; i < n; i++)
        {
            scanf("%d", &array[i]);
        }

        for (i = 0; i < n; i++)
        {
        }
 
	// Sorting the elements of the array
        for (i = 0; i < n; i++)
        {
            for (j = i + 1; j < n; j++)
            {
                if (array[i] > array[j])
                {
                    temp = array[i];
                    array[i] = array[j];
                    array[j] = temp;
                }
             }
        }
 
        for (i = 0; i < n; i++)
        {

        }
        printf("Enter the element to be inserted:\n");
        scanf("%d", &key);
 
        for (i = 0; i < n; i++)
        {
            if (key < array[i])
            {
                pos = i;
                break;
            }
            if (key > array[n-1])
            { 
                pos = n;
                break;
            }
        }
        if (pos != n)
        {
            m = n - pos + 1 ;
            for (i = 0; i <= m; i++)
            {
                array[n - i + 2] = array[n - i + 1] ;
            }
        }
 
        array[pos] = key;
        printf("Final list is:\n");
        for (i = 0; i < n + 1; i++)
        {
            printf("%d ", array[i]);
        }
 
}
