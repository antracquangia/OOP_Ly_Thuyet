#ifndef DonThuc_h
#define DonThuc_h
class DonThuc
{
    private:
        float heso;
        float somu;
    public:
        DonThuc();
        ~DonThuc();
        void Nhap();
        void ThayDoi();
        void Xuat();
        float Tinh(float x);
        float GetSomu() const;
        DonThuc DaoHam();
        DonThuc Tong(const DonThuc & after);
};
#endif
