#include <iostream>

using namespace std;

struct llc
{
  string nama;
  string alamat;
  string kodePost;
  int usia;

  llc *lanjut;
};

llc *head ,*anggota, *cur;

void buat_llc (string nama, string alamat, string kodePost, int usia){

   anggota=new llc();
   anggota->nama=nama;
   anggota->alamat=alamat;
   anggota->kodePost=kodePost;
   anggota->usia=usia;
   anggota->lanjut=NULL;
   head=anggota;
}

void tampil(){
  cur=head;
  while (cur!=NULL){
  {
    cout<<"anggota organisasi\n";
    cout<<"nama      : "<<cur->nama<<endl;
    cout<<"alamat    :"<<cur->alamat<<endl;
    cout<<"kodePost  :"<<cur->kodePost<<endl;
    cout<<"usia      :"<<cur->usia<<endl;

    cur=cur->lanjut;
    }
  }  
}

int main(){
  buat_llc("Sambo","Rumah kematian","02111021A",49);
  tampil();
}