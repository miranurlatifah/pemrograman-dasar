#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
 
   int jari2,pi;
   int  luas1, luas2, keliling1, keliling2;
   jari2 = 27; 
   pi =22/7;
   luas1 = pi * jari2;
   luas2 = luas1 * jari2;
   cout << "L = pi * jari-jari * jari-jari " << endl;
   cout << " = " << pi << " * " << jari2 << " * " << jari2 << endl;
   cout << " = " << luas1 << " * " << jari2 << endl;
   cout << " = " << luas2 << endl;
   keliling1 = 2 * pi;
   keliling2 = keliling1 * jari2;
   cout << "k = 2 * pi * jari2 " << endl;
   cout << " = 2 * " << pi << " * " << jari2 << endl;
   cout << " = " << keliling1 << " * " << jari2 << endl;
   cout << " = " << keliling2 << endl;
}   
