#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i = 0, jumlah = 0;
    bool dalamKata = false;

    cout << "Masukkan daftar judul buku: ";
    getline(cin, kalimat);

    while (i < kalimat.length()) {
        if (kalimat[i] != ' ' && dalamKata == false) {
            jumlah++;
            dalamKata = true;
        } else if (kalimat[i] == ' ') {
            dalamKata = false;
        }
        i++;
    }

    cout << "Jumlah judul buku: " << jumlah;

    return 0;
}