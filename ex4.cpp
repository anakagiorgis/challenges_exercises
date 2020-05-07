#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<char> find_range(char first, char last)
{
  int indicator = 0;
  vector<char> result;
  vector<char> alphabet = {'a','b','c','d','e','f','g','h','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  if (first == last)
  {
    result.push_back(last);
    return result;
  }
  for (int i=0; i!=alphabet.size()-1; ++i)
  {
    if (alphabet[i] == first)
    {
      result.push_back(alphabet[i]);
      indicator = 1;
    }
    if (indicator == 1 && alphabet[i] != last)
    {
      result.push_back(alphabet[i+1]);
    }
    if (alphabet[i] == last)
    {
      indicator = 0;
    }
  }
  return result;
}

string replace_with_hash(string s, string r)
{
  char first_letter = r[0];
  char last_letter = r[2];
  vector<char> range = find_range(first_letter, last_letter);
  for (int i=0; i!=s.size(); ++i)
  {
    for (int j=0; j!=range.size(); ++j)
    {
      if (range[j] == s[i])
      {
        s[i] = '#';
      }
    }
  }
  return s;
}

int main(int argc, char* argv[])
{
  string s_1 = "abcdef";
  string s_2 = "rattle";
  string s_3 = "microscopic";
  string s_4 = "";
  string r_1 = replace_with_hash(s_1, "c-e");
  string r_2 = replace_with_hash(s_2, "r-z");
  string r_3 = replace_with_hash(s_3, "i-i");
  string r_4 = replace_with_hash(s_4, "a-z");
  cout << r_1 << endl;
  cout << r_2 << endl;
  cout << r_3 << endl;
  cout << r_4 << endl;
  return 0;
}
