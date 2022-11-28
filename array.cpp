#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){
   int angka[]={3,5,6,8,12};
   cout << "Angka" << angka[4] <<endl;
   
   char huruf[] ={'x','y','z'};
   printf("Huruf %c" ,huruf[1]);
   
   string nama[]={"RAISA","LOVE","Panca"};
   cout << "Nama=" <<nama[1] <<endl;
 
 int nilai[3][4]=
    {
      {10, 20,30,40}, 
      {50, 60,70,80}, 
      {90, 100}
    };
    cout << "nilai" << nilai[1][3]<<endl;
    
   int x =0;
   for (x ; x <= 5 ;x++){
     cout<< angka [x]<<endl;
   }
   
}