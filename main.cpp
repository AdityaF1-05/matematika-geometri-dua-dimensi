#include <iostream>
#include <string>
#include "geometri-2d.h"

using namespace std;

int main() {

    SegiEmpat *kotak = new SegiEmpat(0.0);
    double inputS;

    string mySisi;

    while (true) {

        cout << "Masukkan nilai Sisi Segi Empat (dalam CM) : ";
        getline(cin, mySisi);

        try {
            inputS = stod(mySisi);
            break;
        }
        catch(...) {
            cout << "ERROR : Harap perhatikan inputnya! Harus berupa angka";
            cout << "\nUlangi Lagi!\n";
        }

        cout << "\n";

    }

    kotak->setSisi(inputS);

    cout << "\n===== HASIL PERHITUNGAN GEOMETRI =====" << endl;

    cout << "\nHasil Perhitungan bangun datar Segi Empat : ";
    cout << kotak->luasSegiEmpat();
    cout << " Cm2";

    delete kotak;
    kotak = nullptr;

    return 0;
}