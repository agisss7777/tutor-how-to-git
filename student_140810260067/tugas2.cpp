#include <iostream>
using namespace std;

int main() {
    int pilihan, uang, harga;
    cout<<"=== VENDING MACHINE AUTOMAT ==="<<endl;
    cout<<"1. Air Mineral : Rp. 4000"<<endl;
    cout<<"2. Teh Botol   : Rp. 6000"<<endl;
    cout<<"3. Kopi        : Rp. 10000"<<endl;
    
    cout<<"Pilih Kode Minuman (1-3): ";
    cin>>pilihan;

    switch (pilihan) {
        case 1:
            harga = 4000;
            break;
        case 2:
            harga = 6000;
            break;
        case 3:
            harga = 10000;
            break;
        default:
            cout<<"Pilihan tidak tersedia!"<<endl;
            return 0;
    }

    cout<<"Masukkan uang Anda (Rp): ";
    cin>>uang;

    if(uang>harga) {
        cout<<"Transaksi Berhasil!"<<endl;
        cout<<"Berikut Kembalian Anda : Rp. "<<uang-harga<<endl;
        cout<<"Terima Kasih Sudah Membeli!"<<endl;
    } else if(uang==harga) {
        cout<<"Transaksi Berhasil!"<<endl;
        cout<<"Terima Kasih Sudah Membeli!"<<endl;
    } else {
        cout<<"Transaksi Gagal! Uang Anda kurang Rp. "<<harga-uang<<endl;
    }

    return 0;
}