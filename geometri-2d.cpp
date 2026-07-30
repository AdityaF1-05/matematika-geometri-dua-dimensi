#include "geometri-2d.h"
#include <iostream>
#include <iomanip>

SegiEmpat::SegiEmpat(double s) {
    sisi = s;
}

Lingkaran::Lingkaran(double j) {
    jarijari = j;
}

PersegiPanjang::PersegiPanjang(double p, double l) {
    panjang = p;
    lebar = l;
}

Segitiga::Segitiga(double t, double s) {
    tinggi = t;
    sisi = s;
}

void Segitiga::setTinggi(double t) {
    tinggi = t;
}

void Segitiga::setSisi(double s) {
    sisi = s;
}

double Segitiga::getTinggi() {
    return tinggi;
}

double Segitiga::getSisi() {
    return sisi;
}

double Segitiga::HitungLuasSegitiga() {
    return sisi * tinggi * 0.5;
}

void Segitiga::HasilSegitiga() {
    std::cout << "Hasil Perhitungan Luas Segitiga : ";
    std::cout << HitungLuasSegitiga();
    std::cout << " Cm2";
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

double Lingkaran::HitungLingkaran() {
    return 2 * PHI * jarijari;
}

void Lingkaran::luasLingkaran() {
    std::cout << "Hasil Perhitungan luas Lingkaran : ";
    std::cout << HitungLingkaran();
    std::cout << " Cm2";
}

void PersegiPanjang::setPanjang(double p) {
    panjang = p;
}

void PersegiPanjang::setLebar(double l) {
    lebar = l;
}

double PersegiPanjang::getPanjang() {
    return panjang;
}

double PersegiPanjang::getLebar() {
    return lebar;
}

double PersegiPanjang::HitungPersegiPanjang() {
    return panjang * lebar;
}

void PersegiPanjang::LuasPersegiPanjang() {
    std::cout << "\nHasil Luas dari Persegi Panjang : ";
    std::cout << HitungPersegiPanjang();
    std::cout << " Cm2";
}

void AppInfo::VersionProgram() {
    std::cout << "\n\n======== INFO PROGRAM ========";
    std::cout << "\nProgram ini merupakan percobaan untuk menghitung luas suatu bangun datar.";
    std::cout << "\nMemiliki beberapa bangun datar yang bisa dihitung luasnya.";
    std::cout << "\nAkan ada pembaruan di masa depan dan beberapa bangun datar yang bisa dihitung luasnya";
    std::cout << "\n\nVersi Program : v1.3\n";
}