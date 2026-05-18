#include "DaiHoc.h"
#include "CaoDang.h"
#include "Header.h"

int main()
{
	DaiHoc dh;
	CaoDang cd;
	dh.Nhap();
	cd.Nhap();
	if (dh.CheckTotNghiep())
		cout << "Sinh vien dai hoc du dieu kien tot nghiep\n";
	else
		cout << "Sinh vien dai hoc chua du dieu kien tot nghiep\n";
	if (cd.CheckTotNghiep())
		cout << "Sinh vien cao dang du dieu kien tot nghiep\n";
	else
		cout << "Sinh vien cao dang chua du dieu kien tot nghiep\n";
	dh.Xuat();
	cd.Xuat();
	return 0;
}
