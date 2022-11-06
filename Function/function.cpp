#include <iostream>

using namespace std;

//descriptions

//function adalah sebuah rangkaian sitem sebuah tugas 
//method  instruksi dalam sebuah objek next time kita akan membahas oop

//function memiliki sebuah mekanisme berupa 1. Tipe data, 2.Void
//beda 
//Tipe data memiliki nilai kembali, Void tidak

//============================================================================================
//contoh tipe data
//============================================================================================

int contoh(int k){//cara penulisan function tipe_data "nama function"(parameter){};
  //disini akan dituliskan kodingan mu
  int p=0;
  cout<<"Mau kamu tambah berapa=> ";
  cin>>p;
  k+=p;//ini sama artinya dengan "k=k+p"
  return k;//nilai kembali dari function
}

//==============================================================================================
//mengunakan void
//==============================================================================================

void Cintih(){//function void bisa mengunakan parameter null
  int array;
  char arr[]={'a','b','c','d','e'};
  array=sizeof(int)/sizeof(arr[0]);//menghitung isi array yang tak derdefinisi
  for(int i=0;i<array;i++){
    cout<<arr[i]<<" ";
  }
}

int main(){
  //penulisan pada in main nya adalah "nama function(parameter)"

  //contoh pemanggilan function tipe data
  cout<<contoh(5)<<endl;//Parameter boleh diisi nilai apapun bebas

  //===================================================================

  //contoh pemanggilan function void
  Cintih();//tidak perlu mengunakan perintah output lagi
}