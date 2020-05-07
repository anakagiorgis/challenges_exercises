#include <vector>
#include <iostream>
using namespace std;

vector<int> append_sum(vector<int> v)
{
  for (int i=0; i!=3; ++i)
  {
    int s = v[v.size()-1] + v[v.size()-2];
    v.push_back(s);
  }
  return v;
}

int main(int argc, char* argv[])
{
  vector<int> v = {1,1,2};
  vector<int> r = append_sum(v);
  for (int i=0; i!=r.size(); ++i)
  {
    cout << r[i] << " ";
  }
  cout << endl;
  return 0;
}
