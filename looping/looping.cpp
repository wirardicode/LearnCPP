#include <iostream>

using namespace std;


//looping 3 macam
//1. for=> jika btas loop sudah ditentukan
//2. while => mentukan kondisi lalu melooping
//3. do while => melooping lalu menentukan batas looping
int main(){
  //1. for
cout<<"looping for => ";
   for (int i = 1; i <=10; i++)// batas looping 10x dimulai dari 0;
   {
    cout<<i<<", ";//output
   }

cout<<endl;
//------------------------------------------

//2. while
cout<<"looping while => ";
int p=0;//deklarasi p
while (p<10)//menentukan batas looping dengan kondisi
{
  p++;//melakukan looping
  cout<<p<<", ";//output
}

   cout<<endl;
//------------------------------------------------

//3. do while
cout<<"Looping do while =>";
int k=0;//deklrasi k
do{
  k++;//melakukan looping
  cout<<k<<", ";//OUTPUT
}
while(k<10);//menentukan batas looping

cout<<endl;
//-----------------------------------------------------

//SPESIAL CASE
//BAGAI MANA CARA MEMBENTUK SEGITIGA DENGAN LOOPING????
cout<<"Special case \n";
for(int i=0;i<10;i++){
  for(int j=0;j<i;j++){
    cout<<"*";
  }
  cout<<"\n";
}

return 0;
}
