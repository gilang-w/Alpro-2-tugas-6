#include <iostream>
#include <conio.h>
#include <fstream>
#include <stdlib.h>
using namespace std;

int main()
{
       //stream untuk membaca file
       ifstream myfile;
       char isi;

       //membuka file yang telah ada
       myfile.open("datatugas5.txt");

       cout<<"Membuka File"<<endl;
       cout<<"--------------"<<endl;

       //fail() -> untuk memeriksa suatu pada kesalahan operasi file
       if(!myfile.fail())
       {
              cout<<"Isi dari File -> ";
              //ulang selama program belum mencapai akhir konten dari file
              while (!myfile.eof())
              {
                     myfile.get(isi);
                     cout<<isi;
              }
              myfile.close(); //menutup file
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }
       return 0;
}
