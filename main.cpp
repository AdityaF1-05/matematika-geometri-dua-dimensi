#include <iostream>
#include <string>
#include <stdexcept>
#include "geometri-2d.h"

using namespace std;

int main() {

    SegiEmpat *kotak = new SegiEmpat(0.0);
    double inputS;

    Lingkaran *ling = new Lingkaran(0.0);
    double inputL;

    PersegiPanjang *persegi = new PersegiPanjang(0.0, 0.0);
    double inputP, inputl;

    Segitiga *segitiga = new Segitiga(0.0, 0.0);
    double inputT, inputs;

    AppInfo *info = new AppInfo();

    string angkaPilihan;
    string mySisi;
    string myJariJari;
    string myPanjang, myLebar;
    string mySisi_2, myTinggi;

    while (true) {

        cout << "\n\n====== Selamat Datang di Matematika Geometri ======\n";
        cout << "Silahkan pilih pilihan anda." << endl;
        cout << "\n1. Segi Empat";
        cout << "\n2. Lingkaran";
        cout << "\n3. Persegi Panjang";
        cout << "\n4. Segitiga";
        cout << "\n5. Info Program";
        cout << "\n6. Selesai";
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

                case 2: {
                    bool isValid = false;

                    while (!isValid) {
                        try {
                            cout << "\nMasukkan Input Jari - jari Lingkaran : ";
                            getline(cin, myJariJari);

                            if (myJariJari.empty()) {
                                throw invalid_argument("Nilai Kosong! harap isi dengan benar!");
                            }

                            inputL = stod(myJariJari);
                            isValid = true;
                        }
                        catch(...) {
                            cout << "\nHarap Masukkan nilai dengan benar!";
                        }
                    }

                    ling = new Lingkaran(0.0);
                    ling->setJariJari(inputL);

                    ling->luasLingkaran();

                    delete ling;
                    ling = nullptr;
                    break;
                }
                case 3: 
                    while (true) {
                        try {
                            cout << "\nMasukkan Input Panjang : ";
                            getline(cin, myPanjang);

                            if (myPanjang.empty()) {
                                throw invalid_argument("\nNilai Kosong! harap isi dengan benar!");
                            }

                            inputP = stod(myPanjang);
                            break;
                        }
                        catch (...) {
                            cout << "\nHarap Masukkan nilai dengan benar!";
                        }
                    }

                    while (true) {
                        try {
                            cout << "\nMasukkan Input Lebar : ";
                            getline(cin, myLebar);

                            if (myLebar.empty()) {
                                throw invalid_argument("\nNilai Kosong! harap isi dengan benar!");
                            }

                            inputl = stod(myLebar);
                            break;
                        }
                        catch (...) {
                            cout << "\nHarap Masukkan nilai dengan benar!";
                        }
                    }

                    persegi = new PersegiPanjang(0.0, 0.0);
                    persegi->setPanjang(inputP);
                    persegi->setLebar(inputl);

                    persegi->LuasPersegiPanjang();

                    delete persegi;
                    persegi = nullptr;
                    break;
                
                case 4:
                    while (true) {
                        try {
                            cout << "\nMasukkan input tinggi Segitiga : ";
                            getline(cin, myTinggi);

                            if (myTinggi.empty()) {
                                throw invalid_argument("Nilai Kosong! harap isi dengan benar!");
                            }

                            inputT = stod(myTinggi);
                            break;
                        }
                        catch(...) {
                            cout << "\nHarap Masukkan nilai dengan benar!";
                        }
                    }

                    while (true) {
                        try {
                            cout << "Masukkan input sisi Segitiga : ";
                            getline(cin, mySisi_2);

                            if (mySisi_2.empty()) {
                                throw invalid_argument("Nilai Kosong! harap isi dengan benar!");
                            }

                            inputs = stod(mySisi_2);
                            break;
                        }
                        catch(...) {
                            cout << "\nHarap Masukkan nilai dengan benar!";
                        }
                    }
                    segitiga = new Segitiga(0.0, 0.0);
                    segitiga->setSisi(inputs);
                    segitiga->setTinggi(inputT);

                    segitiga->HasilSegitiga();
                    
                    delete segitiga;
                    segitiga = nullptr;
                    break;

                case 5:

                    info = new AppInfo();
                    info->VersionProgram();

                    delete info;
                    info = nullptr;
                    break;

                case 6:
                    cout << "\nMemproses Exit. Program Selesai";
                    
                    return 0;

                default:
                    throw out_of_range("Pilihan hanya sampai 1 hingga 6 saja!");
                
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