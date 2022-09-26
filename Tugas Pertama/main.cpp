#include<iostream>
#include<conio.h>


using namespace std;
struct paket
{
    char jenis_brg[30];
    int harga,berat,totalHarga;
    char kota[30];
};

struct paket kirim[100];


void tambahdata(int x,int y)
{
    if(x<=y){
            cout << "Inputkan Jenis Barang  : ";
            cin >> kirim[x].jenis_brg;
            cout << "Inputkan Berat Barang  : ";
            cin >> kirim[x].berat;
            cout << "Inputkan Harga         : ";
            cin >> kirim[x].harga;
            cout << "Inputkan Kota Tujuan   : ";
            cin >> kirim[x].kota;
    }else
    cout << "data telah penuh" << endl;
    x--;
    cout << "Press Any Key...";
    getch();
    cout << endl;
}

void tampildata(int x)
{
    cout << "Daftar Data" << endl;
    if(x==1){
        cout << "Data kosong" << endl;
    }else if(x>0){
    for(int a=1; a<x; a++)
    {
        cout << a << " ";
        cout << kirim[a].jenis_brg << " ";
        cout << kirim[a].berat << "Kg ";
        cout << kirim[a].harga << "Rp ";
        cout << kirim[a].kota << endl;
    }
    }

    cout << "Press Any Key...";
    getch();
    cout << endl;
}

void hapusdata(int x)
{
    cout << "Data Terakhir yang anda Hapus Adalah : "<<endl;
    cout << kirim[x].jenis_brg<<" ";
    cout << kirim[x].berat<<" Kg ";
    cout << kirim[x].harga << "Rp ";
    cout << kirim[x].kota << endl << endl;

    cout<< "Press Any Key...";
    getch();
    cout << endl;
}

void totalHarga(int x)
{
    int th=0;
    for(int i=0;i<x;i++)
        {th=th+kirim[i].harga;}
    cout << "Total harga semuanya adalah " << th << "Rp" << endl;

    cout<< "Press Any Key...";
    getch();
    cout << endl;
}

void totalberat(int x)
{
    int tb=0;
    for(int i=0;i<x;i++)
        {tb=tb+kirim[i].berat;}
    cout << "Total Berat semuanya adalah " << tb << "kg"<<  endl;

    cout<< "Press Any Key...";
    getch();
    cout << endl;
}
int main()
{
    int pilih;
    int datake=1;
    int z=0;
    cout << "masukan jumlah data = ";
    cin >> z;
    do
    {
        cout << "***Paket****" << endl;
        cout << "1. Tambah Data" << endl;
        cout << "2. Hapus Data Terakhir" << endl;
        cout << "3. Tampil Data" << endl;
        cout << "4. Total Harga" << endl;
        cout << "5. Total Berat" << endl;
        cout << "6. kosongkan data" << endl;
        cout <<"9. Keluar"<< endl;

        cout << "Pilihan Anda [1-9] : ";
        cin >> pilih;
        if(pilih==1)
            {
                tambahdata(datake,z);
                datake++;
            }
        if(pilih==2)
            {
                hapusdata(datake-1);
                datake--;
            }
        if(pilih==3)
            {
                tampildata(datake);
            }
        if(pilih==4)
            {
                totalHarga(datake);
            }
        if(pilih==5)
            {
                totalberat(datake);
            }
        if(pilih==6)
            {
                cout << "Data berhsail di hapus " << endl;
                datake= 1 +(datake-datake);
            }

    }
    while(pilih!=9);
    return 0;
}
