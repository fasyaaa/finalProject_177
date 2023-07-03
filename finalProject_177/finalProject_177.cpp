#include <iostream>
using namespace std;

class bidangDatar {
private:
    int x, y;
public:
    bidangDatar() {
        x = 0;
        y = 0;
    }
    virtual void input() {}
    virtual float Luas(int a) { return 0; } 
    virtual float Keliling(int a) { return 0; }
    virtual void cekUkuran() { return; } 
    void setX(int a) {
        this->x = a;
    }
    int getX() {
        return x;
    }

    /*lengkapi disini*/
    void setY(int b){
        this->y = b;
    }
    int getY() {
        return y;
    }
};
class Lingkaran :public bidangDatar {
    /*lengkapi disini*/
public : 
    void input() {
        cout << "Masukkan jejari : ";
        int jejari;
        cin >> jejari;
        setX(jejari);
    }

    float Luas() {
        return 3.14 * getX() * getX();
    }
    
    float Keliling() {
        return 2 * 3.14 * getX();
    }

    void cekUkuran() {
        if (Keliling() > 40)
            cout << "\nUkuran lingkaran adalah Besar" << endl;
        else if (Keliling() < 10)
            cout << "\nUkuran lingkaran adalah Kecil" << endl;
        else
            cout << "\nUkuran lingkaran adalah Sedang" << endl;

    }
};

class Persegipanjang :public bidangDatar { 
    /*lengkapi disini*/
public:
    void input() {
        cout << "Masukkan Panjang : ";
        int panjang;
        cin >> panjang;
        setX(panjang);

        cout << "Masukkan Lebar : ";
        int lebar;
        cin >> lebar;
        setY(lebar);
    }

    float Luas() {
        return getX() * getY();
    }
    float Keliling() {
        return 2 * getX() + getY();
    }

    void cekUkuran() {
        if (Keliling() > 40)
            cout << "\nUkuran Persegi Panjang adalah Besar" << endl;
        else if (Keliling() < 10)
            cout << "\nUkuran Persegi Panjang adalah Kecil" << endl;
        else 
        cout << "\nUkuran Persegi Panjang adalah Sedang" << endl;
    }
}; 
int main() { 
    /*lengkapi disini*/
    char repeat;

    do {
        Lingkaran l;
        Persegipanjang pp;

        //Lingkaran
        cout << "Lingkaran dibuat" << endl;
        l.input();
        cout << "Luas Lingkaran = " << l.Luas() << "\nKeliling Lingkaran = " << l.Keliling() << " ";
        l.cekUkuran();

        //Persegi Panjang
        cout << "Persegi Panjang dibuat" << endl;
        pp.input();
        cout << "Luas Persegi Panjang = " << pp.Luas() << "\nKeliling Persegi Panjang = " << pp.Keliling() << " ";
        pp.cekUkuran();

        cout << "Apakah anda ingin mengulang program? Y/N : ";
        cin >> repeat;
    } while (repeat == 'Y' || repeat == 'y');

    return 0;
}