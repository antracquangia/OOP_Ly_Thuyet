#include "LapTrinhVien.h"
#include "KiemChungVien.h"
int main() {
    int n;
    string s;
    while (1)
    {
        cout<<"Nhap vao so nhan vien: ";
        getline(cin,s);
        if (CheckInteger(s))
            break;
        else cout<<"Nhap lai so nhan vien la so int\n";
    }
    n = stoi(s);
    vector<NhanVien*> dsNV;
    
    for (int i = 0; i < n; i++) {
        int loai;
        cout << "\nChon loai NV (1: Lap trinh vien, 2: Kiem chung vien): "; 
        cin >> loai;
        cin.ignore();
        NhanVien* nv;
        if (loai == 1) nv = new LapTrinhVien();
        else nv = new KiemChungVien();
        
        nv->Nhap();
        dsNV.push_back(nv);
    }
    // 1. Xuất danh sách nhân viên
    cout << "\n--- DANH SACH NHAN VIEN ---\n";
    cout << setw(12) << "Ma nhan vien" << " | "<< setw(20) << "Ho ten" << " | "<< setw(5) << "Tuoi" << " | "<< setw(13) << "So dien thoai" << " | "<< setw(20) << "Email" << " | "<<setw(12)<< "Luong"<<endl;
    for (auto nv : dsNV) {
        nv->Xuat();
    }

    // 2. Tính lương trung bình
    long long tongLuong = 0;
    for (auto nv : dsNV) {
        tongLuong += nv->TinhLuong();
    }
    double luongTB = (n > 0) ? (double)tongLuong / n : 0;
    cout << "\nLuong trung binh cua cong ty: " << fixed << setprecision(0) << luongTB << endl;

    // 3. Liệt kê nhân viên có lương thấp hơn mức trung bình
    cout << "\n--- NHAN VIEN CO LUONG THAP HON MUC TRUNG BINH ---\n";
    cout << setw(12) << "Ma nhan vien" << " | "<< setw(20) << "Ho ten" << " | "<< setw(5) << "Tuoi" << " | "<< setw(13) << "So dien thoai" << " | "<< setw(20) << "Email" << " | "<<setw(12)<< "Luong"<<endl;
    for (auto nv : dsNV) {
        if (nv->TinhLuong() < luongTB) {
            nv->Xuat();
        }
    }

    // Giải phóng bộ nhớ
    for (auto nv : dsNV) delete nv;
    
    return 0;
}