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
    Lingkaran(double j);

    void setJariJari(double j);
    double getJariJari();
    double HitungLingkaran();

    void luasLingkaran();
};

class PersegiPanjang {
    private:
    double panjang;
    double lebar;

    public:
    PersegiPanjang(double p, double l);

    void setPanjang(double p);
    void setLebar(double l);
    double getPanjang();
    double getLebar();
    double HitungPersegiPanjang();

    void LuasPersegiPanjang();
};

class AppInfo {

    public:
    void VersionProgram();
};

#endif