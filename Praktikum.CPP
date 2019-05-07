#include <iostream.h>
#include <conio>
#include <stdio.h>
char nama[21], kelas[8], abs[10];
void main(){
int data [5];
int i, total, rata;
clrscr;
cout<<" Aplikasi nilai hitung rata2"<<endl;
cout<<"===================================="<<endl;
cout<<" Masukkan Nama : ";cin>>nama;
cout<<"===================================="<<endl;
cout<<" Masukkan Nilai Ulangan Mahasiswa "<<endl;
total=0;
    for(i=0; i<5; i++)
    {
    cout<<" Masukkan Nilai Ke- "<<(i+1)<<" : ";cin>>data[i];
    total = total+data[i];
    }
    cout<<endl;
    cout<<"====================================="<<endl;
    cout<<" Mahasiswa dengan "<<nama<<" Punya nilai sebagai berikut :\n"<<endl;
        rata = total / 5;
        cout<<" Total     : "<<total<<endl;
        cout<<" Rata-rata : "<<rata<<endl;
getch();
}
