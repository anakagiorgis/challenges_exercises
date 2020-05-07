#include <string>
#include <iostream>
using namespace std;

bool isvowel(char c)
{
  if (c == 'a' || c == 'A' || c == 'o' || c == 'O' || c == 'e' || c == 'E' || c == 'u' || c == 'U' || c == 'i' || c == 'I')
  {
    return true;
  }
  else
  {
    return false;
  }
}

int how_many_vowels(string word)
{
  int count = 0;
  for (auto c : word)
  {
    if (isvowel(c))
    {
      ++count;
    }
  }
  return count;
}

int main(int argc, char* argv[])
{
  cout << how_many_vowels("Celebration") << endl;
  cout << how_many_vowels("Palm") << endl;
  cout << how_many_vowels("Prediction") << endl;
  return 0;
}
