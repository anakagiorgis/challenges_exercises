#include <vector>
#include <iostream>
using namespace std;

vector<int> eliminate_odd_numbers(vector<int> v)
{
  for (int i=0; i!=v.size(); ++i)
  {
    if (v[i] % 2 != 0)
    {
      v.erase(v.begin() + i);
    }
  }
  return v;
}

int main(int argc, char* argv[])
{
  vector<int> v1 = {1,2,3,4,5,6,7,8};
  vector<int> v2 = {43,65,23,89,53,9,6};
  vector<int> v3 = {718,991,449,644,380,440};
  vector<int> r1 = eliminate_odd_numbers(v1);
  vector<int> r2 = eliminate_odd_numbers(v2);
  vector<int> r3 = eliminate_odd_numbers(v3);
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
