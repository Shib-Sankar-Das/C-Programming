//Binary Search

#include <stdio.h>
#include <conio.h>
void main()
{
  int c, f, last, m, n, ser, a[100];
  printf("Enter number of elements\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
  {
    printf("Enter the No.=");
    scanf("%d", &a[c]);
  }
  printf("Enter value to find\n");
  scanf("%d", &ser);
  f = 0;
  last = n - 1;
  m = (f+last)/2;
  for(;f <= last;m = (f + last)/2) 
  {
    if (a[m] < ser) 
      f = m + 1;
    else if (a[m] == ser)
    {
      printf("%d found at %d index %d location.\n", ser,m, m+1);
      break;
    }
    else 
      last = m - 1;
  }
  if (f > last)
    printf("Not found! %d isn't present in the list.\n", ser);
  getch();
}