#ifndef DSPhanSo_h
#define DSPhanSo_h
#include "PhanSo.h"
class DSPhanSo
{
    private:
        PhanSo *p;
        int n;
    public:
        DSPhanSo();
        ~DSPhanSo();
        void Nhap();
        PhanSo Max();
        PhanSo Tong();
};
#endif