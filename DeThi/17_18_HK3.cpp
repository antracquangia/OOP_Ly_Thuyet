#include <iostream>
#include <vector>
using namespace std;

class NguoiChoi
{
    protected:
        vector<int> SucNhay;
        vector<int> ChieuThuc;
        int Height;
    public:
        void Nhap()
        {
            int x;
            cout << "Nhap vao suc nhay cua nguoi choi (7 chi so): ";
            for (int i = 0; i < 7; i++)
            {
                cin >> x;
                SucNhay.push_back(x);
            }
            cout << "Nhap vao chieu cao nguoi choi: ";
            cin >> Height;
            cout << "Nhap vao suc manh chieu thuc cua nguoi choi (5 chi so): ";
            for (int i = 0; i < 5; i++)
            {
                cin >> x;
                ChieuThuc.push_back(x);
            }
        }
        const vector<int>& getSucNhay() const { return SucNhay; }
        const vector<int>& getChieuThuc() const { return ChieuThuc; }
        int getHeight() const { return Height; }
        void anQuaTao(int chiSo) {
            for (int i = 0; i < SucNhay.size(); i++) {
                SucNhay[i] += chiSo;
            }
        }
};

class ChuongNgaiVat
{
    protected:
        int n;
        vector<int> VanDe;
    public:
        virtual void Nhap()
        {
            int x;
            for (int i = 0; i < n; i++)
            {
                cin >> x;
                VanDe.push_back(x);
            }
        }
        virtual bool VuotQua(NguoiChoi &player) = 0; 
        virtual ~ChuongNgaiVat() {}
};

class KhuRungChong : public ChuongNgaiVat
{
    private:
        int QuaTao;
    public:
        void Nhap() override
        {
            cout << "Nhap vao gia tri qua tao: ";
            cin >> QuaTao;
            n = 7;
            cout << "Nhap vao chieu cao 7 cay chong: ";
            ChuongNgaiVat::Nhap();
        }
        
        bool VuotQua(NguoiChoi &player) override
        {
            player.anQuaTao(QuaTao); 
            
            const vector<int>& SucNhayhienTai = player.getSucNhay();
            for (int i = 0; i < 7; i++)
            {
                if (SucNhayhienTai[i] <= VanDe[i])
                    return false;
            }
            return true;
        }
};

class DuongHam : public ChuongNgaiVat
{
    public:
        void Nhap() override
        {
            cout << "Nhap vao so luong do cao cot moc: ";
            cin >> n;
            cout << "Nhap vao do cao cac cot moc: ";
            ChuongNgaiVat::Nhap();
        }
        bool VuotQua(NguoiChoi &player) override
        {
            int h = player.getHeight();
            for (int i = 0; i < n; i++)
                if (h > VanDe[i])
                    return false;
            return true;
        }
};

class QuaiVat : public ChuongNgaiVat
{
    public:
        void Nhap() override
        {
            n = 5;
            cout << "Nhap vao 5 suc manh chieu thuc cua quai vat: ";
            ChuongNgaiVat::Nhap();
        }
        bool VuotQua(NguoiChoi &player) override
        {
            const vector<int>& SucManh = player.getChieuThuc();
            int win = 0;
            for (int i = 0; i < 5; i++)
                if (SucManh[i] > VanDe[i])
                    win++;
            
            return (win >= 3);
        }
};

int main()
{
    int n;
    while (1)
    {
        cout << "Nhap vao so luong chuong ngai vat N (0 < N < 50): ";
        cin >> n;
        if (n > 0 && n < 50) break;
        else cout << "Nhap lai so luong n\n";
    }
    vector<ChuongNgaiVat*> DanhSach; 
    int type;
    
    for (int i = 0; i < n; i++)
    {
        ChuongNgaiVat* p = nullptr;
        while (1) {
            cout << "Nhap vao loai chuong ngai vat " << i + 1 << " (1 - chong, 2 - duong ham, 3 - quai vat): ";
            cin >> type;
            if (type == 1) {
                p = new KhuRungChong;
                break; 
            } else if (type == 2) {
                p = new DuongHam;
                break;
            } else if (type == 3) {
                p = new QuaiVat;
                break;
            } else {
                cout << "Nhap lai loai hop le!\n";
            }
        }
        p->Nhap();
        DanhSach.push_back(p);
    }

    cout << "\n--- NHAP THONG TIN NGUOI CHOI ---\n";
    NguoiChoi player;
    player.Nhap();

    cout << "\n--- KET QUA TRO CHOI ---\n";
    bool timDuocKhoBau = true;
    for (int i = 0; i < n; i++)
    {
        if (!(DanhSach[i]->VuotQua(player)))
        {
            cout << "Nguoi choi khong tim duoc kho bau (Bi ket o chuong ngai vat thu " << i + 1 << ")\n";
            timDuocKhoBau = false;
            break; 
        }
    }

    if (timDuocKhoBau) {
        cout << "Nguoi choi xuat sac tim duoc kho bau!\n";
    }
    for (int i = 0; i < DanhSach.size(); i++) {
        delete DanhSach[i];
    }
    DanhSach.clear();

    return 0;
}
