#include <iostream>
using namespace std;

bool is_it_swap(int n)
{
  int q = (n%10)*10+(n/10);
  if (q > n)
  {
    return false;
  }
  else
  {
    return true;
  }
}

int main(int argc, char* argv[])
{
  int n1 = 27;
  int n2 = 43;
  bool r1 = is_it_swap(n1);
  bool r2 = is_it_swap(n2);
  cout << r1 << endl;
  cout << r2 << endl;
  return 0;
}
