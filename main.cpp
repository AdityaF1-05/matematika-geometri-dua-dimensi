#include <iostream>
#include <string>
#include <stdexcept>
#include "geometri-2d.h"

using namespace std;

int main() {

    SegiEmpat *kotak = new SegiEmpat(0.0);
    double inputS;

    string angkaPilihan;
    string mySisi;

    while (true) {

        cout << "\n\n====== Selamat Datang di Matematika Geometri ======\n";
        cout << "Silahkan pilih pilihan anda." << endl;
        cout << "\n1. Segi Empat";
        cout << "\n2. Selesai";
        cout << "\n\nNantikan fitur update berikutnya!";

        cout << "\n";
        cout << "Pilihan anda : ";
        
        try {
            getline(cin, angkaPilihan);

            if (angkaPilihan.empty()) {
                throw invalid_argument("Input tidak boleh kosong! Harap isi ulang!");

            }

            int pilihanUser = stoi(angkaPilihan);

            switch (pilihanUser) {
                case 1: {
                    bool isValid = false;

                    while (!isValid) {
                        try {
                            cout << "\nMasukkan Input sisi Segi Empat : ";
                            getline(cin, mySisi);

                            if (mySisi.empty()) {
                                throw invalid_argument("Nilai Kosong! harap isi dengan benar!");
                            }

                            inputS = stod(mySisi);
                            isValid = true;
                        }
                        catch(...) {
                            cout << "\nHarap Masukkan nilai dengan benar!";
                        }
                    }

                    kotak = new SegiEmpat(0.0);
                    kotak->setSisi(inputS);

                    cout << "\nHasil Perhitungan Segi Empat : ";
                    cout << kotak->luasSegiEmpat();
                    cout << " Cm2";
                    
                    delete kotak;
                    kotak = nullptr;
                    break;
                }

                case 2:
                    cout << "\nMemproses Exit. Program Selesai";
                    
                    return 0;

                default:
                    throw out_of_range("Pilihan hanya sampai 1 hingga 2 saja!");
            }
        }

        catch(invalid_argument& e) {
            cout << "[ERROR INPUT] " << e.what() << "\nSilahkan Coba lagi.\n";
        }
        catch(out_of_range& e) {
            cout << "[ERROR INPUT] " << e.what() << "\nSilahkan Coba lagi.\n";
        }

    }

}