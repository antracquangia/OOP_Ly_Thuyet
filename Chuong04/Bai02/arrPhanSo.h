#ifndef arrPhanSo_h
#define arrPhanSo_h
#include "PhanSo.h"
class arrPhanSo: public PhanSo
{
    private:
        PhanSo *arr;
        int n;
    public:
        arrPhanSo();
        ~arrPhanSo();
        void Nhap();
        void Xuat();
        void TaoNgauNhien();
        PhanSo Max();
        int CountPrime();
        void Sort();
};
#endif
