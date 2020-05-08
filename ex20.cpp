#include <iostream>
using namespace std;

int factorial(int z)
{
  if (z == 0)
  {
    return 1;
  }
  else if (z >= 1)
  {
    return z*factorial(z-1);
  }
}

int main(int argc, char* argv[])
{
  int r1 = factorial(4);
  int r2 = factorial(0);
  int r3 = factorial(9);
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  return 0;
}
