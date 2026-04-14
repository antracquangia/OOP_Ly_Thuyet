#include "DaThuc.h"

// Khởi tạo đa thức có bậc bằng 0
DaThuc::DaThuc()
{
    n = 0;
    p = NULL;
}

// Khởi tạo đa thức có bậc n
DaThuc::DaThuc(int n)
{
    this->n = n;
    p = new DonThuc[n+1];
}

// Khởi tạo sao chép
DaThuc::DaThuc(const DaThuc& dat)
{
    n = dat.n;
    p = new DonThuc[n+1];
    for(int i = 0; i <= n; i++)
    {
        p[i] = dat.p[i];
    }
}

// Hàm phá hủy
DaThuc::~DaThuc()
{
    delete []p;
}

// Phép gán
DaThuc DaThuc::operator=(const DaThuc &dat)
{
    if (this != &dat)
    {
        delete []p;
        n = dat.n;
        p = new DonThuc[n+1];
        for (int i =0; i<= n; i++)
            p[i] = dat.p[i];
    }
    return *this;
}

// Toán tử nhập đa thức
istream &operator>>(istream& is, DaThuc &dat)
{
    int n;
    do{
        cout<<"Nhap vao bac cua da thuc: ";
        cin>>n;
        if (n<0) cout<<"Bac cua da thuc phai lon hon hoac bang 0\n";
    }  while(n<0);
    dat.n = n;
    dat.p = new DonThuc[dat.n+1];
    for(int i = 0; i<=dat.n; i++)
    {
        cout<<"Nhap vao he so don thuc bac "<<i<<": ";
        cin>>dat.p[i];
        dat.p[i].SetSomu(i);
    }
    return is;
}

// Toán tử xuất đa thức
ostream &operator<<(ostream& os, DaThuc dat)
{
    for(int i = dat.n; i>=0; i--)
    {
        if (dat.p[i].GetHeso() > 0) break;
        else if (dat.p[i].GetHeso() < 0)
        { 
            os<<"-";
            break;
        }
    }
    for(int i = dat.n; i>=0; i--)
    {
        if (dat.p[i].GetHeso() == 0) continue;
        os<<dat.p[i];
        for (int j = i - 1; j>=0; j--)
        {
            if(dat.p[j].GetHeso() > 0)
            {
                os<<" + ";
                break;
            }
            else if (dat.p[j].GetHeso() <0)
            {
                os<<" - ";
                break;
            }
        }
    }
    return os;
}

//Hàm tính giá trị đa thức
int DaThuc::TinhX(int x)
{
    int tong = 0;
    for (int i =0; i<=n;i++)
        tong = tong + p[i].TinhX(x);
    return tong;
}

// Toán tử cộng hai đa thức
DaThuc DaThuc::operator+(const DaThuc& dat)
{
    DaThuc tong;
    if (n >= dat.n)
        tong.n = n;
    else
        tong.n = dat.n;
    tong.p = new DonThuc[tong.n+1];
    for(int i = 0; i<=tong.n; i++)
    {
        if(i<=n && i<=dat.n)
            tong.p[i] = p[i] + dat.p[i];
        else if(i<=n)
            tong.p[i] = p[i];
        else
            tong.p[i] = dat.p[i];
    }
    return tong;
}

// Toán tử trừ hai đa thức
DaThuc DaThuc::operator-(const DaThuc& dat)
{
    DaThuc hieu;
    if (n >= dat.n)
        hieu.n = n;
    else
        hieu.n = dat.n;
    hieu.p = new DonThuc[hieu.n+1];
    for(int i = 0; i<=hieu.n; i++)
    {
        if(i<=n && i<=dat.n)
            hieu.p[i] = p[i] - dat.p[i];
        else if(i<=n)
            hieu.p[i] = p[i];
        else
        {
            hieu.p[i].SetHeso(dat.p[i].GetHeso()*-1);
            hieu.p[i].SetSomu(i);
        }
    }
    return hieu;
}