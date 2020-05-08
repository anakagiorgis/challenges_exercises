#include <iostream>
#include <cctype>
#include <string>
using namespace std;

string reverse_and_capitalize(string s)
{
  string result = "";
  for (int i=s.size()-1; i!=-1; --i)
  {
    result += toupper(s[i]);
  }
  return result;
}

int main(int argc, char* argv[])
{
  string r1 = reverse_and_capitalize("abc");
  string r2 = reverse_and_capitalize("hellothere");
  string r3 = reverse_and_capitalize("input");
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  return 0;
}
