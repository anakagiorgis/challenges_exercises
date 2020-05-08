#include <iostream>
using namespace std;

double smaller_square_area(int radius)
{
  double area;
  area = (radius)*(radius*2.0);
  return area;
}

int main(int argc, char* argv[])
{
  double a1 = smaller_square_area(5);
  double a2 = smaller_square_area(6);
  double a3 = smaller_square_area(7);
  cout << a1 << endl;
  cout << a2 << endl;
  cout << a3 << endl;
  return 0;
}
