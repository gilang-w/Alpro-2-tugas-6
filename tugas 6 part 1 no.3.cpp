#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
       //stream untuk menulis file
       ofstream myfile;

       //membuka file,
       //jika file tidak ditemukan maka file akan otomatis dibuat
       myfile.open("gilang.txt", ios::app);

       cout<<"Membuka File Ekstensi"<<endl;
       cout<<"--------------"<<endl;

       //fail() -> untuk memeriksa suatu kesalahan pada operasi file
       if(!myfile.fail())
       {
              //menulis ke dalam file
              myfile<<"Saya belajar membuat file"<<endl;
              myfile.close(); //menutup file
              cout<<"Text telah berhasil ditulis ke dalam File"<<endl;
       }else{
              cout<<"File tidak ditemukan"<<endl;
       }
      
       getche();
       return 0;
}
