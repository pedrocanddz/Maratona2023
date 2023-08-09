// OBI-2019, xadrez, Guilherme A. Pinto

#include <iostream>

using namespace std;

int main(){
  int n, t;

  cin >> n >> t;

  switch (t)
  {
  case 0:
    cout << n << "\n";
  case 1:
    cout << n*(n-1) << "\n";
  case 2:
    cout << (n*(n-1)*(n-2))/6 << "\n";
  default:
    break;
  }

  return 0;
}