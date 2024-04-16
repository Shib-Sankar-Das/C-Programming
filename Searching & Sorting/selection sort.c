//selection sort

#include<stdio.h>
#include<conio.h>
void main()
{
  int array[100], n, i, j, pos, swap;
  printf("Enter number of elements = ");
  scanf("%d", &n);
  printf("Enter %d integers = ", n);
  //input loop
  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);
 //selection
  for (i = 0; i < (n - 1); i++)
  {
    pos = i;
    for (j= i + 1; j < n; j++)
    {
      if (array[pos] > array[j])
        pos = j;
    }
    if (pos != j)
    {
      swap = array[i];
      array[i] = array[pos];
      array[pos] = swap;
    }
  printf("\nSorted list in ascending order : \n");
  for (j = 0; j < n; j++)
    printf("%d ", array[j]);
  }
  getch();
}