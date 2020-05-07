#include <iostream>
#include <string>
using namespace std;

string reverse_string(string s)
{
  string r = "";
  for (auto it = s.end()-1; it != s.begin()-1; --it)
  {
    r += *it;
  }
  return r;
}

int main(int argc, char* argv[])
{
  string s1 = "Hello World";
  string s2 = "The quick brown fox.";
  string s3 = "Edabit is really helpful!";
  string r1 = reverse_string(s1);
  string r2 = reverse_string(s2);
  string r3 = reverse_string(s3);
  cout << r1 << endl;
  cout << r2 << endl;
  cout << r3 << endl;
  return 0;
}
