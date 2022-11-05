#include <iostream>

using namespace std;

int main(){
  //ARRAY=>KUMPULAN NILAI YANG DISIMPAN DALAM MEMORY
  //JENIS=> ARRAY STASTIS MEMORY, ARRAT DINAMIS MEMORY

  //Array statis memory
  string nama[5]={"ABDUL","AGUS","DENY","ANI","HANI"};//array memiliki nilai atau anggota berjumlah 5 dan tidak bisa dirubah nilai atau jumlah nya
 
 //looping digunakan untuk menampilkan isi dari array
 for(int k=0;k<5;k++){
    cout<<nama[k]<<", ";//output isi array
  }

cout<<endl;
  //-------------------------------------------------------------------------

  //array dinamis
  int n,i;
  string buah[n];
  string Buah;
//melakukan input anggota(maks array) seluruh nya
  cout<<"Masukan jumlah array => ";
  cin>>n;

  cout<<"Masukan isi atau anggota array dengan nama buah (di pisah enter)=> ";
  //looping untuk input nama buah
  for(i=0;i<n;i++){
    cin>>buah[i];//input isi array tipe string atau kalimat
  }
  
  //looping untuk output array
  for (int l = 0; l < i; l++)
  {
    cout<<buah[l]<<", ";//output nama array
  }
  
  return 0;
}