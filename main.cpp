#include <iostream>
#include <string>
using namespace std;

// FUNCTION
void inforute(int pilih, string &namaRute, int &hargaSatuan) {
    if (pilih == 1) {
        namaRute = "Malang - Surabaya";
        hargaSatuan = 35000;
    }
    else if (pilih == 2) {
        namaRute = "Malang - Pasuruan";
        hargaSatuan = 20000;
    }
    else if (pilih == 3) {
        namaRute = "Malang - Jombang";
        hargaSatuan = 25000;
    }
    else {
        namaRute = "";
        hargaSatuan = -1;
    }
}
// END FUNCTION

int main() {
    int pilihan, jumlah;
    int hargaSatuan, totalHarga;
    string namaRute;

    cout << "==================================" << endl;
    cout << "       MENU TIKET BUS MALANG      " << endl;
    cout << "==================================" << endl;
    cout << "1. Malang - Surabaya (Rp 35.000)" << endl;
    cout << "2. Malang - Pasuruan (Rp 20.000)" << endl;
    cout << "3. Malang - Jombang  (Rp 25.000)" << endl;
    cout << "Pilih rute (1-3): ";
    cin >> pilihan;

    cout << "Masukkan jumlah penumpang: ";
    cin >> jumlah;

    inforute(pilihan, namaRute, hargaSatuan);

    if (hargaSatuan == -1) {
        cout << endl << "Pilihan rute tidak valid! Pilih 1, 2, atau 3." << endl;
        system("pause");
        return 0;
    }

    totalHarga = hargaSatuan * jumlah;

    cout << endl << "Rute Tujuan      : " << namaRute << endl;
    cout << "Jumlah Penumpang : " << jumlah << " orang" << endl;
    cout << "Harga per Tiket  : Rp " << hargaSatuan << endl;
    cout << "Total Harga      : Rp " << totalHarga << endl;
    cout << "==================================" << endl;

    system("pause");
    return 0;
}
