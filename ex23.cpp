#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sort_in_ascending_order(vector<int> v)
{
  sort(v.begin(), v.end());
  return v;
}

int main(int argc, char* argv[])
{
  vector<int> v1 = {1,2,10,50,5};
  vector<int> v2 = {80,29,4,-95,-24,85};
  vector<int> v3;
  vector<int> r1 = sort_in_ascending_order(v1);
  vector<int> r2 = sort_in_ascending_order(v2);
  vector<int> r3 = sort_in_ascending_order(v3);
  for (auto it = r1.begin(); it != r1.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
  for (auto it = r2.begin(); it != r2.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
  for (auto it = r3.begin(); it != r3.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}
