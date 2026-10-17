#include <iostream>
using namespace std;

int main() {
    int saldo = 500000;
    int tarik;

    cout << "Saldo awal: Rp " << saldo << endl;
    cout << "Masukkan jumlah tarik tunai: Rp ";
    cin >> tarik;

    try {
        if (tarik > saldo) {
            throw "Saldo Insufficient";
        }

        saldo = saldo - tarik;
        cout << "Penarikan saldo berhasil!" << endl;
        cout << "Sisa saldo: Rp " << saldo << endl;
    }
    catch (const char* pesan) {
        cout << "Error: " << pesan << endl;
    }

    return 0;
}
