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
    virtual float Luas(int a) {return 0;}
    virtual float Keliling(int a) { return 0; }
    virtual void cekUkuran() {}
    void setX(int a) {
        this->x = a;
    }
    int getX() {
        return x;
    }
    void setY(int b) {
        this->x = b;
    }
    int getY() {
        return y;
    }
    /*lengkapi disini*/
};
class Lingkaran :public bidangDatar { /*lengkapi disini*/ 
public:
    void input() {
        cout << "Masukkan Jejari : " << endl;
        int r;
        cin >> r;
        setX(r);
    }

    float luas(int r) {
        return 3.14 * r * r;
    }
    float keliling(int r) {
        return 2 * 3.14 * r;
    }

    void cekUkuran() {
        float keliling(getX());
        if (keliling > 40)
        {
            cout << "Ukuran lingkaran paling besar" << endl;
        }
        else if(keliling < 20) {
            cout << "Ukuran lingkaran sedang" << endl;
        }
        else if (keliling < 10) {
            cout << "Ukuran lingkaran kecil" << endl;
        }
    }
};

class Persegipanjang :public bidangDatar { /*lengkapi disini*/ 
public:
    void input() {
        cout << "Masukkan panjang : " << endl;
        int p;
        cin >> p;
        setX(p);

        cout << "Masukkan Lebar : " << endl;
        int l;
        cin >> l;
        setY(l);
     }

    float lebar(int p) {
        return p * getY();
    }
    float keliling(int p) {
        return 2 * (p + getY());
    }

    void cekUkuran() {
        float keliling(getX());
        if (keliling > 40) {
            cout << "Ukuran lingkaran paling besar" << endl;
        }
        else if(keliling < 20) {
            cout << "Ukuran lingkaran sedang" << endl;
        }
        else if (keliling < 10) {
            cout << "Ukuran lingkaran paling kecil" << endl;
        }
    }
};
int main() { /*lengkapi disini*/ 
    bidangDatar* b;
   
    cout << "Lingkaran dibuat\n" << endl;
    b = new Lingkaran();
    b->input();
    int r = b->getX();
    cout << "Luas Lingkaran = " << b->Luas(r) << endl;
    cout << "Keliling lingkaran = " << b->Keliling(r) << endl;
    b->cekUkuran();

    cout << "\nPersegipanjang dibuat" << endl;
    b = new Persegipanjang();
    b->input();
    int p = b->getX();
    cout << "Luas Persegipanjang = " << b->Luas(p) << endl;
    cout << "Keliling Persegipanjang = " << b->Keliling(p) << endl;
    b->cekUkuran();

    delete b;
    return 0;
}