#include <vector>
#include <iostream>
using namespace std;

int larger_list(vector<int> lst1, vector<int> lst2)
{
  if (lst1.size() >= lst2.size())
  {
    return lst1[lst1.size()-1];
  }
  else
  {
    return lst2[lst2.size()-1];
  }
}

int main(int argc, char* argv[])
{
  vector<int> v = {4,10,2,5};
  vector<int> w = {-10,2,5,10};
  int n = larger_list(v, w);
  cout << n << endl;
  return 0;
}
