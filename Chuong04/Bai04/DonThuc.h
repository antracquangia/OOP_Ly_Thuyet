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
        void Xuat();
        float Tinh(float x);
        DonThuc Tong(const DonThuc & after);
        float GetHeSo() const;
        void SetHeso(float a);
        void SetSomu(float a);
};
#endif
