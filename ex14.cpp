#include <iostream>
#include <vector>
using namespace std;

bool is_it_fair(vector<vector<int>> v, vector<vector<int>> w)
{
  int total_area_v = 0;
  for (int i=0; i!=v.size(); ++i)
  {
    total_area_v += v[i][0]*v[i][1];
  }
  int total_area_w = 0;
  for (int i=0; i!=w.size(); ++i)
  {
    total_area_w += w[i][0]*w[i][1];
  }
  if (total_area_v == total_area_w)
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
  vector<vector<int>> v1 = {{1,2},{2,1}};
  vector<vector<int>> w1 = {{2,2}};
  bool r1 = is_it_fair(v1, w1);
  cout << r1 << endl;
  return 0;
}
