#include <iostream>

using namespace std;

int main(){
  //Switch case adalah sebuah metode condition kondisi yang diperlukan atau yang diinginkan
  //dalam bahasa mudah nya switch case digunakan untuk memilih sebuah pilihan atau switching

  int a;//deklarasi
  cout<<"Apakah kamu sudah makan? \n";
  cout<<"1. sudah "<<"2. belum  "<<"3. kamunaeinya??  ";
  cin>>a;//input data

  switch (a)
  {
  case 1://pilihan 1
    cout<<"sudah";
    break;
  
  case 2://p;ilihan 2
    cout<<"Belum";
    break;
  case 3://pilihan 3
    cout<<"Kamunaeinya";
  break;
  default://pilihan dasar (set asli/ default)
    cout<<"Gak mau jawab";
  break;
  }


  

/*algorit dalam bahasa Indonesia
output=>string
outpu=>string,string,string

input=>interger

memilih (input)
  pilihan 1:
    coding pilihan 1
  endpilihan 1:

  pilihan 2
    coding pilihan 2
  endpilihan 2:

  pilihan 3
    coding pilihan 3
  endpilihan 3:*/
  return 0; 
}
