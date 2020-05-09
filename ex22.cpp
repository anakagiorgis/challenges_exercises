#include <iostream>
#include <string>
using namespace std;

string two_char_repeat(string s)
{
  string result = "";
  for (auto c : s)
  {
    result += c;
    result += c;
  }
  return result;
}

int main(int argc, char* argv[])
{
  string r1 = two_char_repeat("String");
  string r2 = two_char_repeat("Hello World!");
  string r3 = two_char_repeat("1234!_ ");
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  return 0;
}
