#include <iostream>
#include <vector>
using namespace std;

int the_sum_of_evens(vector<vector<int>> v)
{
  int r = 0;
  for (int i=0; i!=v.size(); ++i)
  {
    for (int j=0; j!=v[0].size(); ++j)
    {
      if (v[i][j] % 2 == 0)
      {
        r += v[i][j];
      }
    }
  }
  return r;
}

int main(int argc, char* argv[])
{
  vector<vector<int>> v1 = {{1,0,2},{5,5,7},{9,4,3}};
  vector<vector<int>> v2 = {{1,1},{1,1}};
  vector<vector<int>> v3 = {{42,9},{16,8}};
  int r1 = the_sum_of_evens(v1);
  int r2 = the_sum_of_evens(v2);
  int r3 = the_sum_of_evens(v3);
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  return 0;
}
