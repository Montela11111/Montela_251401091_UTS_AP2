    #include <iostream>
    using namespace std;

    int main() {
        string nama, nim;
        int nilai1, nilai2, nilai3;
        float rata;

        cout << "Nama Mahasiswa: ";
        getline(cin, nama);

        cout << "NIM: ";
        cin >> nim;

        cout << "Nilai Algoritma dan Pemrograman: ";
        cin >> nilai1;

        cout << "Nilai Probabilitas dan Statistika: ";
        cin >> nilai2;

        cout << "Nilai Sistem Operasi: ";
        cin >> nilai3;

        rata = (nilai1 + nilai2 + nilai3) / 3.0;

        cout << "\nAlgoritma dan Pemrograman: ";
        if (nilai1 >= 60)
            cout << "Lulus\n";
        else
            cout << "Tidak Lulus\n";

        cout << "Probabilitas dan Statistika: ";
        if (nilai2 >= 60)
            cout << "Lulus\n";
        else
            cout << "Tidak Lulus\n";

        cout << "Sistem Operasi: ";
        if (nilai3 >= 60)
            cout << "Lulus\n";
        else
            cout << "Tidak Lulus. Silakan Ulangi di Tahun Depan!\n";

        cout << "Nilai Rata-rata Semester ini: " << rata << endl;

        return 0;
    }