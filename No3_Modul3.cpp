#include <iostream>
using namespace std;

int main() {
    try {
        int error_code = 404;
        throw error_code;
    } 
    catch (int e) {
        cout << "Terjadi error: " << e;
    }

    return 0;
}
