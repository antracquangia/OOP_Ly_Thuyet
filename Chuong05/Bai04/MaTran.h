#ifndef MaTran_h
#define MaTran_h
#include <iostream>
using namespace std;
class MaTran
{
    private:
        int **p;
        int m, n;
    public:
        MaTran(int x = 0, int y = 0);
        MaTran(const MaTran& mt);
        ~MaTran();
        void TaoNgauNhien();
        void Nhap();
        void Xuat();
        MaTran operator=(const MaTran& mt);
        MaTran operator+(const MaTran& mt);
        MaTran operator-(const MaTran& mt);
};
#endif