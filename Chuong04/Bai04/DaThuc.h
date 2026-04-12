#ifndef DaThuc_h
#define DaThuc_h
#include "DonThuc.h"
class DaThuc: public DonThuc
{
    private:
        int n;
        DonThuc *p;
    public:
        DaThuc();
        DaThuc(const DaThuc &other);
        DaThuc &operator=(const DaThuc &other);
        ~DaThuc();
        void Nhap();
        void Xuat();
        float Tinh(float x);
        DaThuc Tong(const DaThuc & after);
        DaThuc Hieu(const DaThuc & after);
};
#endif
