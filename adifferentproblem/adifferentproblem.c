#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  long long x, y;
  while (scanf("%lld%lld", &x, &y) == 2)
    printf("%lld\n", llabs(x - y));
  return 0;
}