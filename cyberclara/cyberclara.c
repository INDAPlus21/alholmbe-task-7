#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
  int n;
  scanf("%d", &n);
  char names[n * 2][50];

  for (int i = 0; i < n * 2; i++)
  {
    char name[50];
    scanf("%s", name);
    strcpy(names[i], name);
  }

  char fullNames[n][50];
  for (int i = 0; i < n; i++)
  {
    char fullName[50];
    strcpy(fullName, names[i]);
    strcat(fullName, " ");
    strcat(fullName, names[i + n]);
    strcpy(fullNames[i], fullName);
  }

  qsort(fullNames, n, 50, strcmp);
  int count = 0;
  for (int i = 0; i < n; i++)
  {
    //printf("%s\n", fullNames[i]);
    if (strcmp(fullNames[i], fullNames[i + 1]) != 0)
      count++;
  }

  printf("%d\n", count);
}