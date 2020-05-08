#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

bool is_average_whole(vector<int> v)
{
  int sum = 0;
  for (int i=0; i!=v.size(); ++i)
  {
    sum += v[i];
  }
  double average_double = (sum + 0.0) / v.size();
  int average_integer = int(average_double);
  if (abs(average_double - average_integer) >= 1e-24)
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
  vector<int> v1 = {1,3};
  vector<int> v2 = {1,2,3,4};
  vector<int> v3 = {1,5,6};
  vector<int> v4 = {1,1,1};
  vector<int> v5 = {9,2,2,5};
  bool r1 = is_average_whole(v1);
  bool r2 = is_average_whole(v2);
  bool r3 = is_average_whole(v3);
  bool r4 = is_average_whole(v4);
  bool r5 = is_average_whole(v5);
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  cout << r4 << endl;
  cout << r5 << endl;
  return 0;
}
