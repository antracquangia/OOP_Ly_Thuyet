#ifndef PhanSo_h
#define PhanSo_h
class PhanSo
{
    private:
        int iTuSo;
        int iMauSo;
    public:
        PhanSo();
        ~PhanSo();
        void Nhap();
        void Xuat();
        void RutGon();
        int SoSanh(const PhanSo &b);
        bool Check();
        void TaoNgauNhien();
};
#endif
