#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string max_ascii_sort(vector<string> v)
{
  vector<int> sum;
  for (int i=0; i!=v.size(); ++i)
  {
    int s = 0;
    for (auto c : v[i])
    {
      s += int(c);
    }
    sum.push_back(s);
  }
  int index;
  index = distance(sum.begin(), max_element(sum.begin(), sum.end()));
  return v[index];
}

int main(int argc, char* argv[])
{
  vector<string> v1 = {"hey", "man"};
  vector<string> v2 = {"h", "e", "y"};
  vector<string> v3 = {"m", "a", "n"};
  string r1 = max_ascii_sort(v1);
  string r2 = max_ascii_sort(v2);
  string r3 = max_ascii_sort(v3);
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  return 0;
}
