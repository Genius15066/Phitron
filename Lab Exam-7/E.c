#include <stdio.h>

int main()
{

#ifndef ONLINE_JUDGE
  freopen("../Utilities/input.txt", "r", stdin);
  freopen("../Utilities/output.txt", "w", stdout);
#endif
  int n, sum = 0;
  scanf("%d", &n);

  while (n)
  {
    sum += n % 10;
    n /= 10;
  }
  printf("%d", sum);
}