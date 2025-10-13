#include <iostream>
#include <string>
using namespace std;

const int nMax = 51;

struct Mahasiswa {
    string NIM;
    string nama;
    int nilai;
};

Mahasiswa arrayMahasiswa[nMax];
int N;

Mahasiswa cariDataPertama(string nim) {
    for (int i = 0; i < N; i++) {
        if (arrayMahasiswa[i].NIM == nim) {
            return arrayMahasiswa[i];
        }
    }
    return {"", "", -1};
}

int main() {
    N = 9;
    arrayMahasiswa[0] = {"114", "Nana", 97};
    arrayMahasiswa[1] = {"113", "Jojo", 70};
    arrayMahasiswa[2] = {"118", "Rere", 88};
    arrayMahasiswa[3] = {"116", "Koko", 40};
    arrayMahasiswa[4] = {"117", "Keke", 90};
    arrayMahasiswa[5] = {"116", "Koko", 60};
    arrayMahasiswa[6] = {"113", "Jojo", 50};
    arrayMahasiswa[7] = {"113", "Jojo", 80};
    arrayMahasiswa[8] = {"119", "Roro", 100};

    string nimCari;
    cout << "Masukkan NIM yang ingin dicari: ";
    cin >> nimCari;

    Mahasiswa hasil = cariDataPertama(nimCari);
    if (hasil.nilai != -1)
        cout << "Mahasiswa dengan NIM " << nimCari 
             << " adalah " << hasil.nama 
             << " dengan nilai pertama " << hasil.nilai << endl;
    else
        cout << "Data tidak ditemukan" << endl;

    return 0;
}

