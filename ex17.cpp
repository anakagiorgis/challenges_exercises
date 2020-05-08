#include <iostream>
#include <string>
using namespace std;

int steps_to_convert(string s)
{
  int count_lower = 0;
  int count_upper = 0;
  for (auto c : s)
  {
    if (isupper(c))
    {
      count_lower += 1;
    }
    else if (islower(c))
    {
      count_upper += 1;
    }
  }
  if (count_lower >= count_upper)
  {
    return count_upper;
  }
  else
  {
    return count_lower;
  }
}

int main(int argc, char* argv[])
{
  string s1 = "abC";
  string s2 = "abCBA";
  string s3 = "aba";
  string s4 = "abaCCC";
  cout << steps_to_convert(s1) << endl;
  cout << steps_to_convert(s2) << endl;
  cout << steps_to_convert(s3) << endl;
  cout << steps_to_convert(s4) << endl;
  return 0;
}
