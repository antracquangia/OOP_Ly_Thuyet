#ifndef Sophuc_h
#define Sophuc_h
#include <iostream>
using namespace std;
class Sophuc
{
    private:
        float thuc ;
        float ao;
    public:
        Sophuc();
        Sophuc(float a, float b);
        Sophuc(float a);
        ~Sophuc();
        void Set(float a, float b);
        float GetThuc();
        float GetAo();
        friend Sophuc operator+(Sophuc a, Sophuc b);
        friend Sophuc operator-(Sophuc a, Sophuc b);
        friend Sophuc operator*(Sophuc a, Sophuc b);
        friend Sophuc operator/(Sophuc a, Sophuc b);
        friend bool operator==(Sophuc a, Sophuc b);
        friend istream& operator>>(istream& is, Sophuc &a);
        friend ostream& operator<<(ostream& os, Sophuc a);
};
#endif
