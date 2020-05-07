#include <iostream>
#include <vector>
using namespace std;

bool is_my_change_enough(vector<int> v, double p)
{
  double n_q = v[0]/4.0;
  double n_d = v[1]/10.0;
  double n_n = v[2]/20.0;
  double n_p = v[3]/100.0;
  double r = n_q + n_d + n_n + n_p;
  if (r >= p)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main(int argc, char* argv[])
{
  vector<int> v1 = {2, 100, 0, 0};
  vector<int> v2 = {0, 0, 20, 5};
  vector<int> v3 = {30, 40, 20, 5};
  vector<int> v4 = {10, 0, 0, 50};
  vector<int> v5 = {1, 0, 5, 219};
  bool r1 = is_my_change_enough(v1, 14.11);
  bool r2 = is_my_change_enough(v2, 0.75);
  bool r3 = is_my_change_enough(v3, 12.55);
  bool r4 = is_my_change_enough(v4, 3.85);
  bool r5 = is_my_change_enough(v5, 19.99);
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  cout << r4 << endl;
  cout << r5 << endl;
  return 0;
}
