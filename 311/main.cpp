#include <iostream>
#include <stdio.h>

int main()
{
  long long N;
  std::cin >> N;
  
  long long z_count = 0;
  z_count = N / 3 * 2 + N / 5 * 2;
 
  printf("%lld\n", z_count);
 
  return 0;
}
