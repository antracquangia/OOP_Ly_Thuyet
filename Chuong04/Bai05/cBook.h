#ifndef cBook_h
#define cBook_h
#include <string>
using namespace std;
class cBook
{
    private:
        string MaSach;
        string TenSach;
        int NamXuatBan;
        int TongSoTrang;
    public:
        cBook();
        ~cBook();
        void Nhap();
        void Xuat();
        string getMaSach() const;
        string getTenSach() const;
        int getNamXuatBan() const;
        int getTongSoTrang() const;
        void setMaSach(string a);
        void setTenSach(string a);
        void setNamXuatBan(int a);
        void setTongSoTrang(int a);
};
#endif
