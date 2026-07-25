#ifndef GEOMETRI_DUA_DIMENSI
#define GEOMETRI_DUA_DIMENSI

class SegiEmpat {

    private:
    double sisi;

    public:
    SegiEmpat(double s);

    void setSisi(double s);
    double getSisi();

    double luasSegiEmpat();

};

class Lingkaran {
    private:
    double jarijari;
    const double PHI = 3.14;

    public:
    Lingkaran(double j) {
        setJariJari(j);
    } 

    void setJariJari(double j);
    double getJariJari();

    double luasLingkaran();
};

#endif