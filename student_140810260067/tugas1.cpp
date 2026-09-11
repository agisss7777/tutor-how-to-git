#include <iostream>
using namespace std;

int main() {
    int belanja, diskon, bayar, persen;
    cout<<"=== Kalkulator kasir Toko Buku ==="<<endl;
    cout<<"Masukan total belanja (Rp) : ";
    cin>>belanja;
    if (belanja<100000) {
        diskon = 0;
        persen = 0;
    } else if (belanja >= 100000 && belanja < 299999){
        diskon = belanja * 0.1;
        persen = 10;
    } else if (belanja >= 300000){
        diskon = belanja * 0.2;
        persen = 20;
    }

    cout<<"--- Ringkasan Pembayaran ---"<<endl;
    cout<<"Diskon ("<<persen<<"%) : Rp "<<diskon<<endl;
    bayar = belanja - diskon;
    cout<<"Total Bayar : Rp "<<bayar<<endl;
    return 0;
}