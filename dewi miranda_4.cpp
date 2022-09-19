
#include <iostream>
using namespace std;

int main ()
{
  int p, l, t;
  int V ;
  
  cout << "p=";
  cin >> p;
  cout << "l=";
  cin >> l;
  cout << "t=";
  cin >> t;
  
  V = p * l * t;
  cout << "V = p * l * t" << endl;
  cout << "  = " << p << " * " << l << " * " << t << endl;
  cout << "  = " << V ;
}