#include <iostream>
#include <string>
#include <vector>
using namespace std;

vector<string> four_letter_words(vector<string> v)
{
  vector<string> result;
  for (int i=0; i!=v.size(); ++i)
  {
    if (v[i].size() == 4)
    {
      result.push_back(v[i]);
    }
  }
  return result;
}

int main(int argc, char* argv[])
{
  vector<string> v1 = {"Tomato", "Potato", "Pair"};
  vector<string> v2 = {"Kangaroo", "Bear", "Fox"};
  vector<string> v3 = {"Ryan", "Kieran", "Jason", "Matt"};
  vector<string> r1 = four_letter_words(v1);
  vector<string> r2 = four_letter_words(v2);
  vector<string> r3 = four_letter_words(v3);
  for (auto it = r1.begin(); it != r1.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
  for (auto it = r2.begin(); it != r2.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
  for (auto it = r3.begin(); it != r3.end(); ++it)
  {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}
