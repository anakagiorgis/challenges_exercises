#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string reverse_alphabet(string s)
{
  vector<int> temp;
  vector<char> alphabet = {'a','b','c','d','e','f','g','h','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  for (auto c : s)
  {
    for (int i=0; i!=alphabet.size(); ++i)
    {
      if (alphabet[i] == c)
      {
        temp.push_back(i);
      }
    }
  }
  sort(temp.begin(), temp.end());
  string r = "";
  for (int i=0; i!=temp.size(); ++i)
  {
    char t = alphabet[temp[i]];
    r += t;
  }
  return r;
}

int main(int argc, char* argv[])
{
  string so = "hello";
  string st = "edabit";
  string sth = "hacker";
  string sf = "geek";
  string sfi = "javascript";
  string ro = reverse_alphabet(so);
  string rt = reverse_alphabet(st);
  string rth = reverse_alphabet(sth);
  string rf = reverse_alphabet(sf);
  string rfi = reverse_alphabet(sfi);
  cout << ro << endl;
  cout << rt << endl;
  cout << rth << endl;
  cout << rf << endl;
  cout << rfi << endl;
  return 0;
}
