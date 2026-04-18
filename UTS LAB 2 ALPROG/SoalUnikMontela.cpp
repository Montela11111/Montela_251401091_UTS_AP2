#include <iostream>
using namespace std;

int main() {
    string biner;
    int desimal = 0;
    bool salah = false;

    cout << "Input kode biner : ";
    cin >> biner;

    for (int i = 0; i < biner.length(); i++) {
        if (biner[i] != '0' && biner[i] != '1') {
            if (!salah) {
                cout << "Pesan Rusak! Digit salah: ";
            }
            cout << biner[i] << " ";
            salah = true;
        }
    }

    if (salah) {
        return 0;
    }

    for (int i = 0; i < biner.length(); i++) {
        desimal = desimal * 2 + (biner[i] - '0');
    }

    cout << "Angka desimal dari biner " << biner << " adalah = " << desimal << endl;

    return 0;
}