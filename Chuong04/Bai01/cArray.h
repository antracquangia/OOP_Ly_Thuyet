#ifndef cArray_h
#define cArray_h
class cArray
{
    private:
        int n;
        int *p;
    public:
        cArray();
        ~cArray();
        void Nhap();
        void Xuat();
        void TaoNgauNhien();
        int DemX(int x);
        bool CheckTang();
        int Min();
        void Sort();
};
#endif
