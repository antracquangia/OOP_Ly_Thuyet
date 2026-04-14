#include <iostream>
#include "Sophuc.h"
using namespace std;
int main()
{
    Sophuc a,b;
    float c;
    cout<<"Nhap vao so phuc thu nhat:\n";
    cin>>a;
    cout<<"Nhap vao so phuc thu hai:\n";
    cin>>b;
    cout<<"Nhap vao so thuc: ";
    cin>>c;
    cout<<a<<" + "<<b<<" = "<<a+b<<endl;
    cout<<a<<" - "<<b<<" = "<<a-b<<endl;
    cout<<a<<" * "<<b<<" = "<<a*b<<endl;
    if (b.GetThuc() == 0 && b.GetAo() == 0)
    {
        cout<<"Khong the chia cho 0\n";
    }
    else
    {
        cout<<a<<" / "<<b<<" = "<<a/b<<endl;
    }
    if (a == b) cout <<"So phuc a bang so phuc b"<<endl;
    else cout <<"So phuc a khac so phuc b"<<endl;
    cout<<a<<" + "<<c<<" = "<<a+c<<endl;
    cout<<a<<" - "<<c<<" = "<<a-c<<endl;
    cout<<a<<" * "<<c<<" = "<<a*c<<endl;
    if (c == 0) cout <<"Khong the chia cho 0\n";
    else cout<<a<<" / "<<c<<" = "<<a/c<<endl;
    if (a == c) cout <<"So phuc a bang so thuc c"<<endl;
    else cout <<"So phuc a khac so thuc c"<<endl;
    cout<<c<<" + "<<b<<" = "<<c+b<<endl;
    cout<<c<<" - "<<b<<" = "<<c-b<<endl;
    cout<<c<<" * "<<b<<" = "<<c*b<<endl;
    if (b == 0) cout <<"Khong the chia cho 0\n";
    else cout<<c<<" / "<<b<<" = "<<c/b<<endl;
    if (b == c) cout <<"So phuc b bang so thuc c"<<endl;
    else cout <<"So phuc b khac so thuc c"<<endl;
    return 0;
}