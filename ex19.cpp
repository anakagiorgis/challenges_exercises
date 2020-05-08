#include <iostream>
#include <math.h>
using namespace std;

double solve_for_exponent(long int a, long int b)
{
  double x = (log(b)+0.0)/log(a);
  return x;
}

int main(int argc, char* argv[])
{
  double r1 = solve_for_exponent(4, 1024);
  double r2 = solve_for_exponent(2, 1024);
  double r3 = solve_for_exponent(9, 3486784401);
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  return 0;
}
