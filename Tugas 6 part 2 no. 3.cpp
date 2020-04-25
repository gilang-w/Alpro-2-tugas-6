#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
       //stream untuk menulis file
       ofstream mhsfile;

       //membuka file,
       //jika file tidak ditemukan maka file akan otomatis dibuat
       mhsfile.open("datamhs.txt", ios::app);

       cout<<"Menulis File Ekstensi"<<endl;
       cout<<"--------------"<<endl;

       //fail() -> untuk memeriksa suatu kesalahan pada operasi file
       if(!mhsfile.fail())
       {
              //menulis ke dalam file
              mhsfile<<"STAMBUK:13020190047"<<endl;
	      mhsfile<<"Nama Mahasiswa : Gilang Pratama"<<endl;
              mhsfile<<"Kelas: A1"<<endl;
              mhsfile.close(); //menutup file
              cout<<"Text telah berhasil ditulis ke dalam File"<<endl;
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }
      
       getche();
       return 0;

