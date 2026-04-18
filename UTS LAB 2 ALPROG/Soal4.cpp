#include <iostream>
using namespace std;

int main() {
    string mantra;
    int i = 0, jumlah = 0;

    cout << "Masukkan Mantra : ";
    getline(cin, mantra);

    while (i < mantra.length()) {
        char h = mantra[i];

        if (h == 'a' || h == 'i' || h == 'u' || h == 'e' || h == 'o' ||
            h == 'A' || h == 'I' || h == 'U' || h == 'E' || h == 'O') {
            jumlah++;
        }

        i++ ;
    }

    if (jumlah > 0) {
        cout << "Kekuatan mantra: " << jumlah << " vokal";
    } else {
        cout << "Mantra tidak valid! Tidak mengandung vokal.";
    }

    return 0;
}