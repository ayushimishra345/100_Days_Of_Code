// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>
int main()
{
  // variables
  int row;
  int column;
  
  // take row and column size
  printf("Ener row size: ");
  scanf("%d", &row);
  printf("Ener column size: ");
  scanf("%d", &column);

  // declare array
  int arr[row][column];

  // take matrix elements as input
  printf("Enter elements for %dx%d matrix:\n", 
 row, column);
  for(int i=0;i<row;i++)
  {
    for(int j=0;j<column;j++)
    {
      printf("arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
  
  // display matrix using for loop
  printf("The %dx%d matrix elements are:\n",  row, column);
  for(int i=0; i<row; i++) {
    for(int j=0; j<column; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}