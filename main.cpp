
#include <iostream>

using namespace std;

int main()
{
    string judul[100];
    string penulis[100];
    string tahun[100];
    int n, jml;

    cout<<"Masukan Jumlah Buku  :";
    cin>>jml;

    cout<<endl;

    //Masukan Data
    for (n=0; n<jml; n++){
        cout<<"Buku ke-  :"<<n+1<<endl;
        cout<<"Judul Buku   :";
        getline(cin,judul[n]);
        cout<<"Penulis Buku   :";
        getline(cin,penulis[n]);
        cout<<"Tahun Terbit   :";
        getline(cin,tahun[n]);
    }

    //Data Yang Di Tampilkan
    cout<<"Tampilkan Semua Buku Data"<<endl;
     for (n=0; n<jml; n++){
        cout<<"Buku ke-  :"<<n+1<<endl;
        cout<<"Judul Buku  :"<<judul[n]<<endl;
        cout<<"Penulis Buku  :"<<penulis[n]<<endl;
        cout<<"Tahun Terbit  :"<<tahun[n]<<endl;
        }
    return 0;
}
