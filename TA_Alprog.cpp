#include <iostream>
using namespace std;

int main() {
	int umur;
	cout << "Masukkan umur anda ";
	cin >> umur;
	
    try {
        if (umur < 17) {
        	throw "Belum cukup umur";
		}
		cout << "proses pembuatan SIM dilanjutkan" << endl;
       
    }
    
    catch (const char* error) {
        cout << "Gagal: " << error << endl;
    }

    return 0;
}
