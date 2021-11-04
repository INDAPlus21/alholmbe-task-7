#include <stdio.h>
#include <stdlib.h>

int descendingCompare(const void *a, const void *b)
{
  return (*(int *)b - *(int *)a);
}

int main()
{
  int n;
  scanf("%d", &n);
  int values[n];

  for (int i = 0; i < n; i++)
    scanf("%d", &values[i]);

  qsort(values, n, sizeof(int), descendingCompare);
  int sum = 0;
  if (n % 2 == 0)
  {
    for (int i = 0; i < n / 2; i++)
      sum += values[i];
  }
  else
  {
    for (int i = 0; i < (n + 1) / 2; i++)
      sum += values[i];
  }

  printf("%d\n", sum);
}