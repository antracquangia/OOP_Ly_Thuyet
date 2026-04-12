#ifndef cListBook_h
#define cListBook_h
#include <string>
#include "cBook.h"
class cListBook
{
    private:
        cBook* p;
        int n;
    public:
        cListBook();
        cListBook(cListBook &a);
        cListBook& operator=(cListBook &a);
        ~cListBook();
        void Nhap();
        void Xuat();
        cBook XuatBanGanNhat();
};
#endif
