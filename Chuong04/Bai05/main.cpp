#include <iostream>
#include "cListBook.h"
using namespace std;
int main()
{
    cListBook list;
    list.Nhap();
    list.Xuat();
    cBook book = list.XuatBanGanNhat();
    cout << "Sach xuat ban gan nhat: " << endl;
    book.Xuat();
    return 0;
}