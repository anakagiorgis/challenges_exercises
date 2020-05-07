#include <iostream>
#include <vector>
using namespace std;

vector<int> array_of_multiples(int num, int length)
{
  vector<int> result;
  for (int i=0; i!=length; ++i)
  {
    int p = num * (i + 1);
    result.push_back(p);
  }
  return result;
}

int main(int argc, char* argv[])
{
  vector<int> v1 = array_of_multiples(7, 5);
  vector<int> v2 = array_of_multiples(12, 10);
  vector<int> v3 = array_of_multiples(17, 6);
  for (auto it = v1.begin(); it != v1.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
  for (auto it = v2.begin(); it != v2.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
  for (auto it = v3.begin(); it != v3.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}
