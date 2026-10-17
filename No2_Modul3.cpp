#include <iostream>
using namespace std;

int main(){
	int kecepatan_maksimal = 5000;
	int kecepatan_anda;
	
	cout << "Kecepatan maksimal anda adalah" << kecepatan_maksimal << endl;
	cout << "Masukkan kecepatan anda: ";
	cin >> kecepatan_anda;
	
	try {
		if (kecepatan_anda > kecepatan_maksimal) {
			throw 500;
		}
		cout << "Kecepatan anda masih normal" << endl;
	}
	catch (int pesan) {
		cout << "Overload Error " << pesan << endl;
	}
}

