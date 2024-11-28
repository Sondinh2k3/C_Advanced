#include <iostream>
using namespace std;

class HinhChuNhat
{
public:
    double ChieuDai; // property
    double ChieuRong;

    static int bienStatic;

    HinhChuNhat(int dai = 3, int rong = 5);
    ~HinhChuNhat();
    double tinhDienTich() // method
    {
        return ChieuDai * ChieuRong;
    }
};

HinhChuNhat::HinhChuNhat(int dai, int rong)
{
    ChieuDai = dai;
    ChieuRong = rong;
}

HinhChuNhat::~HinhChuNhat()
{
    cout << "Goi den Destructor" << endl;
}

void test()
{
    HinhChuNhat hinh2;
}

int HinhChuNhat::bienStatic = 2;

int main()
{
    HinhChuNhat hinh1; // Tao ra mot Object
    HinhChuNhat hinh2(4, 6);
    HinhChuNhat hinh3(2, 8);

    cout << "Bien Static 1 = " << hinh1.bienStatic << endl;
    cout << "Bien Static 2 = " << hinh2.bienStatic << endl;
    cout << "Bien Static 3 = " << hinh3.bienStatic << endl;

    cout << "Address 1 = " << &hinh1.bienStatic << endl;
    cout << "Address 2 = " << &hinh2.bienStatic << endl;
    cout << "Address 3 = " << &hinh3.bienStatic << endl;

    cout << "Hello World" << endl;
    return 0;
}