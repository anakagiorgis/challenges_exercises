#include <iostream>
#include <string>
#include <vector>
using namespace std;

int word_count(string s)
{
  vector<string> result;
  typedef string::size_type string_size;
  string_size i = 0;
  string_size j = 0;
  for (int k=0; k!=s.size(); ++k)
  {
    if (isspace(s[k]))
    {
      j = k;
      result.push_back(s.substr(i, j-1));
      i = k + 1;
    }
    else if (k == s.size() - 1)
    {
      j = k;
      result.push_back(s.substr(i, j));
    }
  }
  int m = result.size();
  return m;
}

int main(int argc, char* argv[])
{
  int r1 = word_count("Just an example here move along");
  int r2 = word_count("This is a test");
  int r3 = word_count("What an easy task, right");
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  return 0;
}
