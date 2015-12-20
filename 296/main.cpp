#include <iostream>

int main(void)
{
  long N;
  int H, M, T;
  
  std::cin >> N >> H >> M >> T;

  long delay = ( N - 1 ) * T;
  M += delay % 60;
  if ( M > 60) {
    M -= 60;
    H++;
  }

  H += delay / 60;
  if ( H > 23 ) {
    H = H % 24;
  }

  std::cout << H << std::endl << M << std::endl;
}
