#include "geometri-2d.h"

SegiEmpat::SegiEmpat(double s) {
    sisi = s;
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
