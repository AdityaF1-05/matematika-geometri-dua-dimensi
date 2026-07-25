#include "geometri-2d.h"
#include <iostream>

SegiEmpat::SegiEmpat(double s) {
    sisi = s;
}

Lingkaran::Lingkaran(double j) {
    jarijari = j;
}

void SegiEmpat::setSisi(double s) {
    sisi = s;
}

double SegiEmpat::getSisi() {
    return sisi;
}

double SegiEmpat::luasSegiEmpat() {
    return sisi * sisi;
}

void Lingkaran::setJariJari(double j) {
    jarijari = j;
}

double Lingkaran::getJariJari() {
    return jarijari;
}

double Lingkaran::luasLingkaran() {
     std::cout << "Luas Lingkaran yang didapatkan : ";
     
     return 2 * PHI * jarijari;
     std::cout << " Cm2";
}