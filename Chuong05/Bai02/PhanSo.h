#ifndef PhanSo_h
#define PhanSo_h
#include <iostream>
using namespace std;
class PhanSo
{
    private:
        int tuso;
        int mauso;
    public:
        PhanSo(int t = 0, int m = 1);
        PhanSo(const PhanSo &p);
        ~PhanSo();
        int LayTu();
        int LayMau();
        void GanTu(int t);
        void GanMau(int m);
        void Nhap();
        void Xuat();
        bool operator>(PhanSo b);
        PhanSo operator+(PhanSo b);
        PhanSo operator-(PhanSo b);
       
};
#endif
